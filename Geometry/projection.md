# 射影

## なにこれ
点から直線へ下ろした垂線の足の座標を求める。

## 必要なライブラリ
[template](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/template.md) <br>
[dot_cross](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/dot_cross.md)

## 使い方
```
q = Projection(s, p);
```
s は Segment(Line), p は Point
返り値は Point 型

## 実装
[projection.cpp](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/projection.cpp)
```cpp
Point Projection(Segment S, Point p) {
    Vector base = S.B - S.A;
    ld r = dot(p - S.A, base) / base.norm();
    return S.A + base * r;
}
```
