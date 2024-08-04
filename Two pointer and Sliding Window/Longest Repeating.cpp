class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans =0;
        for(int c='A';c<'Z'+1;c++){
            int i=0,j=0,replace=0;
            while(j<s.size()){
                if(s[j]!=c){
                    replace++;
                }
                while(replace>k){
                    ans = max(ans,j-i);
                    if(s[i]!= c) replace--; // so we increment our chances of replacement
                    i++; // we move forward with our left pointer and exclude
                    }
                j++;
            }
             ans = max(ans,j-i);
        }
        return ans;
    }
};