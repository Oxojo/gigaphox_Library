struct BIT {
    int N;
    vector<ll>A;
    BIT(int N_) : N(N_ + 1), A(N, 0) {}
    
    void add(int i, ll x) {
        for (int idx = i; idx < N; idx += (idx & -idx)) {
            A[idx] += x;
        }
    }
    
    ll sum(int i) {
        s = 0;
        for (int idx = i; idx > 0; idx -= (idx & -idx)) {
            s += A[idx];
        }
        return s;
    }
};
