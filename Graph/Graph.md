# Graph
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Graph.cpp)

## なにこれ
グラフ

## 使い方
### 宣言
```
Graph G(N);
```
$N$ はグラフの頂点数

### 辺の追加
```
G.add(from, to, cost, direct);
```
from : 始点<br>
to : 終点<br>
cost : 辺の重み（省略可、default は 1）<br>
direct : 有向辺か（省略可、default は false）
