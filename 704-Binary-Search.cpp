class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mdl=start+(-start+end)/2;
            if (nums[mdl]==target)
                  return mdl;
                  
                else if(nums[mdl]<target)
                {
                    start=mdl+1;

                }
else 
{
    end=mdl-1;
}


        }
        return -1;
        
    }
};