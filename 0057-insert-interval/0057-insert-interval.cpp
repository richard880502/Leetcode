class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {   
        vector <vector<int>> result;     
        int start = 0 ;

        for (int i = 0; i < intervals.size();i++)
        {
            if (intervals[i][1] < newInterval[0])
            {   
                start++;
                result.push_back(intervals[i]);
            }
            else if (intervals[i][0] > newInterval[1])
                result.push_back(intervals[i]);
            else
            {                                
                newInterval[1] = max(newInterval[1],intervals[i][1]);
                newInterval[0] = min(newInterval[0],intervals[i][0]);
            }    
        }
        result.insert(result.begin()+start,newInterval);
        
        return result;
    }
};