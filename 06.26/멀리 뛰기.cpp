#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    if (n == 1)
    {
        return answer = 1;
    }
    else if (n <= 2)
    {
        return answer = 2;
    }
    
    long long cur = 0;
    long long prev1 = 2;
    long long prev2 = 1;
    
    for (int i = 3; i <= n; ++i)
    {
        cur = (prev1 + prev2) % 1234567;
        
        prev2 = prev1;
        prev1 = cur;
    }
    
    return answer = cur;
}
