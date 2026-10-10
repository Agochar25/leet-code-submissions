class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         // count the numbe5r of  row 
         int m = matrix.size();
          // count the number of coloumn
         int n = matrix[0].size() ;
         // left represent the  form   where the current search area  start 
         int left = 0;
         int right = m*n-1;
          while( left <= right){
            // caclute the mid element 
            int mid = left + (right - left) /2 ;
            // convert the mid element in  row and coloumn  
            // for row we will use the division 
            int row  = mid / n;
            // for the coloun we will use the moduleint 
            int col = mid % n;
            // now compare
            if(matrix[row][col] == target){
                return true;
            }
             else if (matrix[row][col] <   target){
                left = mid +1;
             }
             else{
                right = mid -1 ;
             }
          }
          return false ;
        
    }
};
