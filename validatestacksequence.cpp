class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
      stack<int> ans;
      int j=0; 
      for(int i=0; i<pushed.size(); i++){
          ans.push(pushed[i]);
          while(!ans.empty() && ans.top()==popped[j])
          {
              ans.pop();
              j++;
          }
      }

        return ans.empty(); 
    }
};
