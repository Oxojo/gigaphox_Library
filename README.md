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

- ✅[Bellman-Ford](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Bellman-Ford.md) : ベルマンフォード法
- ✅[Graph](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Graph.md) : グラフの構造体
- ✅[Kruskal](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Kruskal.md) : クラスカル法
- ✅[Prim](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Prim.md) : プリム法
- [BFS](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/bfs.md) : 幅優先探索
- [DFS](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/dfs.md) : 深さ優先探索
- ✅[Dijkstra](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/dijkstra.md) : ダイクストラ法
- [LCA](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/lca.md) : 最小共通祖先
- [Topological Sort](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/topological.md) : トポロジカルソート

### Math
数学系のライブラリです。幾何はここには含まれていません。

- [Eratosthenes](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/Eratosthenes.md) : エラトステネスの篩
- [Euler_phi](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/Euler_phi.md) : オイラーの $phi$ 関数
- [binomial coefficients](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/binomial-coefficients.md) : 二項係数
- [extgcd](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/extgcd.md) : 拡張ユークリッド互除法
- [invmod](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/invmod.md) : 逆元
- [isprime](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/isprime.md) : 素数判定
- [power](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/power.md) : べき乗
- [prime factorization](https://github.com/Oxojo/Oxojo-Library/blob/main/Math/prime-factorization.md) : 素因数分解

### Structure
構造体のライブラリです。

- [BIT](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/BIT.md) : BIT
- ✅[UnionFind](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/unionfind.md) : UnionFind
