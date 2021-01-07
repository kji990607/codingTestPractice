# 비밀지도
### 📍 문제 설명
비밀지도
네오는 평소 프로도가 비상금을 숨겨놓는 장소를 알려줄 비밀지도를 손에 넣었다. 그런데 이 비밀지도는 숫자로 암호화되어 있어 위치를 확인하기 위해서는 암호를 해독해야 한다. 다행히 지도 암호를 해독할 방법을 적어놓은 메모도 함께 발견했다.

1. 지도는 한 변의 길이가 `n`인 정사각형 배열 형태로, 각 칸은 공백(" ) 또는벽(#") 두 종류로 이루어져 있다.
2. 전체 지도는 두 장의 지도를 겹쳐서 얻을 수 있다. 각각 지도 1과 지도 2라고 하자. 지도 1 또는 지도 2 중 어느 하나라도 벽인 부분은 전체 지도에서도 벽이다. 지도 1과 지도 2에서 모두 공백인 부분은 전체 지도에서도 공백이다.
3. 지도 1과 지도 2는 각각 정수 배열로 암호화되어 있다.
4. 암호화된 배열은 지도의 각 가로줄에서 벽 부분을 `1`, 공백 부분을 `0`으로 부호화했을 때 얻어지는 이진수에 해당하는 값의 배열이다.
![image](https://user-images.githubusercontent.com/62373386/103847638-17faa580-50e4-11eb-9d1c-024b71c6e1aa.png)
네오가 프로도의 비상금을 손에 넣을 수 있도록, 비밀지도의 암호를 해독하는 작업을 도와줄 프로그램을 작성하라.
### 📍 입력 형식
입력으로 지도의 한 변 크기 `n` 과 2개의 정수 배열 `arr1`, `arr2`가 들어온다.
* 1 ≦ `n` ≦ 16
* `arr1`, `arr2`는 길이 `n`인 정수 배열로 주어진다.
* 정수 배열의 각 원소 `x`를 이진수로 변환했을 때의 길이는 `n` 이하이다. 즉, 0 ≦ `x` ≦ 2n - 1을 만족한다.
### 📍 출력 형식
원래의 비밀지도를 해독하여 `'#'`, `공백`으로 구성된 문자열 배열로 출력하라.
### 📍 입출력 예
매개변수|값
|---|---|
n|5
arr1|[9, 20, 28, 18, 11]
arr2|[30, 1, 21, 17, 28]
출력|["#####","# # #", "### #", "# ##", "#####"]

매개변수|값
|---|---|
n|6
arr1|[46, 33, 33 ,22, 31, 50]
arr2|	[27 ,56, 19, 14, 14, 10]
출력|["######", "### #", "## ##", " #### ", " #####", "### # "]

### 📍 새로 배운 개념
#### 📝  reverse
[개념]<br/>
문자열을 거꾸로 뒤집는 함수

[사용 예시]
```
#include <algorithm>

template <class BidirIt>
constexpr void reverse(BidirIt first, BidirIt last);
//fisrt부터 last까지의 원소를 역순으로 뒤집는다,
```

[예시 코드]
```c++
#include<iostream>
#include<algorithm>    //reverse
#include<string>    //string
using namespace std;
 
int main(void)
{
    string str = "BlockDMask";
    cout << "=> reverse(str.begin(), str.end());" << endl << endl;
    cout << "Before : " << str << endl; //"BlockDMask"
    
    reverse(str.begin(), str.end());
 
    cout << "After  : " << str << endl; //"ksaMDkcolB"
    return 0;
}
```
[참고 링크](https://blockdmask.tistory.com/363)

### 📍 사용된 개념
#### 📝  비트연산자

# 완주하지 못한 선수
[설명, 이전 코드](https://github.com/kji990607/codingTestPractice/tree/master/level1/210104)
#### 📝 iterator
[개념]
반복자는 컨테이너에 저장된 원소를 순회하면서 접근하는 방식을 제공한다.
- 입력 반복자(input iterator) :  읽기만 가능, 순방향 이동, 현 위치의 원소를 한 번만 읽을 수 있는 반복자
- 출력 반복자(output iterator) : 쓰기만 가능, 순방향 이동, 현 위치의 원소를 한 번만 쓸 수 있는 반복자 
- 순방향 반복자(forward iterator) : 읽기/쓰기 모두 가능, 순방향 이동(++)이 가능한 재할당될 수 있는 반복자
- 양방향 반복자(bidirectional iterator) : 읽기/쓰기 모두 가능, 순/역 방향 이동(--)이 가능한 반복자 
- 임의 접근 반복자(random access iterator) :  읽기/쓰기 모두 가능, 임의 접근, 양방향 반복자 기능에 +, -, += , -=, [] 연산이 가능
![image](https://user-images.githubusercontent.com/62373386/103854360-9ad72c80-50f3-11eb-84db-671ec045a7d7.png)

[벡터 예시]
```
#include <iostream>
#include <vector> 

using namespace std; 

void main() { 
    int ari[]={1,2,3,4,5}; 
    vector<int> vi(&ari[0],&ari[5]); 
    vector<int>::iterator it; 

    for (it=vi.begin();it!=vi.end();it++) { 
        printf("%d\n",*it); 
    }
}
```
[참고 링크](https://eehoeskrap.tistory.com/263)
#### 📝 연관 컨테이너
[개념]<br/>

종류|설명
|---|---|
set|데이터를 키로 사용하는 연관 컨테이너 (key만 있고 value는 없는 map)
multiset|키의 중복을 허락하는 set
map|데이터를 키와 값 쌍으로 사용하는 연관 컨테이너
multimap|키의 중복을 허락하는 map
hash_set|자료를 정렬하지 않은 set
hash_map|자료를 정렬하지 않은 map
hash_multiset|자료를 정렬하지 않은 multiset
hash_multimap|자료를 정렬하지 않은 multimap

[map 멤버 함수]
* m.size(): m의 노드 개수를 리턴
* m.empty(): m의 사이즈가 0인지 아닌지를 확인
* m.begin(): m의 첫 번째 원소를 가리키는 iterator 리턴
* m.end(): m의 마지막 원소를 가리키는 iterator 리턴
* m[k] = v: m에 key가 k이고, value가 v인 노드 추가
* m.insert(make_pair(k,v)): m.erase(k)
* m에서 key가 k인 노드 삭제: m.find(k)
* m에서 key가 k인 노드를 찾아, 해당 노드를 가리키는 iterator 리턴(key가 k인 노드가 존재하지 않는 경우, m의 마지막 원소를 가리키는 iterator 리턴)
* m.count(k): m에서 key가 k인 노드의 개수를 리턴

[map 예시 코드]
```
map<char,int> m;
map<char,int>::iterator it;
 
m['B'] = 2;                        //m : (B,2)
m.insert(make_pair('A',1));        //m : (A,1) (B,2)
m['C'] = 3;                        //m : (A,1) (B,2) (C,3)
m.erase('A');                      //m : (B,2) (C,3)
 
//m전체를 순회하며 key와 value 출력
for(it = m.begin(); it != m.end(); it++)
    cout << it->first << ' ' << it->second << '\n';
 
if(m.find('B') != m.end()) 
    cout << "key값이 B인 노드가 존재합니다." << '\n';
else
    cout << "key값이 B인 노드가 존재하지 않습니다." << '\n';
 
```

[set 멤버 함수]
* s.size(): s의 노드 개수를 리턴
* s.empty(): s의 사이즈가 0인지 아닌지를 확인
* s.begin(): s의 첫 번째 원소를 가리키는 iterator 리턴
* s.end(): s의 마지막 원소를 가리키는 iterator 리턴
* s.insert(k): s에 값이 k인 노드 추가
* s.erase(k): s에서 값이 k인 노드 삭제
* s.find(k): s에서 값이 k인 노드를 찾아, 해당 노드를 가리키는 iterator 리턴(값이 k인 노드가 존재하지 않는 경우, s의 마지막 원소를 가리키는 iterator 리턴)
* s.count(k): s에서 값이 k인 노드의 개수를 리턴

[set 예시 코드]
```c++
set<int> s;
set<int>::iterator it;
 
s.insert(4);               //s : 4
s.insert(1):               //s : 1 4
s.insert(2);               //s : 1 2 4
 
vector<int> v;
v.push_back(3);            //v : 3
v.push_back(5);            //v : 3 5
v.push_back(6);            //v : 3 5 6
 
s.insert(v.begin(), v.end());        //s : 1 2 3 4 5 6
 
s.erase(4);                //s : 1 2 3 5 6
s.erase(s.begin());        //s : 2 3 5 6 
 
//지울 원소를 입력받음
int toErase;
scanf("%d", &toErase);
 
it = s.find(toErase);
 
//지울 원소가 존재하는 원소일 때만 지움
if(it != s.end())
    s.erase(it);
 ```
[참고 링크](https://sarah950716.tistory.com/6)