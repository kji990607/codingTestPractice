#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector <int> arr;
    int answer = 0;
    int ptr1 = 1;
    int ptr2 = 1;
    int sum = 1;
    
    arr.push_back(0);
    for(int i=1;i<=n;i++) {
        arr.push_back(i);
    }
    
    while(ptr2<=arr.size()) {

        if(sum==n) {
            answer++;
            sum-=ptr1;
            ptr1++;
        } else if(sum<n) {
            ptr2++;
            sum+=ptr2;
        } else {
            sum-=ptr1;
            ptr1++;
        }        
    }
      
    return answer;
}
