#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main(){
    int T; 
    int N, K;  
    int a[1000]; 
 
    int i, j;
 
    cin >> T;
 
    for (i = 0; i < T; i++)
           {
        cin >> N >> K;
        for (j = 0; j < N; j++)
        {
            cin >> a[j];
 
            if (a[j] <= 0)
            {
                K--;
            }
        }
 
        if (K <= 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
