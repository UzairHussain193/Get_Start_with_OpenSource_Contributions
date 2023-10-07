#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        int n = nums1.size();
        int m = nums2.size();
        int k = (n+m-1)/2;
        int p1 = 0;
        int p2=0;
        double ans;
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        while(p1+p2<k){
            if(nums1[p1]<nums2[p2])
                ++p1;
            else
                ++p2;
        }
        if((m+n) % 2 == 1){
            if(nums1[p1]<nums2[p2])
                return nums1[p1];
            else
                return nums2[p2];
        }
        else{
            if(nums1[p1]<nums2[p2]){
                ans = nums1[p1];
                ++p1;
            }
            else{
                ans = nums2[p2];
                ++p2;
            }
            if(nums1[p1]<nums2[p2])
                ans += nums1[p1];
            else
                ans += nums2[p2];
        }
        return ans/2.0;
}

int main(){
	
	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	vector<int>b(m);
	
	for(int i=0; i<n; ++i){
		cin>>a[i];
	}
	for(int i=0; i<m; ++i){
		cin>>b[i];
	}
	cout<<findMedianSortedArrays(a,b);
	return 0;
}
