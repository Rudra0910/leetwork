class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            set<char> st;
            for(int j=i;j<s.size();j++){
                if(st.find(s[j])!=st.end()){
                    break;
                }
                st.insert(s[j]);
                maxlen=max(maxlen,int(st.size()));

            }
        }
        return maxlen;
    }

};