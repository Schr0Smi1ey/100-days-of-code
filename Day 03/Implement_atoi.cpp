class Solution{
  public:
    int atoi(string s) {
        int ans = 0, n = s.size();
        for(int i = n - 1,k = 1;i >= 0;i--){
            if(!isdigit(s[i])){
                if(s[i] == '-' && !i){
                    ans *= -1;continue;
                }
                return -1;
            }
            
            ans += ((s[i] - '0')*k);
            k *= 10;
        }
        return ans;
    }
};