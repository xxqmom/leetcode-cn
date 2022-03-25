class Solution {
public:
    //向下取整的函数是floor
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();//行数
        int n = img[0].size();//列数
        vector<vector<int>> result;
        for(int i = 0; i < m; i++){
            vector<int> row;
            for(int j = 0; j < n; j++){
                int sum = 0;
                int cnt = 1;
                sum += img[i][j];
                if( i - 1 >= 0 && j - 1 >= 0) sum += img[i-1][j-1], cnt++;
                if( i - 1 >= 0 && j >= 0) sum += img[i-1][j], cnt++;
                if( i - 1 >= 0 && j + 1 < n ) sum += img[i-1][j+1], cnt++;
                if( i >= 0 && j + 1 < n) sum += img[i][j+1], cnt++;
                if( i + 1 < m && j + 1 < n) sum += img[i+1][j+1], cnt++;
                if( i + 1 < m && j < n) sum += img[i+1][j], cnt++;
                if( i + 1 < m && j - 1 >= 0) sum += img[i+1][j-1], cnt++;
                if( i >= 0 && j - 1 >= 0) sum += img[i][j-1], cnt++;
                row.push_back(floor(sum/cnt));
            }
            result.push_back(row);
        }
        return result;
    }
};