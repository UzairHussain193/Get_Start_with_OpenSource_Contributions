#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }

    int x = nums1.size();
    int y = nums2.size();

    int low = 0, high = x;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;

        int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];

        int minX = (partitionX == x) ? INT_MAX : nums1[partitionX];
        int minY = (partitionY == y) ? INT_MAX : nums2[partitionY];

        if (maxX <= minY && maxY <= minX) {
            if ((x + y) % 2 == 0) {
                return (double)(std::max(maxX, maxY) + std::min(minX, minY)) / 2;
            } else {
                return (double)std::max(maxX, maxY);
            }
        } else if (maxX > minY) {
            high = partitionX - 1;
        } else {
            low = partitionX + 1;
        }
    }

    throw std::invalid_argument("Input arrays are not sorted.");
}

int main() {
    std::cout << "Enter the number of elements in the first sorted array: ";
    int n1;
    std::cin >> n1;

    std::cout << "Enter the elements of the first sorted array: ";
    std::vector<int> nums1(n1);
    for (int i = 0; i < n1; ++i) {
        std::cin >> nums1[i];
    }

    std::cout << "Enter the number of elements in the second sorted array: ";
    int n2;
    std::cin >> n2;

    std::cout << "Enter the elements of the second sorted array: ";
    std::vector<int> nums2(n2);
    for (int i = 0; i < n2; ++i) {
        std::cin >> nums2[i];
    }

    double median = findMedianSortedArrays(nums1, nums2);

    std::cout << "Median of the two sorted arrays is: " << median << std::endl;

    return 0;
}
