#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
     public:
     unordered_map<T ,list<T>>adj;
     void addedge(T u , T v , bool bidir =true ){
          adj[u].push_back(v);
          if (bidir)
          {
               adj[v].push_back(u);
          }
          
     }
     void print(){
          for(auto p:adj){
               cout<<p.first<<":";
               for(auto neighbour: p.second ){
                    cout<<neighbour<<" ,";
               }cout<<endl;
          }
     }
     void bfs ( T src , T des ){
         unordered_map<T,bool>visited; 
         unordered_map<T,T>parent; 
         unordered_map<T,int>dist; 
         queue<T>q;
         q.push(src);
         visited[src]=true;
         parent[src]=src;
         dist[src]=0;
         while (!q.empty())
         {
          /* code */T f =q.front();
          q.pop();
          cout<<f<<" ";
          for(auto ch: adj[f]){
               if (!visited [ch])
               {
                    /* code */visited[ch]=true;
                    dist[ch]=dist[f]+1;
                    parent[ch]=f;
                    q.push(ch);
               }
               
          }
         }
         cout<<"distance from "<<src <<"to"<<des<<":"<<dist[des];
         while (des!= src)
         {
          /* code */cout<<des<<endl;
          des=parent[des];
         }cout<<des<<endl;
         

     }
};
int main(){
     Graph<string>g;
    g.addedge("putin", "trump", false);
    g.addedge("putin", "modi", false);
    g.addedge("trump", "modi", false);
    g.addedge("yogi", "modi", false);
    g.addedge("yogi", "prabhu", false);
    g.addedge("prabhu", "modi", false);
    g.addedge("putin","popi",false);

     g.print();

     
     return 0;
}