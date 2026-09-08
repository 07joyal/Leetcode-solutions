class KthLargest {
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> p;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (int x : nums) {
            p.push(x);

            if (p.size() > k) {
                p.pop();
            }
        }
    }

    int add(int val) {
        p.push(val);

        if (p.size() > k) {
            p.pop();
        }

        return p.top();
    }
};
