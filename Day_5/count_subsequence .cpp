#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
int n ;

int subsequence(vector<int>&arr ,vector<int>&vec, int ind ,   int &k , int sum) {
     
      if(ind >= n) {
        if(ind>= n && sum == k  ){
      //   for(auto i: vec) {
      //       cout<<i<<" ";
      //   }
      //  cout<<endl;
          return 1 ;
      }
      else
        return 0 ;
      }
       
        sum += arr[ind] ;

      // vec.push_back(arr[ind]) ;
       int l = subsequence(arr , vec , ind+1 ,  k , sum) ;
       sum -= arr[ind];
      // vec.pop_back();
       int r = subsequence(arr , vec , ind+1 , k , sum) ;
     
    //  return subsequence(arr , vec  ,ind+1 ,  k , sum) +  subsequence(arr , vec , ind+1 , k , sum) ;
     return l+r ;
   

}


int main() {
    vector<int>p = {4,2 ,2 ,3 , 3} ;
     n = p.size() ;
    vector<int>vec ;
    int k =6 ;
   
    cout<<subsequence(p ,vec,  0 , k , 0);


    

 return 0;

}
