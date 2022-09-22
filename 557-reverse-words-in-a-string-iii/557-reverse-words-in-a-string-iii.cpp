class Solution {
public:
    string reverseWords(string s) {
        string str="" ,ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                str+=s[i];
            else
            {
                reverse(str.begin(),str.end());
                ans+=str+" ";
                str="";
            }
        }
        reverse(str.begin(),str.end());
        ans+=str;
        return ans;
    }
};