#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    string s = to_string(n);
    for (int i = 0; i < (int)s.size()/2; i++){
        if (s[i] != s[(int)s.size()-1-i]) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int a[n][2];
    vector<int> res;
    for (int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
        int count = 0;
        for (int j = a[i][0]; j <= a[i][1]; j++){
            if (palindrome(j)){
                count++;
            }
        }
        res.push_back(count);
    }
    for (int i = 0; i < n; i++){
        cout << res[i] << endl;
    }
    return 0;
}

