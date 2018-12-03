class Solution {
public:
	vector<int> twoSum(vector<int> nums, int target) {
		map<int, int> m;
		for (int i = 0; i < nums.size(); i++) {
			int k = nums[i];
			if (m.find(k) != m.end()) {
				return { m[k], i };
			}
			m[target - k] = i;
		}
	}
};
