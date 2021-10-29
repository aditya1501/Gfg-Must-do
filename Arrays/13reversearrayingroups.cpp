#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=k){
        int l=0;
        int r=min(i+k-1,n-1);
        while(l<r){
            swap(arr[l++],arr[r--]);
        }
    }
}
int main(){
    solve();
}