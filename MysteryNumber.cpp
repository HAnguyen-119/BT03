#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n+1];
    bool check[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n + 1; i++){
        cin >> b[i];
        check[i] = 0;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n + 1; j++){
            if (b[j] == a[i] && check[j] == 0){
                check[j] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < n + 1; i++){
        if (check[i] == 0) cout << b[i];
    }
    return 0;
}
