#include <bits/stdc++.h>
using namespace std;
string s;
int ans;
int main()
{
    cin >> s; // 65 90 97 122
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 65 && s[i] <= 91)
            ans += s[i] - 64;
        else if (s[i] >= 97 && s[i] <= 122)
            ans += s[i] - 96;

    cout << ans % 10001;
    return 0;
}