#include<bits/stdc++.h>
using namespace std;

void make_set(int p[], int x){
    p[x] = x;
    //cout << "making a one-element set of "<<x<< endl;
}

int find_set(int p[], int x){
    if (x!=p[x])
        return find_set(p, p[x]);
    return p[x];
}

void _union(int p[],int rnk[], int x, int y){
    int a = find_set(p, x);
    int b = find_set(p, y);
    if(a==b){return;}
    if(rnk[a]<rnk[b]){
        p[a]=b;
    }else if(rnk[b]<rnk[a]){
        p[b]=a;
    }else{
        p[b]=a;
        rnk[a]=rnk[a]+1;
    }
    //cout << "union "<<a << " and "<<b<< endl;
}

int main()
{
    int v,e;
    cin>>v>>e;
    int p[v];
    int rnk[v]={0};
    vector<pair<int,pair<int,int>>>g;
    vector<pair<int,pair<int,int>>>ans;
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g.push_back({w,{u,v}});
    }
    sort(g.begin(),g.end());
    for(int i=0;i<v;i++){
        make_set(p,i);
    }
    for(int i=0;i<e;i++){
        int u=g[i].second.first;
        int v=g[i].second.second;
        int w=g[i].first;
        if(find_set(p,u)!=find_set(p,v)){
            ans.push_back({w,{u,v}});
            _union(p,rnk,u,v);
        }
    }
    cout<<"MST"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].second.first<<" - "<<ans[i].second.second<<endl;
    }
    cout<<"Weight : ";
    int sum=0;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first;
        sum+=ans[i].first;
        if(i!=ans.size()-1){
            cout<<"+";
        }
    }
    cout<<" = "<<sum<<endl;
}
