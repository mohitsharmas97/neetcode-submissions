class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int duplicate=-1,missing=-1;
        for(int i=0;i<=nums.size();i++){
            if(mpp[i]==2){
                duplicate=i;
            }
            if(mpp[i]==0){
                missing=i;
            }
        }
        return {duplicate,missing};
   
        
    }
};