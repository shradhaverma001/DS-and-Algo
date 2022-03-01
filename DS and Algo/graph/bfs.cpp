#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> v[5];
int visited[5];
// 5 5
// 0 2
// 2 1
// 2 4
// 4 1
// 1 3
//n-nodes   m-edges

void bfs(int source);
int main()
{
    int n,m,x,y;
    cin >> n >>m;
    for(int i=1; i<=n; i++){                //i=0 to i<m
        cin >> x >>y;
        v[x].push_back(y);
        
        //undirected
        //v[y].push_back(x);
    }
    //0 is source
    //bfs(0);
    //if source is a node which is not connected 
    for(int i =0; i<n; i++){
        if(visited[i] == 0)
            bfs(i);
    }
}

void bfs(int source)
{
    queue<int>q;

    //0 is inserted in a queue and marked as visited
    q.push(source);
    visited[source] = 1;
    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout << current << " ";
        //v[1]
        //1->2
        for(int i=0; i<v[current].size() ;i++){
            int child = v[current][i];
            //child
            if (visited[child] == 0){
                q.push(child);
                visited[child] = 1;
            }
        }
        cout << endl;
    }

}
