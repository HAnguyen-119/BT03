#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n], x = 0, y = (n-1)/2;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrix[i][j] = 0;
        }
    }
    int count = 1;
    while (count <= n*n){
        if (matrix[x][y] == 0){
            matrix[x][y] = count;
            x--;
            y++;
            if (x < 0) x = n-1;
            if (y > n-1) y %= n;
            count++;
        }
        else {
            x += 2;
            y--;
            if (x > n-1) x %= n;
            if (y < 0) y = n-1;
        }

    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
