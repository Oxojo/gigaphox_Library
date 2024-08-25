# gigaphox_Library

## gigaphox-Library について
~~私が使っているライブラリを適当にまとめたものです。Verify は Github に移植する段階でちょくちょくいじっているためできていないものが多いです。<br>
Verify ができているものはここの目次にチェックを入れるつもりなので、参考にしてください。~~ <br>
Oxojo が使ってるライブラリを適当にまとめたものでした. 現在は, うちらのチームで使うライブラリとしてみんなで編集したいおきもちです.

## 前提
最初に次がテンプレで書いてあることを前提にしています（といいつつ普通に自分のテンプレだけど）：
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define reps(i, l, r) for(ll i = (l); i < (r); i++)
#define all(a) (a).begin(), (a).end()
#define endl "\n";
const ll INF = 2e18;
const ll mod1 = 1000000007;
const ll mod2 = 998244353;
ll dx[4] = {-1, 0, 1, 0};
ll dy[4] = {0, -1, 0, 1};
void chmin(ll& a, ll b){ if(a > b) a = b; }
void chmax(ll& a, ll b){ if(a < b) a = b; }
```

## 目次
あったほうがいいかなって...
### Graph
グラフに関するライブラリです。

- ✅[Bellman-Ford](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Bellman-Ford.md) : ベルマンフォード法
- ✅[Graph](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Graph.md) : グラフの構造体
- ✅[Kruskal](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Kruskal.md) : クラスカル法
- ✅[Prim](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Prim.md) : プリム法
- ✅[BFS](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/bfs.md) : 幅優先探索
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

### Geometry
計算幾何のライブラリです。

- ✅[Area](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/area.md) : 面積
- ✅[ccw](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/ccw.md) : ccw
- ✅[dot-cross](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/dot_cross.md) : 内積・外積
- ✅[isParallel & isOrthogonal](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/isParallel%20%26%20isOrthogonal.md) : 平行・直交
- ✅[isconvex](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/isconvex.md) : 凸性判定
- ✅[isinpolygon](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/isinpolygon.md) : 多角形における点の包含
- ✅[Projection](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/projection.md) : 射影
- ✅[Reflection](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/reflection.md) : 反射
- ✅[template](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/template.md) : テンプレート
### Structure
構造体のライブラリです。

- ✅[BIT](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/BIT.md) : BIT
- ✅[Segment Tree](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/segtree.md)
- ✅[UnionFind](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/unionfind.md) : UnionFind
- ✅[WeightedUnionFind](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/weightedunionfind.md) : 重み付き UnionFind
- ✅[SparseTable](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/SparseTable.md) : Sparse Table
