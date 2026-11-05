#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long n;
    cin >> n;

    vector<pair<long, long>> edges(2*n+1);

    long max_v = 0; // 頂点の最大値を記録（idx配列のサイズ決定のため）

    for(long i = 0; i < n; i++) {
        long u, v;
        cin >> u >> v;
        
        edge[i]={u,v};
        edge[i+1]={v,u}
        
        max_v = max({max_v, u, v});
    }

    vector<pair<long, long>> idx(max_v + 2);

    edge[2*n+1]={1e15,1e15};
    sort(edges.begin(), edges.end());

    long pos = 0;
    for (long v = 0; v <= max_v; v++) {
        idx[v].first = pos;
        while (edges[pos].first == v) pos++;
        
        idx[v].second = pos;
    }

    //これで片側がxのが小さい順で出る
    //for (long i = idx[x].first; i < idx[x].second; i++)

    return 0;
}
