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

[예시]
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

