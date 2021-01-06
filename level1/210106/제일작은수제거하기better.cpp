#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    //정렬을 통해 최소값을 찾을 수 있다 
    sort(arr.begin(), arr.end());
    
    for(int i=0;i<arr.size();i++) {
        if(answer[i]==arr[0]) {
            answer.erase(answer.begin()+i);
            break;
        }
    }
    
    if(answer.size()==0) {
        answer.push_back(-1);
    }
    
    return answer;
}
