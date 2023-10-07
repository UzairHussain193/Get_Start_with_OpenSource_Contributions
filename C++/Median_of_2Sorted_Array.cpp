#include <iostream>
#include <vector>
#include <climits> // Include this header for INT_MIN and INT_MAX

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
        swap(nums1, nums2);
    }
    
    int m = nums1.size();
    int n = nums2.size();
    
    int left = 0, right = m, halfLen = (m + n + 1) / 2;
    
    while (left <= right) {
        int partitionX = (left + right) / 2;
        int partitionY = halfLen - partitionX;
        
        int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        
        int minX = (partitionX == m) ? INT_MAX : nums1[partitionX];
        int minY = (partitionY == n) ? INT_MAX : nums2[partitionY];
        
        if (maxX <= minY && maxY <= minX) {
            if ((m + n) % 2 == 0) {
                return (max(maxX, maxY) + min(minX, minY)) / 2.0;
            } else {
                return max(maxX, maxY);
            }
        } else if (maxX > minY) {
            right = partitionX - 1;
        } else {
            left = partitionX + 1;
        }
    }
    
    throw invalid_argument("Input arrays are not sorted.");
}

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    
    double median = findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;
    
    return 0;
}
