class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int > m;
        vector<int> ans;
        int c=0,s=0;
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        for(auto it: m){
           ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end());
        for(int i=ans.size()-1; i>=0; i--){
           s=s+ans[i];
           c++;
           if(s>=arr.size()/2)
           break;
            }
        
        return c;
    }
};
