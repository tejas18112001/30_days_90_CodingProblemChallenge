class Solution {
public:

   
    /*
    for(int i = 0 ; i<n ; i++) {
        string (0  ,)
         backtrack()
    }
       backtrack()
       if(it is palidrome)
         add string to vector
    */
    
    vector<vector<string>>result;
    int n;

    bool isPalindrome(string s , int i , int j) {
        //j = j-1 ;
        while(j>i) {
            if(s[i++] != s[j--]) return false;
        }
        return true ;
    }

    void solution(string s , vector<string>res , int i ) {
          
          if(i >= n ){
              result.push_back(res);
              return ;
          }

          for(int j = i ; j<n;j++) {
              
              if(isPalindrome(s , i , j)){
                  res.push_back(s.substr(i , j -i+1)) ;
                  solution(s , res ,j+1) ;
                  res.pop_back();
              }

              
          }
          
          return ;
    }


    vector<vector<string>> partition(string s) {
        n = s.size();
        vector<string>res ;
       // string temp ="";
        solution(s ,res, 0 );
        
        return result;
    }
};
