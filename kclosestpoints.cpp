class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         vector<pair<int, int>> ans;
        for(int i = 0; i < points.size(); i ++){
            int x = points[i][0], y = points[i][1];
           ans.push_back({x * x + y * y, i});
        }
        sort(ans.begin(), ans.end());
        vector<vector<int>> res;
        for(int i = 0; i < k; i ++){
            res.push_back(points[ans[i].second]);
        }
        return res;
    
    }
}
