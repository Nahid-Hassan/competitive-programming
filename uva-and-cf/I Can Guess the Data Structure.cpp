#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool ss, qq, PQ;

    while(cin>>n) {
        int option, temp;

        stack <int> s;
        queue <int> q;
        priority_queue <int> pq;

        ss = qq = PQ = true;

        for(int i = 0 ; i < n; i++) {
            cin>>option>>temp;
            if(option == 1) {
                if(ss) s.push(temp);
                if(qq) q.push(temp);
                if(PQ) pq.push(temp);
            } else if (option == 2) {
                if(ss) {
                    if(!s.empty() && s.top() == temp) {
                        s.pop();
                    } else {
                        ss = false;
                    }
                }
                if(qq) {
                    if(!q.empty() && q.front() == temp) {
                        q.pop();
                    } else {
                        qq = false;
                    }
                }
                if(PQ) {
                    if(!pq.empty() && pq.top() == temp) {
                        pq.pop();
                    } else {
                        PQ= false;
                    }
                }
            }
        }
        int sum = ss + qq + PQ;
        if(sum == 1) {
            if(ss) {
                cout<<"stack"<<endl;
            } else if(qq) {
                cout<<"queue"<<endl;
            } else {
                cout<<"priority queue"<<endl;
            }
        } else if (sum > 1) {
            cout<<"not sure"<<endl;
        } else {
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}
