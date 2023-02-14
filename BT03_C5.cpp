#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int numbers[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            numbers[i][j] = 0;
        }
    }
    int k = 1, i = 0, j = 0;
    int i_max = m - 1, j_max = n - 1, i_min = 1, j_min = 0;
    bool increase_i = 1, increase_j = 1;
    while (k <= m*n){
        if (numbers[i][j] == 0) numbers[i][j] = k;
        if (increase_i == 1 && increase_j == 1){
            if (j < j_max){
                j++;
            }
            if (j == j_max){
                increase_j = 0;
                j_max--;
            }
        }
        else if (increase_i == 1 && increase_j == 0){
            if (i < i_max){
                i++;
            }
            if (i == i_max){
                increase_i = 0;
                i_max--;
            }
        }
        else if (increase_i == 0 && increase_j == 0){
            if (j > j_min){
                j--;
            }
            if (j == j_min){
                increase_j = 1;
                j_min++;
            }
        }
        else {
            if (i > i_min){
                i--;
            }
            if (i == i_min){
                increase_i = 1;
                i_min++;
            }
        }
        k++;
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
