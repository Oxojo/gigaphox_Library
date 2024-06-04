#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define reps(i, l, r) for(ll i = (l); i < (r); i++)
#define endl "\n";
const ll INF = 1e16;
const ll mod1 = 1000000007;
const ll mod2 = 998244353;
ll dx[4] = {-1, 0, 1, 0};
ll dy[4] = {0, -1, 0, 1};

template <class Type = ll>
struct WeightedUnionFind {
  WeightedUnionFind() = default;
  /// @brief 重み付き Union-Find 木を構築します。
  /// @param n 要素数
  explicit WeightedUnionFind(size_t n)
      : m_parentsOrSize(n, -1), m_diffWeights(n) {}
  /// @brief 頂点 i の root のインデックスを返します。
  /// @param i 調べる頂点のインデックス
  /// @return 頂点 i の root のインデックス
  int find(int i) {
    if (m_parentsOrSize[i] < 0)
      return i;
    const int root = find(m_parentsOrSize[i]);
    m_diffWeights[i] += m_diffWeights[m_parentsOrSize[i]];
    // 経路圧縮
    return (m_parentsOrSize[i] = root);
  }
  /// @brief a のグループと b のグループを統合します。
  /// @param a 一方のインデックス
  /// @param b 他方のインデックス
  /// @param w (b の重み) - (a の重み)
  void merge(int a, int b, Type w) {
    w += weight(a);
    w -= weight(b);
    a = find(a);
    b = find(b);
    if (a != b) {
      // union by size (小さいほうが子になる）
      if (-m_parentsOrSize[a] < -m_parentsOrSize[b]) {
        swap(a, b);
        w = -w;
      }
      m_parentsOrSize[a] += m_parentsOrSize[b];
      m_parentsOrSize[b] = a;
      m_diffWeights[b] = w;
    }
  }
  /// @brief (b の重み) - (a の重み) を返します。
  /// @param a 一方のインデックス
  /// @param b 他方のインデックス
  /// @remark a と b が同じグループに属さない場合の結果は不定です。
  /// @return (b の重み) - (a の重み)
  Type diff(int a, int b) {
    return (weight(b) - weight(a));
  }
  /// @brief a と b が同じグループに属すかを返します。
  /// @param a 一方のインデックス
  /// @param b 他方のインデックス
  /// @return a と b が同じグループに属す場合 true, それ以外の場合は false
  bool connected(int a, int b) {
    return (find(a) == find(b));
  }
  /// @brief i が属するグループの要素数を返します。
  /// @param i インデックス
  /// @return i が属するグループの要素数
  int size(int i) {
    return -m_parentsOrSize[find(i)];
  }
  // m_parentsOrSize[i] は i の 親,
  // ただし root の場合は (-1 * そのグループに属する要素数)
  vector<int> m_parentsOrSize;
  // 重み
  vector<Type> m_diffWeights;
  Type weight(int i) {
    find(i); // 経路圧縮
    return m_diffWeights[i];
  }
};

int main(){

}
