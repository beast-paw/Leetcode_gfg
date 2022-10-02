class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& q) {
        
        vector<int>ans;
        for(int i=0;i<q.size();i++)
        {
            int t=0;
            for(int j=0;j<points.size();j++)
            {
                if((points[j][0]-q[i][0])*(points[j][0]-q[i][0])+(points[j][1]-q[i][1])*(points[j][1]-q[i][1])<=q[i][2]*q[i][2])
                    t++;
            }
            ans.push_back(t);
        }
        return ans;
    }
};