# クラスカル法
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Kruskal.cpp)

## なにこれ
最小全域木を、辺に注目して構築する。計算量は $O(E \log E)$ だった記憶がある

## 必要なライブラリ
[Graph](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Graph.cpp)
[UnionFind](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/unionfind.cpp)

## つかいかた
```
MST E = Kruskal(es, V);
```
es は辺集合、V は頂点数<br>
合計コストと最小全域木をなす辺集合が返ってくる