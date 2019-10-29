#include<iostream> 
using namespace std; 
  
int MatrixChainOrder(int p[], int n) 
{ 
    int dp[n][n]; 
                  
    for (int i=1; i<n; i++) 
        dp[i][i] = 0; 
  
    for (int L=1; L<n-1; L++)  
      for (int i=1; i<n-L; i++)      
        dp[i][i+L] = min(dp[i+1][i+L] + p[i-1]*p[i]*p[i+L], 
                    dp[i][i+L-1] + p[i-1]*p[i+L-1]*p[i+L]);      
    return dp[1][n-1]; 
} 

int main() 
{ 
    int arr[] = {10, 20, 30, 40, 30} ; 
    int size = sizeof(arr)/sizeof(arr[0]); 
  
    printf("Minimum number of multiplications is %d ", 
                    MatrixChainOrder(arr, size)); 
  
    return 0; 
}
