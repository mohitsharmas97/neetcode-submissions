class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();

        for(int i=0;i<=m-n;i++){
            string sub=s2.substr(i,n);
            string a=s1;
            sort(a.begin(),a.end());
            sort(sub.begin(),sub.end());
            if(sub==a){
                return true;
            }
        }
        return false;
        
    }
};
