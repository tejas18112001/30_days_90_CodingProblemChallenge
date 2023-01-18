class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int  i  = 0  , sum = 0 , res = INT_MAX;
     
        for( int j = 0  ; j<nums.size() ; j++)
        {
            sum = sum + nums[j] ;
            while(sum>=target)
            {
                res = min(res , j-i+1) ;
                sum = sum - nums[i] ;
                i++ ;
            }
            
           
            
        }
             if(res == INT_MAX)
                 return 0;
          return res ;
           
        }
        
       
      
    
};
