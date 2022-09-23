void reverse1(int i,int j,string &str)
{ 
        if(j>str.size()-1)
            j=str.size()-1;
        while(i<j)
        {
            swap(str[i++],str[j--]);
        }
}
class Solution {
public:
    
    string reverseStr(string s, int k) {
        string str=s;
        // if(s.size()<k)
        //     return s;
        
        for(int i=0;i<s.size();i++)
        { 
            
            reverse1(i,i+k-1,s);
            i=i+2*k-1;
        }
        return s;
    }
};