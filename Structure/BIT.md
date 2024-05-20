# BIT (Binary Indexed Tree)
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/BIT.cpp)

## なにこれ
BIT です<br>
一点更新・区間和クエリを処理できます（うまく書き換えれば和でなくても任意のモノイド演算に対して定義可能です）

## 使い方
### 宣言
```
BIT bit(N);
```
N : 頂点数

### 更新
```
bit.add(i, x);
```
i : 更新する場所（**1-indexed**）<br>
x : 更新に使う値 ($a_i := a_i + x$ と更新します)

### クエリ
```
s = bit.sum(i);
```
**1-indexed** の positioin $i$ が与えられ、 $\displaystyle \sum_{k=0}^i a_k$ を返します
