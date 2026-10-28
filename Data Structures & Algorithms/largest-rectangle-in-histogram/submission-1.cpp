class Solution {
public:
  vector<int>nse(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
  }
    vector<int>pse(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
        
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
    vector<int>left=pse(heights);
    vector<int>right=nse(heights);
    int maxarea=0;
    for(int i=0;i<heights.size();i++){
        int width=right[i]-left[i]-1;
        int area=heights[i]*width;
        maxarea=max(area,maxarea);
    }
    return maxarea;
        
    }
};
