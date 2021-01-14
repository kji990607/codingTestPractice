#include <string>
#include <vector>

using namespace std;

int LCM(int a, int b) {
    int x = a;
    int y = b;
    while(y!=0) {
        int r = x%y;
        x = y;
        y = r;
    }
    return a*b/x;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    for(int i=0;i<arr.size()-1;i++) {
        answer = LCM(answer,arr[i+1]);    
    }
    
    return answer;
}
