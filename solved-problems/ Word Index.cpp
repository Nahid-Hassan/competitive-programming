#include <bits/stdc++.h>
using namespace std;

string a="abcdefghijklmnopqrstuvwxyz";

int main() {
    map<string, int> mp;

    string s, s1, s2, s3, s4, s5;
    int p = 1;

    for(int i = 0; i < 26; i++) {
        s = a[i];
        mp[s] = p;
        p++;
    }
    for(int i = 0; i < 26; i++) {
        for(int j = i + 1; j < 26; j++) {
            s1 = a[i];
            s2 = a[j];
            s = s1 + s2;
            mp[s] = p;
            p++;
        }
    }
    for(int i = 0; i < 26; i++) {
        for(int j = i + 1; j < 26; j++) {
            for(int k = j + 1; k < 26; k++) {
                s1 = a[i];
                s2 = a[j];
                s3 = a[k];
                s = s1 + s2 + s3;
                mp[s] = p;
                p++;
            }
        }
    }
    for(int i = 0; i < 26; i++) {
        for(int j = i + 1; j < 26; j++) {
            for(int k = j + 1; k < 26; k++) {
                for(int l = k + 1; l < 26; l++) {
                    s1 = a[i];
                    s2 = a[j];
                    s3 = a[k];
                    s4 = a[l];
                    s = s1 + s2 + s3 + s4;
                    mp[s] = p;
                    p++;
                }
            }
        }
    }
    for(int i = 0; i < 26; i++) {
        for(int j = i + 1; j < 26; j++) {
            for(int k = j + 1; k < 26; k++) {
                for(int l = k + 1; l < 26; l++) {
                    for(int m = l + 1; m < 26; m++) {
                        s1 = a[i];
                        s2 = a[j];
                        s3 = a[k];
                        s4 = a[l];
                        s5 = a[m];
                        s = s1 + s2 + s3 + s4 + s5;
                        mp[s] = p;
                        p++;
                    }
                }
            }
        }
    }
    string ss;
    while(cin>>ss) {
        cout<<mp[ss]<<endl;
    }

    return 0;
}
/*
BFS with a counter can solve this problem quickly.

Open problem: Can we solve this without going through the sub-trees? Note that the number of all nodes with length 3 starting with a is the set of all size 2 combinations formed with b...z prefixed with a, so the size of that whole a sub-tree can be found quickly using binomial coefficients.

Code:


#include "stdafx.h"

// http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=358

#include "UVa417.h"

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int UVa417()
{
    while (true)
    {
        string s;
        cin >> s;
        if (cin.eof())
        {
            break;
        }
        bool valid = true;
        for (unsigned int i = 1; i < s.length(); i++)
        {
            if (s[i] <= s[i - 1])
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            queue<string> bfs_queue;
            bfs_queue.push("");
            int count = 0;
            while (true)
            {
                string v = bfs_queue.front();
                if (v == s)
                {
                    break;
                }
                count++;
                bfs_queue.pop();
                if (v == "")
                {
                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        char s[2];
                        s[0] = c;
                        s[1] = 0;
                        bfs_queue.push(s);
                    }
                }
                else
                {
                    char last = v[v.length() - 1];
                    for (char next = last + 1; next <= 'z'; next++)
                    {
                        bfs_queue.push(v + next);
                    }
                }
            }
            cout << count << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}

*/
