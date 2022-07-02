#include <bits/stdc++.h>
using namespace std;

#define input_file() {freopen("in.txt", "rt", stdin);}

int main() {
    //input_file();
    int testCase;

    int casen = 0;
    while(cin >> testCase && testCase != 0) {
        cout << "Case "<< ++casen << ":" << endl; 
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n");
        printf("{\n");
        
        string s;
        cin.ignore();
        for(int i = 0; i < testCase; i++) {
            getline(cin, s);
            cout << "printf(\"";

            for(int i = 0; i < s.size(); i++) {
                if(isalnum(s[i]) || isspace(s[i])) {
                    cout << s[i];
                } else {
                    if(s[i] == '\"') {
                        printf("\\\"");
                    } else if (s[i] == '\'') {
                        printf("\\\'");
                    } else if(s[i] == '\\') {
                        printf("\\\\");
                    }
                }
            }
            printf("\\n\");\n");
        }
        printf("printf(\"\\n\");\n");
        printf("return 0;\n");
        printf("}\n");
    }

    return 0;
}