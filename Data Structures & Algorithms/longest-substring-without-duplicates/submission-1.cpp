class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxi=0,left=0;
        vector<int>freq(256,0);
        for(int right=0;right<n;right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
        
    }
};
