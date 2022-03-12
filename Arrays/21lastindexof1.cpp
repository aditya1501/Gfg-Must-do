#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    for(int i=s.size();i>=1;i--){
        if(s[i]=='1')
        {
            lastindex=i;
            break;
        }
    }
    cout<<lastindex;
}
int main(){
    solve();
}