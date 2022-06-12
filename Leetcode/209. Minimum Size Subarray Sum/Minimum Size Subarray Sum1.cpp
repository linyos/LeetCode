class Solution {
public:
	int minSubArrayLen(int target, vector<int>& nums) {
		int i = 0, j = 0;
		int a = INT_MAX;
		int sum = 0;
		while (i < nums.size())
		{
			sum += nums[i];
			if (sum >= target) {
				if (i - j + 1 < a)
					a = i - j + 1;

				sum -= nums[j];
				sum -= nums[i];
				j++;
			}
			else {
				i++;
			}
		}
		return a == INT_MAX ? 0 : a;
	}
};