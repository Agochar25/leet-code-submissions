class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        //  the tiw pointer  never cross each  othe r
        while(left < right){
             int sum = numbers[left] + numbers[right];
            // case 1 if the sum  and the target is equal
            if(sum == target){
                return { left+1,right +1};
            }
            // case 2  if the  sum is too bigger than  target
            else if(sum > target){
                right --;
            }
            // case 3 if the target is too much bigger than  sum
            else{
                left ++;
            }
        }
        return {};

        
    }
};
