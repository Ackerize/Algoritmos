#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    long long arreglo[41][4][4], costos[4][4], caso1, caso2;
    int n;
    
    for(int i = 1; i <= 3; i++)
        for(int j = 1; j <= 3; j++)
            cin >> costos[i][j];
    
    cin >> n;
    
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= 3; i++){
            for(int j = 1; j  <= 3; j++){
                if(i != j){
                    caso1 = arreglo[k-1][i][6-i-j] + costos[i][j] + arreglo[k-1][6-i-j][j];
                    caso2 = arreglo[k-1][i][j] + costos[i][6-i-j] + arreglo [k-1][j][i] + costos[6-i-j][j] + arreglo[k-1][i][j];
                    arreglo[k][i][j] = min(caso1, caso2);
                }
            }
        }
    }
    
    cout << arreglo[n][1][3];
    
    return 0;
}
