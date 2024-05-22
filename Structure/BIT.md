# ✅BIT (Binary Indexed Tree)

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
**1-indexed** の positioin $i$ に対し、 $\displaystyle \sum_{k=1}^i a_k$ を返します

## 実装
[BIT.cpp](https://github.com/Oxojo/Oxojo-Library/blob/main/Structure/BIT.cpp)
```cpp
struct BIT {
    int N;
    vector<ll>A;
    BIT(int N_) : N(N_ + 1), A(N, 0) {}
    
    void add(int i, ll x) {
        for (int idx = i; idx < N; idx += (idx & -idx)) {
            A[idx] += x;
        }
    }
    
    ll sum(int i) {
        ll s = 0;
        for (int idx = i; idx > 0; idx -= (idx & -idx)) {
            s += A[idx];
        }
        return s;
    }
};
```

## Verify
[AOJ_DSL_2_B](https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_B)
```cpp
void solve() {
	ll N, Q; cin >> N >> Q;
	BIT bit(N);
	while (Q--) {
		ll t, x, y; cin >> t >> x >> y;
		if (t == 0) bit.add(x, y);
		else cout << bit.sum(y) - bit.sum(x - 1) << endl;
	}
}
```
