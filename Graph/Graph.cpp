struct Edge {
    ll from, to; T cost;
    Edge (ll from, ll to, T cost = 1) : from(from), to(to), cost(cost) {}
};
template<typename T = ll>
struct Graph {
    vector<vector<Edge<T>>> G;
    Graph() = default;
    explicit Graph(ll N) : G(N) {}
    size_t size() const {
        return G.size();
    }
    void add(ll from, ll to, T cost = 1, bool direct = 0) {
        G[from].emplace_back(from, to, cost);
        if (!direct) G[to].emplace_back(to, from, cost);
    }
    vector<Edge<T>> &operator[](const int &k) {
        return G[k];
    }
};
template<typename T = ll>
using Edges = vector<Edge<T>>;
