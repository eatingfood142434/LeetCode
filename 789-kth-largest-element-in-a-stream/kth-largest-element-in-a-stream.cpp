class KthLargest {
private:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;

public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for (const int& n : nums) {
            if (pq.size() < k) pq.push(n);
            else if (n > pq.top()) {
                pq.pop();
                pq.push(n);
            }
        }
    }
    
    int add(int val) {
        if (pq.size() < k) pq.push(val);
        else if (val > pq.top()) {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */