# プリム法
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Prim.cpp)

## なにこれ
最小全域木を構築する。たぶん計算量は $O(E + V \log V)$ かも

## 必要なライブラリ
[Graph](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Graph.cpp)

## つかいかた
```
MST T = Prim(G)
```
合計コストと、最小全域木をなす辺集合が返ってくる
