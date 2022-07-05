#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int b[5];

int main()
{
  for (int i = 5; i >= 1; i--)
  {
    b[i - 1] = i;
  }
  for (int i = 5; i >= 1; i--)
  {
    a.push_back(i);
  }

  //오름차순
  sort(b, b + 5);
  sort(a.begin(), a.end());
  for (int i : b)
  {
    cout << i << ' ';
  }
  cout << endl;
  for (int i : a)
  {
    cout << i << ' ';
  }
  cout << endl;

  // 내림차순

  sort(b, b + 5, greater<int>());
  sort(a.begin(), a.end(), greater<int>());
  for (int i : b)
  {
    cout << i << ' ';
  }
  cout << endl;
  for (int i : a)
  {
    cout << i << ' ';
  }
  cout << endl;
  return 0;
}

// sort Array or Container 요소를 정렬하는 함수.
// * Container  = 같은 타입의 여러 객체를 저장하는 집합.
// Sort 함수에는 매개변수 ( 인자 )가 3가지가 들어가 있고, 2개는 반드시 넣어야 하며 하나는 선택이다.
// sort(first,last,*커스텀비교함수)
// first는 정렬하고 싶은 배열의 첫번째 이터레이터, last는 배열 마지막 이터레이터

// 예를 들어 크기가 5인 a라는 배열 전체를 sort한다고 하면
// sort(a[0],a[0] + 5)라고 해야 합니다. 즉, last에 배열의 마지막요소가 아닌 그 “다음”의 위치를 넣어주어야
// 합니다.
// 다시 말하자면 a[0] + 5는 배열의 마지막원소가 아닙니다. 마지막원소는 a[0] + 4이겠죠? 하지만 sort의
// 특성상 last)로 last는 포함하지 않기 때문에 마지막 원소 그 다음의 위치를 가리켜야 하는 것이죠.
// 또한 내가 만약 3번째 요소까지만 정렬하고 싶다면 sort(a[0], a[0] + 3)이렇게 하면 됩니다

// 참조 커스텀 비교 함수.
// 3번째 인자로는 커스텀비교함수(선택)이 있습니다. sort에 커스텀비교함수를 넣지 않으면 기본적으로
// 오름차순이며 이를 3번째 인자에 greater<int>()를 넣어 내림차순등으로 변경할 수 있습니다. 참고로
// less<int>()을 통해 오름차순으로 정렬할 수 도 있습니다.