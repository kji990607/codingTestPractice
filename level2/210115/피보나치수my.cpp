//시간 초과
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int result = 1;

int Fib(int x) {
    if(x==0) {
        return 0;
    } else if(x==1) {
        return 1;
    } else {
        result = Fib(x-1) + Fib(x-2);
    }
    return result;
}


int solution(int n) {
   return  Fib(n) % 1234567;
}

// 오답 - 자료형 범위
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int temp1 = 0;
    int temp2 = 1;
    int answer = 0;
    
    for(int i=1;i<n;i++) {
        answer = temp1 + temp2;
        temp1 = temp2;
        temp2 = answer;
    }
    
    return answer%1234567;
}

// (A + B) % C ≡ ( ( A % C ) + ( B % C) ) % C
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int temp1 = 0;
    int temp2 = 1;
    int answer = 0;
    
    for(int i=1;i<n;i++) {
        answer = (temp1 + temp2)%1234567;
        temp1 = temp2;
        temp2 = answer;
    }
    
    return answer;
}
