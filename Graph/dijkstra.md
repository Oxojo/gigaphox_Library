# Dijkstra法
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/dijkstra.cpp)

## なにこれ
ダイクストラ法は、非負の重み付きグラフに対し、単一始点最短経路問題を $O(E log V)$ で解く。

## 必要なライブラリ
[Graph](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Graph.cpp)

## 使い方
```
dijkstra(G, s, dis);
```
dis に、始点から各頂点への最短距離が格納される。
