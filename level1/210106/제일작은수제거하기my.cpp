#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int mini = arr[0];
    
    for(int i=0;i<arr.size();i++) {
        if(mini>arr[i]) {
            mini = arr[i];            
        }
    }
    
    for(int i=0;i<arr.size();i++) {
        if(arr[i]!=mini) {
            answer.push_back(arr[i]);
        }
    }
    
    if(answer.size()==0) {
        answer.push_back(-1);
    }
    
    return answer;
}
