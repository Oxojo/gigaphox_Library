# Oxojo-Library

## Oxojo-Library について
私が使っているライブラリを適当にまとめたものです。Verify は Github に移植する段階でちょくちょくいじっているためできていないものが多いです。<br>
Verify ができているものはここの目次にチェックを入れるつもりなので、参考にしてください。

## 前提
最初に次がテンプレで書いてあることを前提にしています（といいつつ普通に自分のテンプレだけど）：
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define reps(i, l, r) for(ll i = (l); i < (r); i++)
#define endl "\n";
const ll INF = 1e16;
const ll mod1 = 1000000007;
const ll mod2 = 998244353;
ll dx[4] = {-1, 0, 1, 0};
ll dy[4] = {0, -1, 0, 1};
```

## 目次
あったほうがいいかなって...
### Graph
グラフに関するライブラリです。

- [Bellman-Ford](https://oxojo.github.io/Oxojo-Library/Graph/Bellman-Ford) : ベルマンフォード法
- [Graph](https://oxojo.github.io/Oxojo-Library/Graph/Graph) : グラフの構造体
- [Kruskal](https://oxojo.github.io/Oxojo-Library/Graph/Kruskal) : クラスカル法
- [Prim](https://oxojo.github.io/Oxojo-Library/Graph/Prim) : プリム法
- [BFS](https://oxojo.github.io/Oxojo-Library/Graph/bfs) : 幅優先探索
- [DFS](https://oxojo.github.io/Oxojo-Library/Graph/dfs) : 深さ優先探索
- [Dijkstra](https://oxojo.github.io/Oxojo-Library/Graph/dijkstra) : ダイクストラ法
- [LCA](https://oxojo.github.io/Oxojo-Library/Graph/lca) : 最小共通祖先
- [Topological Sort](https://oxojo.github.io/Oxojo-Library/Graph/topological) : トポロジカルソート

### Math
数学系のライブラリです。幾何はここには含まれていません。

- [Eratosthenes](https://oxojo.github.io/Oxojo-Library/Math/Eratosthenes) : エラトステネスの篩
- [Euler_phi](https://oxojo.github.io/Oxojo-Library/Math/Euler_phi) : オイラーの $phi$ 関数
- [binomial coefficients](https://oxojo.github.io/Oxojo-Library/Math/binomial-coefficients) : 二項係数
- [extgcd](https://oxojo.github.io/Oxojo-Library/Math/extgcd) : 拡張ユークリッド互除法
- [invmod](https://oxojo.github.io/Oxojo-Library/Math/invmod) : 逆元
- [isprime](https://oxojo.github.io/Oxojo-Library/Math/isprime) : 素数判定
- [power](https://oxojo.github.io/Oxojo-Library/Math/power) : べき乗
- [prime factorization](https://oxojo.github.io/Oxojo-Library/Math/prime-factorization) : 素因数分解

### Structure
構造体のライブラリです。

- [BIT](https://oxojo.github.io/Oxojo-Library/Structure/BIT) : BIT
- [UnionFind](https://oxojo.github.io/Oxojo-Library/Structure/unionfind) : UnionFind
