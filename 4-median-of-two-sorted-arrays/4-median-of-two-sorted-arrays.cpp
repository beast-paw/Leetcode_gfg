class Solution {
    void merge(vector<int>& n1,vector<int>& n2,vector<int>&v){
        int i=0,j=0;
        while(i<n1.size()&&j<n2.size())
        {
            if(n1[i]<n2[j])
            {
                v.push_back(n1[i]);
                i++;
            }
            else{
                v.push_back(n2[j]);
                j++;
            }
        }
        for(;j<n2.size();j++)
            v.push_back(n2[j]);
        for(;i<n1.size();i++)
            v.push_back(n1[i]);
        
        
    }
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
       vector<int>v;
       merge(n1,n2,v);
      // sort(v.begin(),v.end());
        int k=v.size()/2;
       if(v.size()%2==0)
       { 
           
           return (1.0*(v[k]+v[k-1])/2);
       }
       else
           return 1.0*v[k];
        
    }
};