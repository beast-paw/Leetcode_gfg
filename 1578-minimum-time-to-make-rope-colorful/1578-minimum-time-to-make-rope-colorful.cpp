class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int i=0, ans = 0;
        while(i<s.size()){
            char cur = s[i];
            int j = i+1;
            while(j<s.size() && s[i]==s[j]) ++j;
            int maidx =max_element(cost.begin()+i,cost.begin()+j)-cost.begin();
            for(int a=i;a<j;++a){
                if(maidx == a) continue;
                  ans+=cost[a];
            }
             i=j;
        }
        return ans;
    }
};