class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
       vector<int>p;
       int a,b,c,d ;
       a =d = 0 ;
       b = m[0].size()-1 ;
       c = m.size()-1 ;
       
       int f =0 ;
       while(c>=a && b>=d) {
            
        if(f == 0){
         for(int i = d ; i<=b ;i++) {
             p.push_back(m[a][i]) ;
         }
         a++;
        }


         else if(f == 1) {
          for(int i = a ; i<=c ;i++) {
             p.push_back(m[i][b]) ;
         }
         b--;

         }


         else if(f == 2) {

            for(int i = b ; i>=d ;i--) {
             p.push_back(m[c][i]) ;
         }
         c--;

         }

         else{

          for(int i = c ; i>=a ;i--) {
             p.push_back(m[i][d]) ;
         }
         d++;
         }

        f = (f+1)%4 ; 


     
       }
       return p;
 }
};
