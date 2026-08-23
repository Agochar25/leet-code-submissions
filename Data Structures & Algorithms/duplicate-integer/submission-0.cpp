class Solution {
public:
    bool hasDuplicate(vector<int>& nums){
        unordered_set<int> seen;
        for(int num: nums)
        {
            // number already exits
            if(seen.find(num)!=seen.end()){
                return  true;
            }
            //store number 
            seen.insert(num);
        }
        return false ;
     }
 };