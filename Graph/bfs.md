# BFS(幅優先探索)
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/bfs.cpp)

## なにこれ
BFS<br>
計算量は $O(V + E)$ だと思います

## 必要なライブラリ
[Graph](https://github.com/Oxojo/Oxojo-Library/blob/main/Graph/Graph.cpp)

## 使い方
```
bfs(G, s, dist);
```
G : グラフ<br>
s : 始点<br>
dist : 始点からの距離を格納する配列<br>
<br>
返り値：なし　dist が編集される
