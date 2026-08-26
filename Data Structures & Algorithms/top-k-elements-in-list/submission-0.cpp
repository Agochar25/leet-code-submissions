class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto& pair:freq){
            int num = pair.first;
            int count  = pair.second;
            bucket[count].push_back(num);
        }
        vector<int>result;
        for(int i =nums.size(); i>=1; i--){
            for(int num: bucket[i]){
                result.push_back(num);
            }
            if(result.size() == k){
                return result;
            }
        }
        return result;

        
    }
};
