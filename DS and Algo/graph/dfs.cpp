#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> v[5];
int visited[5];
// 5 6
// 0 2
// 2 1
// 2 4
// 4 1
// 1 3
//n-nodes   m-edges

void dfs(int source);
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
    //0 is source
    //bfs(0);
    //if aource is a node which is not connected 
    for(int i =0; i<n; i++){
        if(visited[i] == 0)
            dfs(i);
    }
}
//0
void dfs(int current)
{
    cout << current;
    visited[current] = 1;

    // 0-> 1,2
    for(int i = 0; i<v[current].size(); i++){
        int child = v[current][i];
        if(visited[child] == 0){
            dfs(child);
        }
    }
    return;

}