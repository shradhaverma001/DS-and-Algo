#include <iostream>
using namespace std;

//p[i] = 0 -> prime
//p[i] = 1 -> non-prime
int p[10];
void main()
{
    int n=10;

    seive(n);
}

void seive(int n)
{
    p[0] = 1;
    p[1] = 1;

    for(int i=2; i<n; i++){
        if(p[i] == 0){

        }
    }
}