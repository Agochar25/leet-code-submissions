class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
         int right  = *max_element(piles.begin() , piles.end());
         int ans  = right ;
         while (left <= right){
            int mid = left + (right - left) /2 ;
             // then intialize the  totoa hour s  is zero
             long long totalHours  = 0;
             // then w ewill calclulate the  totalhours for each  piles
             for(int pile : piles){
                totalHours += (pile + mid -1) /mid;
             }
              // chekc for the condition 
              if(totalHours <= h){
                ans = mid;
                right = mid -1;
              }
              else{
                left = mid +1;
              }
              


         }
         return ans;
        
    }
};
