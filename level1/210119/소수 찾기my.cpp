#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int div = ceil(sqrt(n));
    vector <int> arr;
    
    for(int i=1;i<=n;i++) {
        arr.push_back(i);
    }
    
    arr[0] = 0;
     
    for(int i=2; i<=div; i++){
        if(arr[i-1]){
            for(int j = i * i; j <= n; j += i)
                arr[j-1] = 0;
        }
    }
             
    for(int i = 0; i < n; i++){
        if(arr[i]!=0) {
            answer++;
        }
    }
    
    return answer;
}
