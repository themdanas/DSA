#include <string>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        string result;

        for (char c : num) {
            while (!result.empty() && k > 0 && result.back() > c) {
                result.pop_back();
                k--;
            }
            result.push_back(c);
        }

        
        result.erase(result.size() - k, k);

        
        size_t start = result.find_first_not_of('0');
        if (start != string::npos)
            return result.substr(start);

        return "0";
    }
};