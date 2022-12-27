#include<bits/stdc++.h>
using namespace std;


void make_set(int p[], int x){
    p[x] = x;
    cout << "making a one-element set of "<<x<< endl;
}

int find_set(int p[], int x){
    if (x!=p[x])
        return find_set(p, p[x]);
    return p[x];
}

void _union(int p[], int x, int y){
    int a = find_set(p, x);
    int b = find_set(p, y);
    p[a] = b;
    cout << "union "<<a << " and "<<b<< endl;
}

struct Edge{
    int u, v;
};


void connected_components(int p[], int V, vector<Edge> edges){
    for(int i=0;i<V;i++){
        make_set(p,i);
    }
    for(int i=0;i<edges.size();i++){
        int a=edges[i].u;
        int b=edges[i].v;
        if(find_set(p,a)!=find_set(p,b)){
            _union(p,a,b);
        }
    }
}

bool same_component(int p[], int u, int v){
    if(find_set(p,u)==find_set(p,v)){
        return true;
    }else{
        return false;
    }
}

int main(){
    /// This code is for an undirected graph

    int V, E;
    /// take the number of vertices V and
    /// the number of edges E as input from user
    cin>>V>>E;

    /// take the E edges as input from the user
    vector<Edge> edges;
    for (int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }

    /// create the parent array for a disjoint set of V elements
    int p[V];

    /// call the function connected_components
    connected_components(p, V, edges);


    while(1){
        /// take an integer "option" as input.
        int option;
        cin>>option;

        /// if "option" is 1, take another integer x as input,
        /// check if x is an element of the disjoint set or not, and
        /// if it is then print the root/representative-element of x
        if (option==1){
            int x;
            cin>>x;
            if(x<V){
                cout<<"YES"<<endl;
                cout<<"The representative-element of "<<x<<" is : ";
                cout<<find_set(p,x)<<endl;
            }else{
                cout<<"Not a element of disjoint-set"<<endl;
            }
        }

        /// if "option" is 2, take integers x and y as input,
        /// check if x and y are elements of the disjoint set or not, and
        /// if they are, print whether they belong to the
        /// same connected component or not
        else if (option==2){
            int x,y;
            cin>>x>>y;
            if(x<V&&y<V){
                cout<<"YES "<<x<<" and "<<y<<" are elements of disjoint set"<<endl;
                if(same_component(p,x,y)){
                    cout<<"They belong to the same connected component"<<endl;
                }else{
                    cout<<"They does not belong to the same connected component"<<endl;
                }
            }
        }

        /// if "option" is 3, take integers x and y as input,
        /// check if x and y are elements of the disjoint set or not, and
        /// if they are, print if there is a path from x to y or not.
        else if (option==3){
            int x,y;
            cin>>x>>y;
            if(x<V&&y<V){
                cout<<"YES "<<x<<" and "<<y<<" are elements of disjoint set"<<endl;
                if(same_component(p,x,y)){
                    cout<<"YES there is a path from "<<x<<" to "<<y<<endl;
                    unordered_map<int,int>mp;
                    for(int i=0;i<edges.size();i++){
                        int a=edges[i].u;
                        int b=edges[i].v;
                        mp[a]++;
                        mp[b]++;
                    }
                    cout<<" - ";
                    for(auto xy : mp){
                        if(find_set(p,xy.first)==find_set(p,x)){
                            cout<<xy.first<<" - ";
                        }
                    }
                    cout<<endl;
                }else{
                    cout<<"NO there is no path from "<<x<<" to "<<y<<endl;
                }
            }
        }

        /// if "option" is 4, print all the roots of this disjoint set
        else if (option==4){
            unordered_map<int,int>mp;
            for(int i=0;i<edges.size();i++){
                int a=edges[i].u;
                int b=edges[i].v;
                int aa=find_set(p,a);
                int bb=find_set(p,b);
                mp[aa]++;
                mp[bb]++;
            }
            cout<<"all roots of the disjoint set : ";
            for(auto x : mp){
                cout<<x.first<<" ";
            }
            cout<<endl;
        }

        /// if "option" is 5, print the vertices of each connected components
        /// in each line
        else if (option==5){
            vector<set<int>>vertices;
            unordered_map<int,int>mp1;
            unordered_map<int,int>mp;
            for(int i=0;i<edges.size();i++){
                int a=edges[i].u;
                int b=edges[i].v;
                mp1[a]++;
                mp1[b]++;
            }
            for(int i=0;i<edges.size();i++){
                int a=edges[i].u;
                int b=edges[i].v;
                int aa=find_set(p,a);
                int bb=find_set(p,b);
                mp[aa]++;
                mp[bb]++;
            }
            for(auto x : mp){
                int r=x.first;
                set<int>res;
                for(auto y : mp1){
                    int m=y.first;
                    if(find_set(p,r)==find_set(p,m)){
                        res.insert(m);
                    }
                }
                vertices.push_back(res);
            }
            for(int i=0;i<vertices.size();i++){
                for(auto x : vertices[i]){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
        }

        else {
            return 0;
        }
    }

}
