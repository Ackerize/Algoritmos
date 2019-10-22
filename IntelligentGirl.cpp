#include <iostream>
#include <string.h>
using namespace std;


char* substr(char* arr, int begin, int len)
{
    char* res = new char[len];
    for (int i = 0; i < len; i++)
        res[i] = *(arr + begin + i);
    res[len] = 0;
    return res;
}

int main(){
    char S[10000];
    cin >> S;
    char* nueva;
    int dp[strlen(S)];
    dp[0] = 0;
    int contador = 0;
    
    for(int i = 0; i < strlen(S); i++){
        nueva = substr(S, i,strlen(S));
         for(int j = 0; j < strlen(nueva); j++){
            if((int)nueva[j]%2 == 0){
                
                contador++;
            }
        }
        dp[i] = contador;
        if(i == strlen(S)-1){
            cout << contador << endl;
        }
        else{
            cout << contador << " ";
        }
        contador = 0;
    }
}
