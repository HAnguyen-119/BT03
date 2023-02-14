#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int patient[n];
    for (int i = 0; i < n; i++){
        cin >> patient[i];
    }
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (patient[j+1] < patient[j]) swap(patient[j+1], patient[j]);
        }
    }
    int res = 0, time = 0;
    for (int i = 0; i < n - 1; i++){
        time += patient[i];
        res += time;
    }
    cout << res;
    return 0;
}

