#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool desc(int a, int b) {
    return a>b;
}

long long solution(long long n) {
    long long answer = 0;
    vector<int> temp;
    int digit = 1;
    
    while(n>0) {
        temp.push_back(n%10);
        n /= 10;
    }
    
    sort(temp.begin(),temp.end(),desc);
    
    for(int i=temp.size()-1;i>=0;i--) {
        answer += temp.at(i) * digit;
        digit *= 10;
    }
    
    return answer;
}
