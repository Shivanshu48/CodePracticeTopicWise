class Solution {
public:
    bool scoreBalance(string s) {
        return check(s,0);
    }
    int scoreUpdate(string &s,int l,int r){
        if(l > r) return 0;
        if(l == r) return s[l]-'a'+1;
        return(s[l] - 'a' + 1)+scoreUpdate(s,l+1,r);
    }
    bool check(string &s,int i){
        int n = s.size();
        if (i >= n-1) return false;

        int left = scoreUpdate(s,0,i);
        int right = scoreUpdate(s,i+1,n-1);

        if(left == right) return true;

        return check(s,i+1);
    }
};
