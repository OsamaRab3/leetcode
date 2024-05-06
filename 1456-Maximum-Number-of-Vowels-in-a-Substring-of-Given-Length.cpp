class Solution {
public:
    
bool Vowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int  maxVowels(string s, int k) // a e i o u
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (Vowel(s[i]))
            sum++;
    }
    int max_wind = sum;
    int rm = 0;
    int l = s.size();
    for (int i = k; i < l; i++)
    {
        if (Vowel(s[rm]))
            sum--;
        if (Vowel(s[i]))
            sum++;
        rm++;

        max_wind = max(sum, max_wind);
    }
    return  max_wind;
}          
};