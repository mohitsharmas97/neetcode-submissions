class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        for(string c:tokens){
            if(c=="+" || c=="-"  || c=="*"  ||c=="/" ){
                
                int val2=st.top();
                st.pop();
                int val1=st.top();
                st.pop();

                if(c=="+"){
                    st.push(val1+val2);
                }
                else if(c=="-"){
                    st.push(val1-val2);
                }
                else if(c=="*"){
                    st.push(val1*val2);
                }
                else if(c=="/"){
                    st.push(val1/val2);
                }                 
            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
        
    }
};
