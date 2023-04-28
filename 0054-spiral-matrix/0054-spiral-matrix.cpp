class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     vector <int> spiral;
     int up = 0, left = 0;
     int down = matrix.size()-1,right = matrix[0].size()-1;

     while(true)
     {
        for (int i = left;i <= right; i++)
            spiral.push_back(matrix[up][i]);
        if (++up > down) break;
        for (int i = up; i <= down;i++)
            spiral.push_back(matrix[i][right]);
        if (left > --right) break;
        for (int i = right; i >= left;i--)
            spiral.push_back(matrix[down][i]);
        if (up > --down) break;
        for (int i = down; i >= up;i--)
            spiral.push_back(matrix[i][left]);
        if (++left > right) break;
     }
    return spiral;
    }
};