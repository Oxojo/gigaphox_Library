# 反射

## なにこれ
直線に関して点と対称な点を返します　点から射影へのベクトルを 2 倍するだけなので実質 Projection

## 必要なライブラリ
[template](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/template.md) <br>
[Projection](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/projection.md)

## 使い方
```
q = Projection(s, p);
```

## 実装
[reflection.cpp](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/reflection.cpp)
```cpp
Point Projection(Segment S, Point p) {
    Vector base = S.B - S.A;
    ld r = dot(p - S.A, base) / base.norm();
    return S.A + base * r;
}
```
