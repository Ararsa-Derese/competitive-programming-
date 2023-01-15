class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <string> st;
        if(tokens.size()==1)
        return stoi(tokens[0]);
        int ans=0;
        string c;
        string d;
        for(int i=0; i<tokens.size(); i++){
            st.push(tokens[i]);
            if(st.top()=="+"|| st.top()=="*"|| st.top()=="-"|| st.top()=="/"){
                string a = st.top();
                st.pop();
            
            if(a=="+"){
                c=st.top();
                st.pop();
                d=st.top();
                st.pop();
                 ans=stoi(c)+ stoi(d);
                 st.push(to_string(ans));
            }
            
            else if(a=="-"){
                 c=st.top();
                st.pop();
                d=st.top();
                st.pop();
                 ans=stoi(d)- stoi(c);
                   st.push(to_string(ans));
            }
            
            else if(a=="*"){
               c=st.top();
                st.pop();
                d=st.top();
                st.pop();
                 ans=stoi(c) * stoi(d);  
                st.push(to_string(ans));
            }
            
            else if(a=="/"){
              c=st.top();
                st.pop();
                d=st.top();
                st.pop();
                 ans=stoi(d) / stoi(c);
                   st.push(to_string(ans));
            }
        }
        }
        return ans;
    }
};
