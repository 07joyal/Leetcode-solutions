class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();

        vector<pair<int, pair<int, int>>> temp;

        
        for(int i = 0; i < n; i++) {
            temp.push_back({matrix[i][0], {i, 0}});
        }

        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > pq(temp.begin(), temp.end());

        int ans = 0;

        while(k--) {

            auto element = pq.top();
            pq.pop();

            ans = element.first;

            int row = element.second.first;
            int col = element.second.second;

           
            if(col + 1 < n) {
                pq.push({
                    matrix[row][col + 1],
                    {row, col + 1}
                });
            }
        }

        return ans;
    }
};
