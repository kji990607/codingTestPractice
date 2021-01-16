#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> bridge;
    queue<int> pushTime;
    int index = 0;
    int pastTime = 0;
    int wSum = 0;
    
    while(true) {
        pastTime++;
        
        if(pastTime-pushTime.front()==bridge_length) {
            wSum -= bridge.front();
            bridge.pop();
            pushTime.pop();
        } 
        
        if(wSum+truck_weights[index]<=weight) {
            if(index==truck_weights.size()-1) {
                pastTime += bridge_length;
                return pastTime;
            }
            bridge.push(truck_weights[index]);
            pushTime.push(pastTime);
            wSum+=truck_weights[index];
            index++;
        }
    }
}
