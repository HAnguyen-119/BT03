#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string password[n];
    for (int i = 0; i < n; i++){
        cin >> password[i];
    }
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (password[j].size() == password[i].size()){
                int k = 0;
                for (int count = 0; count < password[i].size()/2; count++){
                    if (password[i][count] == password[j][password[i].size()-1-count]) k++;
                }
                if (k == password[i].size()/2){
                    cout << password[i].size() << endl << password[i][password[i].size()/2];
                    break;
                }
            }
        }
    }
    return 0;
}
