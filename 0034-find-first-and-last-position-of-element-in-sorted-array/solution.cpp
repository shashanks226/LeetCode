class Solution {
public:
    int firstIndex(vector<int>& nums, int target) {
        int tail = nums.size() - 1;
        int head = 0;
        int start = -1;
        while (head <= tail) {
            int mid = head + (tail - head) / 2;
            if (nums[mid] == target) {
                start = mid;
                tail = mid - 1;
            } else if (target > nums[mid]) {
                head = mid + 1;
            } else if (target < nums[mid]) {
                tail = mid - 1;
            }
        }
        return start;
    }

    int lastIndex(vector<int>& nums, int target) {
        int tail = nums.size() - 1;
        int head = 0;
        int end = -1;
        while (head <= tail) {
            int mid = head + (tail - head) / 2;
            if (nums[mid] == target) {
                end = mid;
                head = mid + 1;
            } else if (target > nums[mid]) {
                head = mid + 1;
            } else if (target < nums[mid]) {
                tail = mid - 1;
            }
        }
        return end;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        return {firstIndex(nums, target), lastIndex(nums, target)};
    }
};
