class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        stack<int>s;
        vector<int>v1;
        int n=v.size();
        for(int i=2*n;i>=0;i--)
        {
            if(s.empty())
            {
                v1.push_back(-1);
                s.push(v[(i)%n]);
            }
            else
            {
                while(!s.empty()&&s.top()<=v[(i)%n]){s.pop();}
                if(s.empty())
                {
                    v1.push_back(-1);
                    s.push(v[(i)%n]);
                }
                else
                { 
                    int k=s.top();
                    v1.push_back(k);
                    s.push(v[(i)%n]);
                }
            }
        }
        vector<int>ans;
        reverse(v1.begin(),v1.end());
        cout<<v1.size()<<" ";
        for(int i=0;i<n;i++)
              ans.push_back(v1[i]);
        return ans;
        
        
    }
};