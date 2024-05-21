void dijkstra(const Graph &G, ll s, vector<long long>& dis) {
    int N = G.size();
    dis.resize(N, INF);
    priority_queue<P, vector<P>, greater<P>> pq;
    dis[s] = 0;
    pq.emplace(dis[s], s);
    while (!pq.empty()) {
        P p = pq.top(); pq.pop();
        int v = p.second;
        if (dis[v] < p.first) {
            continue;
        }
        for (auto& e : G.G[v]) {
            if (dis[e.to] > dis[v] + e.cost) {
                dis[e.to] = dis[v] + e.cost;
                pq.emplace(dis[e.to], e.to);
            }
        }
    }
}
