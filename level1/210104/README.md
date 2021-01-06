# 완주하지 못한 선수
### 📍 문제 설명
수많은 마라톤 선수들이 마라톤에 참여하였습니다. 단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다.

마라톤에 참여한 선수들의 이름이 담긴 배열 participant와 완주한 선수들의 이름이 담긴 배열 completion이 주어질 때, 완주하지 못한 선수의 이름을 return 하도록 solution 함수를 작성해주세요.
### 📍 제한 조건
* 마라톤 경기에 참여한 선수의 수는 1명 이상 100,000명 이하입니다.
* completion의 길이는 participant의 길이보다 1 작습니다.
* 참가자의 이름은 1개 이상 20개 이하의 알파벳 소문자로 이루어져 있습니다.
* 참가자 중에는 동명이인이 있을 수 있습니다.
### 📍 입출력 예
participant|completion|return
|---|---|---|
["leo", "kiki", "eden"]|["leo", "kiki"]|"leo"
["marina", "josipa", "nikola", "vinko", "filipa"]|["josipa", "filipa", "marina", "nikola"]|"vinko"
["mislav", "stanko", "mislav", "ana"]|["stanko", "ana", "mislav"]|"mislav"

예제 #1
leo는 참여자 명단에는 있지만, 완주자 명단에는 없기 때문에 완주하지 못했습니다.

예제 #2
vinko는 참여자 명단에는 있지만, 완주자 명단에는 없기 때문에 완주하지 못했습니다.

예제 #3
mislav는 참여자 명단에는 두 명이 있지만, 완주자 명단에는 한 명밖에 없기 때문에 한명은 완주하지 못했습니다.
### 📍 새로 배운 개념
#### 📝  해시
다른 코드 살펴보고 개념 정리해서 올리기

# 문자열 다루기 기본
### 📍 문제 설명
문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 예를 들어 s가 a234이면 False를 리턴하고 1234라면 True를 리턴하면 됩니다.
### 📍 제한 조건
* `s`는 길이 1 이상, 길이 8 이하인 문자열입니다.
### 📍 입출력 예
s|return
|---|---|
"a123"|false
"1234"|true

### 📍 새로 배운 개념
#### 📝  isdigit
[개념]<br/>
문자가 숫자 0~9 사이에 속하는지 검사하는 함수

[사용 예시]
```
int isdigit( int c );
//c : 검사할 문자 또는 아스키 값
//반환값 : 문자가 0~9 사이에 속하면 true, 아니면 false
```

[예시]<br/>
string str = "B123456DMask";

- isdigit(str[0]) => 'B' => 0이 나옴

- isdigit(str[1]) => '1' => 0이 아닌 수가 나옴

- isdigit(str[2]) => '2' => 0이 아닌 수가 나옴

- isdigit(str[3]) => '3' => 0이 아닌 수가 나옴

- isdigit(str[4]) => '4' => 0이 아닌 수가 나옴

- isdigit(str[5]) => '5' => 0이 아닌 수가 나옴

- isdigit(str[6]) => '6' => 0이 아닌 수가 나옴

- isdigit(str[7]) => 'D' => 0이 나옴

- isdigit(str[8]) => 'M' => 0이 나옴

- isdigit(str[9]) => 'a' => 0이 나옴

- isdigit(str[10]) => 's' => 0이 나옴

- isdigit(str[11]) => 'k' => 0이 나옴

[참고링크 1](https://blockdmask.tistory.com/362)

# 수박수박수박수박수박수?
### 📍 문제 설명
길이가 n이고, "수박수박수박수...."와 같은 패턴을 유지하는 문자열을 리턴하는 함수, solution을 완성하세요. 예를들어 n이 4이면 "수박수박"을 리턴하고 3이라면 "수박수"를 리턴하면 됩니다.
### 📍 제한 조건
* n은 길이 10,000이하인 자연수입니다.
### 📍 입출력 예
n|return
|---|---|
3|"수박수"
4|"수박수박"

# 문자열을 정수로 바꾸기
### 📍 문제 설명
문자열 s를 숫자로 변환한 결과를 반환하는 함수, solution을 완성하세요.
### 📍 제한 조건
* s의 길이는 1 이상 5이하입니다.
* s의 맨앞에는 부호(+, -)가 올 수 있습니다.
* s는 부호와 숫자로만 이루어져있습니다.
* s는 "0"으로 시작하지 않습니다.
### 📍 입출력 예
예를들어 str이 1234이면 1234를 반환하고, -1234이면 -1234를 반환하면 됩니다.

str은 부호(+,-)와 숫자로만 구성되어 있고, 잘못된 값이 입력되는 경우는 없습니다.
### 📍 새로 배운 개념
#### 📝  문자열 => 숫자 변환 stoi
[사용 예시]<br/>
```
#include <string>
//정수형: stoi, stol, stoul, stoll, stoull
//실수형: stof, stod, stold
```
[예시 코드]
```c++
#include <iostream>
#include <string>

int main()
{
	std::string int_val = "123";
	std::string double_val = "12.3456";

	int i = std::stoi(int_val);
	double d = std::stod(double_val);
	
	std::cout << i << std::endl;
	std::cout << d << std::endl;

	return 0;
}
```

### 📍 관련 개념
#### 📝  숫자 => 문자열 변환 to_string
[사용 예시]
```
#include<string>

string to_string(자료형)
```

[예시 코드]
```
#include <iostream>
#include <string>

int main()
{
	int i = 123;
	double d = 12.3456;
	
	std::cout << std::to_string(i) << std::endl;
	std::cout << std::to_string(d) << std::endl;
	
	return 0;
}
```

# 시저 암호
### 📍 문제 설명
어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서 다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다. 예를 들어 "AB"는 1만큼 밀면 "BC"가 되고, 3만큼 밀면 "DE"가 됩니다. "z"는 1만큼 밀면 "a"가 됩니다. 문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, solution을 완성해 보세요.
### 📍 제한 조건
* 공백은 아무리 밀어도 공백입니다.
* s는 알파벳 소문자, 대문자, 공백으로만 이루어져 있습니다.
* s의 길이는 8000이하입니다.
* n은 1 이상, 25이하인 자연수입니다.
### 📍 입출력 예
s|n|return
---|---|---|
"AB"|1|"BC"
"z"|1|"a"
"a B z"|4|"e F d"

###📍 더 생각해보기
문자, 아스키코드 비교 할 때 int()로 명시적 형변환 안해주면 케이스 1, 4, 10, 12 실패<br/>
왜...?