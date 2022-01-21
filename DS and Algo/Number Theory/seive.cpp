#include <iostream>
using namespace std;

//p[i] = 0 -> prime
//p[i] = 1 -> non-prime
int p[12];
void seive(int n);

int main()
{
    int n=10;

    seive(n);

    for(int i =1; i<=n; i++){
        cout << i << " " << p[i] << endl;
    }
    return 0;
}

void seive(int n)
{
    p[0] = 1;
    p[1] = 1;

    for(int i=2; i<=n; i++){
        if(p[i] == 0){
            int j = 2;

            while(i*j <= n){
                p[i*j] = 1;
                j++;
            }
        }
    }
}