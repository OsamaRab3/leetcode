#include "stack"
using std::stack;
class Solution {
public:
    stack<char> sch;
    bool found(char c) {return c == '(' || c == ')';}
    int maxDepth(string s) {
        int count = 0;
        int mx=0;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (found(s[i])) {
                if(s[i]=='(')
                    {
                        count++;
                        mx=max(mx,count);
                    }
                else
                {
                    count--;
                }
            }
        }
       return mx;
    }
};