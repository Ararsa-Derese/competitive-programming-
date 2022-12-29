class Solution {
public:
    bool isValid(string s) {
     stack<char> check;
     for(int i=0; i<s.size(); i++){
         if(check.empty()){
             if(s[i]=='}' || s[i]==')' || s[i]==']')
             return false;
         }
         if(s[i]=='{' || s[i]=='(' || s[i]=='[')
             check.push(s[i]);
         else{
         if(s[i]==']') {
         if(check.top()=='[')
             check.pop();
             else
            return false;
         }
               if(s[i]==')') {
         if(check.top()=='(')
             check.pop();
             else
            return false;
         }
               if(s[i]=='}') {
         if(check.top()=='{')
             check.pop();
             else
            return false;
         }
     }
     }
      if(check.empty())
     return true;
     else
     return false;
     
    }
};
