#include<bits/stdc++.h>
using namespace std;
void subarraywithgivensum(int arr[],int n,int x){
    int sum=arr[0];
    int start=0,end=-1,found=0;
    for(int i=1;i<=n;i++){
        while(sum>x and start<i-1)
        {
            sum-=arr[start];
            start++;
        }
        if(sum==x)
        {
            end=i;
            found=1;
            break;
        }
        if(i<n){
            sum=sum+arr[i];
        }
    }   
    if(found){
        cout<<"start"<<start+1<<endl;
        cout<<"end"<<end<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

}
void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    subarraywithgivensum(arr,n,x);
}
int main(){
    solve();
}