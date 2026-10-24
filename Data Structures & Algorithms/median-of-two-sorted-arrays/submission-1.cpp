class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
         int n1 = nums1.size();
         int n2 = nums2.size();
         int total = n1 + n2;
         int half = total/2;
         int left = 0;
         // which position  we are doing  partion 
         int right = n1;
         while(true){
            int i = (left +right)/2;
            int j = half -i;
            int Aleft = (i>0) ? nums1[i-1] : INT_MIN;
            int Aright = (i<n1) ? nums1[i] : INT_MAX;
            int Bleft = (j>0) ? nums2[j-1] : INT_MIN;
            int Bright = (j<n2) ? nums2[j] : INT_MAX;
            if(Aleft <= Bright && Bleft <= Aright){
                if(total % 2){
                    return min(Aright , Bright);
                }
                return(max(Aleft ,Bleft) +
                 min(Aright,Bright)) /2.0;
            }
            else if(Aleft > Bright){
                right = i-1;
            }
            else{
                left = i+1;
            }

         }
         return 0;
        
    }
};
