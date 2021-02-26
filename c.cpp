#include <bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   for(int i=0; i<t; i++){
     
     long long n;
     string p;
     cin>>n;
     for(int j=0; j>=0; j++){
       
       if(n%2 == 0){
         p = "NO";
         n = n/2;
       }else if(n == 1){
         p = "NO";
         break;
       }else{
         p = "YES";
         break;
       }
     }
     cout<<p<<"\n";
   }

 return 0;
}