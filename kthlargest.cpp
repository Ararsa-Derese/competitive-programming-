class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [](const string& s1, const string& s2){
            if (s1.length() < s2.length())
                return true;
            if (s2.length() < s1.length())
                return false;
            else
                return (s1 < s2);
        });
        return nums[nums.size()-k];
    }
};
