#include <iostream>
#include <vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    
    // Ensure that nums1 is the smaller array
    if (m > n) {
        swap(nums1, nums2);
        swap(m, n);
    }
    
    int iMin = 0, iMax = m;
    int halfLen = (m + n + 1) / 2;
    
    while (iMin <= iMax) {
        int i = (iMin + iMax) / 2;
        int j = halfLen - i;
        
        if (i < m && nums2[j - 1] > nums1[i]) {
            // Increase i
            iMin = i + 1;
        } else if (i > 0 && nums1[i - 1] > nums2[j]) {
            // Decrease i
            iMax = i - 1;
        } else {
            // Found the correct partition
            int max_of_left;
            if (i == 0) {
                max_of_left = nums2[j - 1];
            } else if (j == 0) {
                max_of_left = nums1[i - 1];
            } else {
                max_of_left = max(nums1[i - 1], nums2[j - 1]);
            }
            
            if ((m + n) % 2 == 1) {
                return max_of_left;
            }
            
            int min_of_right;
            if (i == m) {
                min_of_right = nums2[j];
            } else if (j == n) {
                min_of_right = nums1[i];
            } else {
                min_of_right = min(nums1[i], nums2[j]);
            }
            
            return (max_of_left + min_of_right) / 2.0;
        }
    }
    
    // Return 0.0 if no median is found (this should not happen for sorted arrays)
    return 0.0;
}

