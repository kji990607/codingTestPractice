#include <string>
#include <vector>

using namespace std;

int months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

string solution(int a, int b) {
	
    int addDays = 0;
    
    for (int i=1; i<a; i++) {
        addDays += months[i-1];
    }

    return days[(addDays + b) % 7];
}
