class Solution {
public:

    void sol(vector<vector<int>>& image, int i, int j,
             int m, int n, int color, int initial) {

       
        if(i<0 || i >= m || j < 0 || j >= n)
            return;

        if (image[i][j] != initial)
            return;

        if (image[i][j] == color)
            return;

        image[i][j] = color;

        sol(image, i - 1, j, m, n, color, initial);

        sol(image, i + 1, j, m, n, color, initial);

        sol(image, i, j - 1, m, n, color, initial);

        sol(image, i, j + 1, m, n, color, initial);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc, int color) {

        int m = image.size();
        int n = image[0].size();

        int initial = image[sr][sc];

        if (initial == color)
            return image;

        sol(image, sr, sc, m, n, color, initial);

        return image;
    }
};
