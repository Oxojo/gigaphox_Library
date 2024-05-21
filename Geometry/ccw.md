# ccw
[実装](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/ccw.cpp)

## なにこれ
わかりません（ごめん）<br><br>
たしか 3 点の位置関係を判定するものだったはずです

## 必要なライブラリ
[template](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/template.cpp)
[dot_cross](https://github.com/Oxojo/Oxojo-Library/blob/main/Geometry/dot_cross.cpp)

## 使い方
```
check = ccw(a, b, c);
```
間違ってたら申し訳ないんですが、返り値が<br>
1 : a, b, c の順に反時計回りになるようになってる<br>
-1 : a, b, c の順に時計回りになるようになってる<br>
それ以外：3 点が同一直線上にある（2, -2, 0 によって位置関係が違ったはずなんですが、覚えてないです）<br>
TODO : ここをなんとかする
