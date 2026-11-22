class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> output = {};
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        for(int i=0;i<n-2;i++){
            int l = i+1;
            int r = n-1;

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == 0){
                    output.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;

                    while(l<r && nums[l] == nums[l-1]){
                        l++;
                    }
                    while(l<r && nums[r] == nums[r+1]){
                        r--;
                    }
                }else if(sum > 0){
                    r--;
                }else if(sum < 0){
                    l++;
                }
            }
        }
        return output;
    }
};