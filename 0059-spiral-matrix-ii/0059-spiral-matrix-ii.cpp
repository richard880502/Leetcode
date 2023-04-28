class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector <vector<int>> spiral(n);
        for (int i = 0;i < spiral.size();i++)
            spiral[i].resize(n);
        int up = 0,left = 0;
        int down = n, right = n;
        
        
        for (int i = 1 ;i <= n*n;)
        {
            for (int j = left;j < right;j++)
                spiral[up][j] = i++;
            if (down < ++up) break;
            for (int j = up;j < down;j++)
                spiral[j][right-1] = i++;
            if (--right < left) break;
            for (int j = right-1; j >= left;j--)
                spiral[down-1][j] = i++;
            if (--down < up) break;
            for (int j = down-1; j >= up; j--)
                spiral[j][left] = i++;
            if (right < ++left) break;
        }
        return spiral;
    }
};