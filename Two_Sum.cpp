class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i=0; i<nums.size(); i++)
        {
            int secondNum = target - nums[i];
            auto it = find(nums.begin(), nums.end(), secondNum);               
            if(it != nums.end())
            {   
                if(it - nums.begin() != i)
                {
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(it - nums.begin());
                    break;
                }
            }
        }
        return nums;
    }
};
