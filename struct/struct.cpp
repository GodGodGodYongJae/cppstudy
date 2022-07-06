#include <bits/stdc++.h>

using namespace std;

// 1) 커스텀한 정렬이 필요한 경우.
struct Point
{
  int y, x;
  Point(int y, int x) : y(y), x(x) {}
  Point()
  {
    y = -1;
    x = -1;
  }
  bool operator<(const Point &a) const
  {
    if (x == a.x)
      return y < a.y;
    return x < a.x;
  }
};

vector<Point> v;

int main()
{
  for (int i = 10; i >= 1; i--)
  {
    Point a = {i, i};
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  for (auto it : v)
    cout << it.y << " : " << it.x << endl;
  return 0;
}

// 하지만 정렬, 즉, 커스텀정렬이 필요할 때 1번처럼 해야 합니다.
// ● 커스텀 솔팅이란 x를 1순위로 오름차순, y를 2순위로 내림차순...이렇게 복잡한 정렬을 말합니다.
// 위의 코드에서 1번 방법은 조금은 복잡하게 오퍼레이터를 사용하는 경우입니다. 1순위로 x를 오름차순
// 정렬, 2 순위로 y를 기준으로 오름차순 정렬하는 구조체입니다. 저