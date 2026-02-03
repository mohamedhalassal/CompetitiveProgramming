class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.back()==' '){
            s.pop_back();
        }
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' ')cnt++;
            else break;
        }
        return cnt;
    }
};