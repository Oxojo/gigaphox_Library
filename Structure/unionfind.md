# UnionFind
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/unionfind.cpp)

## なにこれ
UnionFind は、頂点の連結状態を管理するつよそうなデータ構造。

## 使い方
### 宣言
```
UnionFind uf(N);
```

### 連結
```
uf.unite(u, v);
```

### 連結判定
```
uf.same(u, v);
```
連結していたら true が返ってきます

### 連結成分の個数
```
uf.count()
```
