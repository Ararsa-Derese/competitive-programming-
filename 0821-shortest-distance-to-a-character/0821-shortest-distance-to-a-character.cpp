class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
          int n = s.length();
	vector<int>v;
	for (int i = 0;i < n;i++) {
		int distance = 0;
		for (int j = i, k = i;j < n || k >= 0;j++, k--) {
			if ((k >= 0 && s[k] == c) || (j < n && s[j] == c )) {
				v.push_back(distance);
				break;
			}
			distance++;
		}

	}
	return v;
    }
};