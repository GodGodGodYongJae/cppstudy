#include <bits/stdc++.h>

using namespace std;

struct Point
{

  int x, y;
  Point(int x, int y) : y(y), x(x) {}
  Point()
  {
    y = 1;
    x = 1;
  }
  bool operator<(const Point &a) const
  {
    cout << " operator " << x << ":" << a.x << endl;
    return x > a.x;
  }
};

priority_queue<Point> pq;
int main()
{
  pq.push({1, 2});
  pq.push({2, 2});
  pq.push({3, 3});
  pq.push({4, 4});
  pq.push({5, 5});
  pq.push({6, 6});
  cout << pq.top().x << endl;
  return 0;
}