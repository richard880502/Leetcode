class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> result= {1};
        if (rowIndex == 0)return result;
       
        result.push_back(1);  
        for (int i = 1; i < rowIndex ;i++)
        {
            for(int j = 1; j < result.size(); j++)
            {
                result.push_back(result[1]+result[0]);
                result.erase(result.begin());
            }           
            result.push_back(1); 
        }
        return result;
    }
};