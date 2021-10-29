#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n,i;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }    
   for(int i=0;i<n-1;i++){
       if(i%2==0)
       {
           if(a[i]>a[i+1]){
               swap(a[i],a[i+1]);
           }
       }
       else{
           if(a[i]<a[i+1]){
               swap(a[i],a[i+1]);
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" "
   }
}  
int main(){
    solve();
}