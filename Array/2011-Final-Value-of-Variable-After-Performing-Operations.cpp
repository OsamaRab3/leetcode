class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        int l=operations.size();
        for (int i=0;i<l;i++)
        {
            if (operations[i]=="++X"||operations[i]=="X++")
                sum++;
            else 
                sum--;
        }
        return sum;
    }
};