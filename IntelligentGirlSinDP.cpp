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


void buscarPares(char *S){
    int len = strlen(S), contador = 0;
    if(len == 0)
        return;
    for(int i = 0; i<len; i++){
        if((int)S[i]%2 == 0)
            contador++;
    }
    cout << contador << " ";
    buscarPares(substr(S, 1, len-1));
}

int main()
{
    char palabra[10000] = "574674546476";
    buscarPares(palabra);

    return 0;
}
