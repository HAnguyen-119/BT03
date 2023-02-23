#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n][100000];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        for (int j = 0; j < a[i]; j++){
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int leftSum = 0, rightSum = 0;
        for (int j = 1; j < a[i]; j++){
            rightSum += b[i][j];
        }
        int k = 0;
        while (leftSum != rightSum && k < a[i]){
            leftSum += b[i][k];
            rightSum -= b[i][k+1];
            k++;
        }
        if (leftSum == rightSum) cout << "YES" << endl;
        if (k == a[i]) cout << "NO" << endl;
    }
    return 0;
}
