#include<bits/stdc++.h>
using namespace std;
#define N 100
struct node{
int val;
int cost;
};
vector<node> G[N];
bool visited[N];
int dis[N];
class cmp{
public:
 bool operator()(node &a, node &b){
 return a.cost>b.cost?true:false;
 }
};
void dijkstra(int source){
priority_queue<node,vector<node>,cmp> PQ;
PQ.push({source,0});
while(!PQ.empty()){
 node current =PQ.top();
 PQ.pop();
 int v = current.val;
 int c = current.cost;
 if(visited[v]==1) continue;
 dis[v] = c;
 visited[v]=1;
 for(int i=0;i<G[v].size();i++){
 int nxt = G[v][i].val;
 int nxtcost = G[v][i].cost;
 if(visited[nxt]==0){
 PQ.push({nxt,c+nxtcost});
 }
 }
}
}
int main(){
int nodes;
int edges;
cin>>nodes>>edges;
ifstream inf("Graph_data.txt");
for(int i=1;i<=edges;i++){
 int u,v,w;
 inf>>u>>v>>w;
 G[u].push_back({v,w});
}
int source; cout<<"enter source: ";
cin>>source;
dijkstra(source);
for(int i=1;i<=nodes;i++){
cout<<"Node "<<i<<" distance: "<<dis[i]<<endl;
}
return 0;
}
