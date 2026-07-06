class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> s;
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {
            int curr = arr[i];
            bool destroyed = false;

            while (!s.empty() && s.top() > 0 && curr < 0) {
                if (s.top() < -curr) {
                    s.pop();
                }
                else if (s.top() == -curr) {
                    s.pop();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                s.push(curr);
            }
        }

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
