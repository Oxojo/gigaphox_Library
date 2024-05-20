# Bellman-Ford 法

## なにこれ
Bellman-Ford 法<br>
負の辺を含むグラフ上でも動く、単一始点最短経路問題を解くアルゴリズム。計算量は $O(EV)$ 

## 必要なライブラリ
[Graph](https://github.com/Oxojo/Oxojo-Library/Graph/Graph.cpp)

## 使い方
```
vector<ll>dist = bellman_ford(edges, V, s);
```
edges : 辺集合（**必要なのはグラフではなく辺の配列であることに注意**）<br>
V : 頂点数<br>
s : 始点<br>
<br>
返り値：始点 s から各頂点への最短距離を持つ長さ V の配列を返す
