#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> v;
    map<int, int> m;
    
    for (int i = 0; i < tangerine.size(); ++i)
    {
        m[tangerine[i]]++;
    }
    
    for (pair<const int, int> p : m)
    {
        v.push_back(p.second);
    }
    
    sort(v.begin(), v.end(), greater<int>());
    
    int i = 0;
    while (true)
    {
        answer++;
        k -= v[i];
        ++i;
        
        if (k <= 0)
        {
            break;
        }
    }
    
    return answer;
}
