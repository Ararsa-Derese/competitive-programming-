class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
       map<int, int> m;
    vector<int> v;
    
    sort(changed.begin(), changed.end());
    for(int i = 0; i < changed.size(); i++) {
        if(m[changed[i]] == 0) {
            v.push_back(changed[i]);
            m[2*changed[i]]++;
        }
        else {
            m[changed[i]]--;
        }       
    }
    return (v.size() == changed.size()/2) ? v : vector<int>{} ;
    }


};
