#include<bits/stdc++.h>
using namespace std;

class DSU{
public:
    vector<int> P, SZ;
    void INIT(int n){
        P.resize(n);
        SZ.resize(n, 1);
        iota(P.begin(), P.end(), 0);
    }

    int FIND(int v){
        if(P[v] == v)return v;
        return P[v] = FIND(P[v]);
    }

    void UNION(int u, int v){
        u = FIND(u), v = FIND(v);
        if(u == v)return;

        if(SZ[u] > SZ[v]){
            swap(u, v);
        }
        P[v] = u;
        SZ[u] += SZ[v];
    }
}DS;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    DS.INIT(n + 1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        DS.UNION(u, v);
    }
    int q;
    cin >> q;
    while (q--){
        int u, v;
        cin >> u >> v;
        if(DS.FIND(u) == DS.FIND(v)){
            cout << u << " and " << v << " are in the same component" << '\n';
        }else cout << u << " and " << v << " are not in the same component" << '\n';
    }
    return 0;
}