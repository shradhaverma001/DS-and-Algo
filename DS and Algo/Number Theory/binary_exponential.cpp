#include <iostream>
using namespace std;

#define ll long long
// power - a^b
ll int fastPow(ll int a, ll int b);

int main()
{
    ll int a, b;
    cin >> a >> b;
    ll int ans = fastPow(a, b);
    cout << ans << endl;
}

ll int fastPow(ll int a, ll int b)
{
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    ll int ans;
    //b(power is even) -> eg- 3^8 -> 3^4*3^4
    //b(power is odd) -> eg- 3^9 -> 3*3^4*3^4

    if(b%2 == 0){
        // ans = fastPow(a, b/2)*fastPow(a, b/2);

        // for optimization(reducing the same recurrsion)
        ll int temp = fastPow(a,b/2);
        ans = temp*temp;
    }
    else{
        // ans = a * fastPow(a, (b-1)/2)*fastPow(a, (b-1)/2);
        // for optimization(reducing the same recurrsion)
        ll int temp = fastPow(a,(b-1)/2);
        ans = a*temp*temp;
    }
    return ans;
}