#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int num = x;
    int hap = 0;
    
    while(x>0) {
        hap += x%10;
        x /= 10;
    }
    
    //return num%hap==0 ? true : false;
    if(num%hap==0) {
        return true;
    } else {
        return false;
    }
}
