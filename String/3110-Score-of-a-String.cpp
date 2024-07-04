class Solution {
public:
    int scoreOfString(string s) 
    {
        int l=s.length();
        int sum=0;
        int sa=0;
        for (int i=0;i<l-1;i++)
        {
            sa=abs((s[i]-'0')-(s[i+1]-'0'));
            sum+=sa;
        }
        return sum;
    }
};