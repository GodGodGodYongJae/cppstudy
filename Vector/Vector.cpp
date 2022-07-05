#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int main()
{
  for (int i = 1; i <= 10; i++)
  {
    /* code */
    v.push_back(i);
  }
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

// 배열의 맨뒤를 지워주는 지워주는 pop_back
#pragma region
  v.pop_back();
  for (int a : v)
    cout << a << " ";
  cout << "\n";
#pragma endregion

// 지우는 요소를 찾아서 지움 find(vector)의 함수가 아닌 algorithm에서 제공하는 함수.
#pragma region
  v.erase(v.begin(), v.begin() + 1);
  for (int a : v)
    cout << a << " ";
  cout << "\n";
#pragma endregion

  auto a = find(v.begin(), v.end(), 100);
  if (a == v.end())
    cout << "not found"
         << "\n";

  // fill a 범위에서 b 범위 까지 , c 의 값을 채워 넣는 함수
  fill(v.begin(), v.end(), 10);
  for (int a : v)
    cout << a << " ";
  cout << "\n";

  v.clear();
  cout << "아무것도 없을까?\n";
  for (int a : v)
    cout << a << " ";
  cout << "\n";

  return 0;
}

// 참고사항
// for(int a : v )
// 잠시 위의 코드를 보겠습니다. 이는 "vector의 요소를 순차적으로 탐색한다"라는 뜻입니다. 그렇다면
// vector에 pair이라는 값이 들어가면 for(pair<int,int> a : v)이런식으로 정의해야 해야 겠죠? for(int i = 0; i
// < v.size(); i++) v[i] 이런식으로 index를 기반으로 접근하는 것과 똑같은 의미입니다.

// 또한 vecor에 미리 크기와 값을 할당할 수 있다.
// ex ) vector<int> v(5,100);
// 100 , 100 , 100 , 100 , 100