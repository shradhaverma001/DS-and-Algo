#include <iostream>
#include <vector>
using namespace std;

vector <int> v[5];
// 5 5
// 0 2
// 2 1
// 2 4
// 4 1
// 1 3
//n-nodes   m-edges
int main()
{
    int n,m,x,y;
    cin >> n >>m;
    for(int i=1; i<m; i++){
        cin >> x >>y;
        v[x].push_back(y);
        //undirected
        //v[y].push_back(x);
    }

    for(int i=0; i<n; i++){
        cout << i <<"->";
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " "; 
        }
        cout << endl;
    }
}