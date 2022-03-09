#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
};

void solve(){
    Solution s1;
    vector<int>a{1,4,9,6,7};
    int target=5;
    int ans=s1.search(a,5);
    cout<<ans;

}
int main(){
    solve();
}