# 나누어 떨어지는 숫자 배열
### 📍 문제 설명
정수 배열 numbers가 주어집니다. numbers에서 서로 다른 인덱스에 있는 두 개의 수를 뽑아 더해서 만들 수 있는 모든 수를 배열에 오름차순으로 담아 return 하도록 solution 함수를 완성해주세요.

### 📍 제한 사항
* numbers의 길이는 2 이상 100 이하입니다.
    * numbers의 모든 수는 0 이상 100 이하입니다.
    
### 📍 입출력 예
numbers|result
---|---
[2,1,3,4,1]|[2,3,4,5,6,7]
[5,0,2,7]|[2,5,7,9,12]

### 📍 참고 문제
[201229 같은 숫자는 싫어](https://github.com/kji990607/codingTestPractice/blob/master/level1/201229/%EA%B0%99%EC%9D%80%EC%88%AB%EC%9E%90%EB%8A%94%EC%8B%AB%EC%96%B4better.cpp)

# 문자열 내 마음대로 정렬하기
### 📍 문제 설명
문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다. 예를 들어 strings가 ["sun", "bed", "car"]이고 n이 1이면 각 단어의 인덱스 1의 문자 "u", "e", "a"로 strings를 정렬합니다.
### 📍 제한 사항
* strings는 길이 1 이상, 50이하인 배열입니다.
* strings의 원소는 소문자 알파벳으로 이루어져 있습니다.
* strings의 원소는 길이 1 이상, 100이하인 문자열입니다.
* 모든 strings의 원소의 길이는 n보다 큽니다.
* 인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치합니다.

    
### 📍 입출력 예
strings|n|return
---|---|---
["sun", "bed", "car"]|1|["car", "bed", "sun"]
["abce", "abcd", "cdx"]|2|["abcd", "abce", "cdx"]
입출력 예 1<br/>
sun, bed, car의 1번째 인덱스 값은 각각 u, e, a 입니다. 이를 기준으로 strings를 정렬하면 [car, bed, sun] 입니다.

입출력 예 2<br/>
abce와 abcd, cdx의 2번째 인덱스 값은 c, c, x입니다. 따라서 정렬 후에는 cdx가 가장 뒤에 위치합니다. abce와 abcd는 사전순으로 정렬하면 abcd가 우선하므로, 답은 [abcd, abce, cdx] 입니다.

### 📍 참고 문제
[201231 문자열 내림차순으로 배치하기](링크추가)
