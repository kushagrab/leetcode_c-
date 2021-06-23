class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {   
        sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        for (int i=0; i<nums.size(); i++) 
        {
            if ((i>0) && (nums[i]==nums[i-1]))
                continue;
            
            int l = i+1, r = nums.size()-1;
            while (l<r) 
            {
                int sum = nums[i]+nums[l]+nums[r];
                if (sum>0)
                {
                    r--;
                }
                else if (sum<0)
                {
                    l++;
                }
                else 
                {
                    while(l<nums.size()-1 && nums[l] == nums[l+1])
                    {
                        l++;
                    }
                    while(r>1 && nums[r] == nums[r-1])
                    {
                            r--;
                    }
                    vec.push_back(vector<int> {nums[i], nums[l], nums[r]});
                    if(l<nums.size()) {l++;}  
                    if(r >0) {r--;}  
                }
            }
        }
        return vec; 
    }
};
