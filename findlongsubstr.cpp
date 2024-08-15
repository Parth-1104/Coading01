#include <iostream>
#include <vector>
using namespace std;

string findestr(string str)
{
    vector<int> freq(26, 0);  
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;  
        if (freq[str[i] - 'a'] == 1)
        {
            ans += str[i];
        }
        else{
            return ans;
        }
    }
    return ans;  
}

int main()
{
    string s;
    cin >> s;
    cout << findestr(s) << endl;
}
