class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<int>st;
        for(char c:s){
            if(c=='{' || c=='[' || c=='('){
                st.push(c);
            }
            else{
                if(!st.empty()){
                    if((st.top()=='[' && c==']')||(st.top()=='{' && c=='}') || (st.top()=='(' && c==')')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }
};
