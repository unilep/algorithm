class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> A;
        for(int k : nums1) {
            A.push_back(k);
        }
        for(int k : nums2) {
            A.push_back(k);
        }
        sort(A.begin(), A.end());
        int k = A[A.size() / 2];
        if(A.size() % 2 == 0) {
            k += A[A.size() / 2 - 1];
            return (double)k / 2;
        }
        return k;
    }
};
