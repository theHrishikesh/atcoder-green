#include <bits/stdc++.h>
using namespace std;
struct IoSetup {
    IoSetup() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(15);
        cerr << fixed << setprecision(15);
    }
} iosetup;
void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
#define overload5(_1,_2,_3,_4,_5,name,...) name
#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=n;i--;)
#define rrep2(i,n) for(ll i=n;i--;)
#define rrep3(i,a,b) for(ll i=b;i-->(a);)
#define rrep4(i,a,b,c) for(ll i=(a)+((b)-(a)-1)/(c)*(c);i>=(a);i-=c)
#define repsq(i, n) for (ll i = 1; ((i) * (i) < n); ++i)
#define rrep(...) overload4(__VA_ARGS__,rrep4,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define each1(i,a) for(auto&&i:a)
#define each2(x,y,a) for(auto&&[x,y]:a)
#define each3(x,y,z,a) for(auto&&[x,y,z]:a)
#define each4(w,x,y,z,a) for(auto&&[w,x,y,z]:a)
#define each(...) overload5(__VA_ARGS__,each4,each3,each2,each1)(__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall1(i) rbegin(i),rend(i)
#define rall2(i,a) rbegin(i),rbegin(i)+a
#define rall3(i,a,b) rbegin(i)+a,rbegin(i)+b
#define rall(...) overload3(__VA_ARGS__,rall3,rall2,rall1)(__VA_ARGS__)
#define len(x) (ll)(x).size()
#define sum(...) accumulate(all(__VA_ARGS__),0LL)
#define rev(vec) reverse(vec.begin(), vec.end())
#define elif else if
#define pb push_back
#define eb emplace_back
#define lexi lexicographical_compare
#define Test int testing; cin >> testing; while(testing--)
#define dbg(...) cout << #__VA_ARGS__ << " = ", _print(__VA_ARGS__)
#define sint(...) int __VA_ARGS__; in(__VA_ARGS__)
#define sll(...) ll __VA_ARGS__; in(__VA_ARGS__)
#define sstr(...) string __VA_ARGS__; in(__VA_ARGS__)
#define sch(...) char __VA_ARGS__; in(__VA_ARGS__)
#define sdbl(...) double __VA_ARGS__; in(__VA_ARGS__)
#define sld(...) ld __VA_ARGS__; in(__VA_ARGS__)
#define svll(n, v) vll v(n); scan(v)
#define svii(n, v) vii v(n); scan(v)
#define svec(type, n, v) vector<type> v(n); scan(v)
#define s1vll(n,v) vll v(n + 1); rep(i, 1, n + 1) cin >> v[i];
#define s1vii(n,v) vii v(n + 1); rep(i, 1, n + 1) cin >> v[i];
#define uniq(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
#define asc(x) sort(all(x))
#define desc(x) sort(all(x),greater<>())
// ----------------------------------------------------------------------------------------
//binarySearch macros
// ----------------------------------------------------------------------------------------
#define lb(v,target) lower_bound(all(v), target)
#define rlb(v,target) lower_bound(rall(v), target)
#define lbset(s,target) s.lower_bound(target)
#define ub(v,target) upper_bound(all(v), target)
#define lbidx(v,target) lb(v,target)-v.begin()
#define ubidx(v,target) ub(v,target)-v.begin()
#define rub(v,target) upper_bound(rall(v), target) //Equivalent to finding the largest element smaller than or equal to target
#define ubset(s,target) s.upper_bound(target)
// ----------------------------------------------------------------------------------------
#define digitcount(n) ((n) == 0 ? 1 : (int)log10(abs(n)) + 1)
// ----------------------------------------------------------------------------------------
//string macros
#define str(x) to_string(x)
#define tolower(s) transform(all(s),::tolower)
#define toupper(s) transform(all(s),::toupper)
// ----------------------------------------------------------------------------------------
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
// ----------------------------------------------------------------------------------------
// universal shorthands
template<class T> using V = vector<T>;                  // dynamic array
template<class T, size_t N> using A = array<T, N>;      // fixed-size array
// *** Primitive short aliases ***
using ll = long long;
using ld = long double;
using ull = unsigned long long;
// *** Container/type shortcuts ***
using vch = vector<char>;
using vvch = vector<vch>;
using vvcc = vector<vch>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vii = vector<int>;
using vvii = vector<vii>;
using vecs = vector<string>;
// *** Pair shortcuts ***
using pll = pair<ll,ll>;
using pdd = pair<ld,ld>;
using pii = pair<int,int>;
// *** Vector of pairs ***
using vpii = vector<pii>;
using vvpii = vector<vpii>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using vpci = vector<pair<char,int>>;
using vpcl = vector<pair<char,ll>>;
// *** Boolean and set containers ***
using vbl = vector<bool>;
using vvbl = vector<vbl>;
using usetii = unordered_set<int>;
using usetll = unordered_set<ll>;
using setii = set<int>;
using setll = set<ll>;
using setstr = set<string>;
using usetpll = unordered_set<pll>;
using usetpii = unordered_set<pii>;
// *** Stack shortcuts ***
using stkint = stack<int>;
using stkll = stack<ll>;
using stkpii = stack<pii>;
using stkpll = stack<pll>;
// ----------------------------------------------------------------------------------------
template<class T> auto vmin(const T& a){ return *min_element(all(a)); }
template<class T> auto vmax(const T& a){ return *max_element(all(a)); }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > T(b)){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < T(b)){ a = b; return 1; } return 0; }
template<typename T>
using maxpq = priority_queue<T>;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;
template <class T> std::vector<T> sort_unique(std::vector<T> vec) { sort(vec.begin(), vec.end()), vec.erase(unique(vec.begin(), vec.end()), vec.end()); return vec; }
//scan
inline void scan() {}
inline void scan(int &a) { std::cin >> a; }
inline void scan(unsigned &a) { std::cin >> a; }
inline void scan(long &a) { std::cin >> a; }
inline void scan(long long &a) { std::cin >> a; }
inline void scan(unsigned long long &a) { std::cin >> a; }
inline void scan(char &a) { std::cin >> a; }
inline void scan(float &a) { std::cin >> a; }
inline void scan(double &a) { std::cin >> a; }
inline void scan(long double &a) { std::cin >> a; }
inline void scan(std::vector<bool> &vec) {for (size_t i = 0; i < vec.size(); i++) { int a;scan(a);vec[i] = a;}}
inline void scan(std::string &a) { std::cin >> a; }
template <class T>
inline void scan(std::vector<T> &vec);
template <class T, size_t size>
inline void scan(std::array<T, size> &vec);
template <class T, class L>
inline void scan(std::pair<T, L> &p);
template <class T, size_t size>
inline void scan(T (&vec)[size]);
template <class T>
inline void scan(std::vector<T> &vec) {for (auto &i : vec) scan(i);}
template <class T>
inline void scan(std::deque<T> &vec) {for (auto &i : vec) scan(i);}
template <class T, size_t size>
inline void scan(std::array<T, size> &vec) {for (auto &i : vec) scan(i);}
template <class T, class L>
inline void scan(std::pair<T, L> &p) {scan(p.first);scan(p.second);}
template <class T, size_t size>
inline void scan(T (&vec)[size]) {for (auto &i : vec) scan(i);}
template <class T>
inline void scan(T &a) {std::cin >> a;}
inline void in() {}
template <class Head, class... Tail>
inline void in(Head &head, Tail &...tail) {
    scan(head);
    in(tail...);
}
//print functions
inline void print() { std::cout << ' '; }
inline void print(const bool &a) { std::cout << a; }
inline void print(const int &a) { std::cout << a; }
inline void print(const unsigned &a) { std::cout << a; }
inline void print(const long &a) { std::cout << a; }
inline void print(const long long &a) { std::cout << a; }
inline void print(const unsigned long long &a) { std::cout << a; }
inline void print(const char &a) { std::cout << a; }
inline void print(const char a[]) { std::cout << a; }
inline void print(const float &a) { std::cout << a; }
inline void print(const double &a) { std::cout << a; }
inline void print(const long double &a) { std::cout << a; }
inline void print(const std::string &a) {for (auto &&i : a) print(i);}
template <class T>
inline void print(const std::vector<T> &vec);
template <class T, size_t size>
inline void print(const std::array<T, size> &vec);
template <class T, class L>
inline void print(const std::pair<T, L> &p);
template <class T, size_t size>
inline void print(const T (&vec)[size]);
template <class T>
inline void print(const std::vector<T> &vec) {
    if (vec.empty()) return;
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <typename T>
inline void print(const std::set<T>& s) {
    if (s.empty()) return;
    auto it = s.begin();
    print(*it);
    for (++it; it != s.end(); ++it) {
        cout << ' ';
        print(*it);
    }
}
template <class T>
inline void print(const std::deque<T> &vec) {
    if (vec.empty()) return;
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T, size_t size>
inline void print(const std::array<T, size> &vec) {
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T, class L>
inline void print(const std::pair<T, L> &p) {
    print(p.first);
    std::cout << ' ';
    print(p.second);
}
template <class T, size_t size>
inline void print(const T (&vec)[size]) {
    print(vec[0]);
    for (auto i = vec; ++i != end(vec);) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T>
inline void print(const T &a) {
    std::cout << a;
}
inline void out() { std::cout << '\n'; }
template <class T>
inline void out(const T &t) {
    print(t);
    std::cout << '\n';
}
template <class Head, class... Tail>
inline void out(const Head &head, const Tail &...tail) {
    print(head);
    std::cout << ' ';
    out(tail...);
}
template<typename T>
void __print(const T &x) { cout << x; }

template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cout << "{"; __print(x.first); cout << ", "; __print(x.second); cout << "}";
}
template<typename T>
void __print(const vector<T> &v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        __print(v[i]);
        if (i + 1 != v.size()) cout << ", ";
    }
    cout << "]";
}
template<typename T>
void __print(const set<T> &v) {
    cout << "{";
    bool first = true;
    for (auto &i : v) {
        if (!first) cout << ", ";
        __print(i);
        first = false;
    }
    cout << "}";
}
template<typename T>
void __print(const multiset<T> &v) { __print(set<T>(v.begin(), v.end())); }

template<typename K, typename V>
void __print(const map<K, V> &v) {
    cout << "{";
    bool first = true;
    for (auto &i : v) {
        if (!first) cout << ", ";
        __print(i);
        first = false;
    }
    cout << "}";
}
template<typename T>
void __print(const unordered_set<T> &v) { __print(set<T>(v.begin(), v.end())); }
template<typename K, typename V>
void __print(const unordered_map<K, V> &v) { __print(map<K, V>(v.begin(), v.end())); }
void _print() { cout << endl; }
template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cout << ", ";
    _print(v...);
}
template<typename... Args>
void __print(const std::tuple<Args...>& t) {
    cout << "(";
    std::apply([](const auto&... args) {
        size_t i = 0;
        ((cout << (i++ ? ", " : "") << args), ...);
    }, t);
    cout << ")";
}

// ──────────────────────────────────────────────────────────────────────────
// Bitwise functions
// ──────────────────────────────────────────────────────────────────────────
//for fenwick trees
template <typename T>
inline T lsb_mask(T x) { return x & -x; }
// population count
inline int popcnt(int x)        { return __builtin_popcount(x); }
inline int popcnt(unsigned x)   { return __builtin_popcount(x); }
inline int popcnt(ll x)         { return __builtin_popcountll(x); }
inline int popcnt(ull x)        { return __builtin_popcountll(x); }
// parity sign of popcount  (returns -1 if odd, +1 if even)
inline int popcnt_sgn(int x)      { return (__builtin_parity(unsigned(x)) & 1 ? -1 : 1); }
inline int popcnt_sgn(unsigned x) { return (__builtin_parity(x) & 1 ? -1 : 1); }
inline int popcnt_sgn(ll x)       { return (__builtin_parityll(x) & 1 ? -1 : 1); }
inline int popcnt_sgn(ull x)      { return (__builtin_parityll(x) & 1 ? -1 : 1); }
// index of most significant bit (0-indexed), -1 if x == 0
inline int topbit(int x)        { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }
inline int topbit(unsigned x)   { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }
inline int topbit(ll x)         { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
inline int topbit(ull x)        { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
// index of least significant bit (0-indexed), -1 if x == 0
inline int lowbit(int x)        { return (x == 0 ? -1 : __builtin_ctz(x)); }
inline int lowbit(unsigned x)   { return (x == 0 ? -1 : __builtin_ctz(x)); }
inline int lowbit(ll x)         { return (x == 0 ? -1 : __builtin_ctzll(x)); }
inline int lowbit(ull x)        { return (x == 0 ? -1 : __builtin_ctzll(x)); }
// kth bit helpers
template <typename T>
inline T kth_bit(int k) { return T(1) << k; }
template <typename T>
inline bool has_kth_bit(T x, int k) { return (x >> k) & 1; }

ll nextPow2(ll x) {
    if (x <= 0) return 1;
    return 1LL << (topbit(x) + 1);  // always the next power of 2
}
// ──────────────────────────────────────────────────────────────────────────
// Graph Algorithms
// ──────────────────────────────────────────────────────────────────────────
//Quick Graph Builder:
vvll build_adj(ll n, ll m, ll base=1,bool directed = false){
    vvll adj(n + 1);
    for(ll i=0,u,v; i<m; ++i){
        in(u,v);
        u-=base,v-=base;
        if (!directed) adj[u].pb(v),adj[v].pb(u);
        else adj[u].pb(v);
    }
    return adj;
}

template <typename T>
V<V<T>> readGrid(int H, int W, bool withSpaces = false) {
    V<V<T>> grid(H, V<T>(W));
    for (int i = 0; i < H; i++) {
        if (is_same<T, char>::value && !withSpaces) {
            string row; cin >> row;
            for (int j = 0; j < W; j++) grid[i][j] = row[j];
        } else {
            for (int j = 0; j < W; j++) cin >> grid[i][j];
        }
    }
    return grid;
}

//shortest path chooser
static constexpr ll INF = (ll)1e18;
static constexpr ll NINF = -(ll)1e18;
static constexpr int INVALID = -1;
template<typename T, T INFV = numeric_limits<T>::max()/2, int INV = INVALID>
struct shortest_path {
    int V, E;
    bool single_positive_weight;
    T wmin, wmax;

    vpii tos;
    vii head;
    vector<tuple<int,int,T>> edges;

    vll dist;
    vii prev;

    shortest_path(int _V = 0)
        : V(_V), E(0), single_positive_weight(true), wmin(0), wmax(0) {}

    void add_edge(int u, int v, T w) {
        assert(u >= 0 && u < V && v >= 0 && v < V);
        edges.pb({u, v, w});
        ++E;
        if (w > 0 && wmax > 0 && wmax != w) single_positive_weight = false;
        chmin(wmin, w);
        chmax(wmax, w);
    }
    void add_bi_edge(int u, int v, T w) { add_edge(u,v,w); add_edge(v,u,w); }

    void build_() {
        if (len(tos)==E && len(head)==V+1) return;
        tos.assign(E, {});
        head.assign(V+1,0);
        each(e, edges) ++head[get<0>(e)+1];
        rep(i,V) head[i+1] += head[i];
        auto cur = head;
        each(e, edges) {
            int u,v; T w; tie(u,v,w)=e;
            tos[cur[u]++] = {v,(int)w};
        }
    }

    template<class Heap = priority_queue<pair<T,int>, vector<pair<T,int>>, greater<>>> 
    void dijkstra(int s, int t = INV) {
        build_();
        dist.assign(V, INFV); prev.assign(V, INV);
        dist[s]=0;
        Heap pq; pq.emplace(0,s);
        while(!pq.empty()){
            auto [d,u]=pq.top(); pq.pop();
            if(u==t) return;
            if(dist[u]<d) continue;
            rep(e,head[u],head[u+1]){
                auto [v,w]=tos[e]; T nd=d+w;
                if(dist[v]>nd){ dist[v]=nd; prev[v]=u; pq.emplace(nd,v); }
            }
        }
    }

    void solve(int s, int t = INV) {
        if(wmin>=0) {
            if(single_positive_weight) zero_one_bfs(s,t);
            else if(wmax<=10) dial(s,t);
            else if((ll)V*V < (E<<4)) dijkstra_vquad(s,t);
            else dijkstra(s,t);
        } else bellman_ford(s,V);
    }

    vector<int> retrieve_path(int g) const {
        if(dist[g]==INFV) return {};
        vector<int> p;
        for(int u=g; u!=INV; u=prev[u]) p.pb(u);
        reverse(all(p));
        return p;
    }

    void dijkstra_vquad(int s, int t = INV) {
        build_();
        dist.assign(V, INFV); prev.assign(V, INV);
        dist[s]=0;
        vbl used(V,false);
        while (true) {
            int u = INV; T best = INFV;
            rep(i,V) if(!used[i] && dist[i]<best){ u=i; best=dist[i]; }
            if(u==INV || u==t) break;
            used[u]=true;
            rep(e,head[u],head[u+1]){
                auto [v,w]=tos[e];
                if(dist[v]>dist[u]+w){ dist[v]=dist[u]+w; prev[v]=u; }
            }
        }
    }

    bool bellman_ford(int s, int nb) {
        build_();
        dist.assign(V, INFV); prev.assign(V, INV);
        dist[s]=0;
        rep(loop,nb) {
            bool upd=false;
            rep(u,V) if(dist[u]!=INFV) rep(e,head[u],head[u+1]){
                auto [v,w]=tos[e]; T nd=dist[u]+w;
                if(dist[v]>nd){ dist[v]=nd; prev[v]=u; upd=true; }
            }
            if(!upd) return true;
        }
        return false;
    }

    void spfa(int s) {
        build_();
        dist.assign(V, INFV); prev.assign(V, INV);
        dist[s]=0;
        deque<int> q; vbl inq(V,false);
        q.pb(s); inq[s]=true;
        while(!q.empty()){
            int u=q.front(); q.pop_front(); inq[u]=false;
            rep(e,head[u],head[u+1]){
                auto [v,w]=tos[e]; T nd=dist[u]+w;
                if(dist[v]>nd){ dist[v]=nd; prev[v]=u;
                    if(!inq[v]){
                        if(!q.empty() && nd<dist[q.front()]) q.push_front(v);
                        else q.pb(v);
                        inq[v]=true;
                    }
                }
            }
        }
    }

    void zero_one_bfs(int s, int t = INV) {
        build_();
        dist.assign(V, INFV); prev.assign(V, INV);
        dist[s]=0;
        vector<int> q(4*V);
        int l=2*V, r=2*V;
        q[r++]=s;
        while(l<r){
            int u=q[l++]; if(u==t) return;
            rep(e,head[u],head[u+1]){
                auto [v,w]=tos[e]; T nd=dist[u]+w;
                if(dist[v]>nd){ dist[v]=nd; prev[v]=u;
                    if(w) q[r++]=v; else q[--l]=v;
                }
            }
        }
    }

    void dial(int s, int t = INV) {
        build_();
        dist.assign(V, INFV); prev.assign(V, INV);
        dist[s]=0;
        vector<vector<pair<int,T>>> buck(wmax+1);
        buck[0].eb(s,0);
        int inq_cnt=1;
        for(int cur=0; inq_cnt; ++cur){
            if(cur>=(int)buck.size()) cur=0;
            while(!buck[cur].empty()){
                auto [u,du]=buck[cur].back(); buck[cur].pop_back(); --inq_cnt;
                if(u==t) return;
                if(dist[u]<du) continue;
                rep(e,head[u],head[u+1]){
                    auto [v,w]=tos[e]; T nd=du+w;
                    if(dist[v]>nd){ dist[v]=nd; prev[v]=u;
                        int idx=(cur+w)%(wmax+1);
                        buck[idx].eb(v,nd); ++inq_cnt;
                    }
                }
            }
        }
    }
};
// Tarjans Algorithm for SCC
struct SCC
{
    ll n,timer=0,compcnt=0;
    vvll g;
    vll disc,low,comp;
    stkll stk;
    vbl instack;
    
    SCC(ll n) : n(n), g(n), disc(n,-1), low(n), comp(n,-1), instack(n,false){}
    
    void add_edge(ll u,ll v)
    {
        g[u].pb(v);
    }
    
    void dfs(ll u)
    {
        disc[u] = low[u] = ++timer;
        stk.push(u);
        instack[u]=true;
        
        each(v,g[u])
        {
            if (disc[v]==-1)
            {
                dfs(v);
                chmin(low[u],low[v]);
            }
            elif (instack[v])
            {
                chmin(low[u],disc[v]);
            }
        }
        
        if (low[u]==disc[u])
        {
            while(true)
            {
                ll v = stk.top();stk.pop();
                instack[v] = false;
                comp[v] = compcnt;
                if (v==u) break;
            }
            compcnt++;
        }
    }
    
    void run()
    {
        rep(i,0,n)
        {
            if (disc[i]==-1) dfs(i);
        }
    }
};
// DSU Algorithm
  struct DSU {
    vector<ll> parent, size;
    vector<ll> diff_weight;   // weight[x] - weight[parent[x]]
    ll component_count;
    ll max_comp_size;

    DSU(ll n)
    {
        parent.resize(n);
        size.assign(n, 1);
        diff_weight.assign(n, 0);  // initialize all weights to 0

        rep(i,n) parent[i] = i;

        component_count = n;
        max_comp_size = 1;
    }

    // path compression + accumulate weights
    ll leader(ll x)
    {
        if (parent[x] == x) return x;
        ll p = leader(parent[x]);
        diff_weight[x] += diff_weight[parent[x]];
        return parent[x] = p;
    }

    // weight(x) = value[x] - value[root(x)]
    ll weight(ll x)
    {
        leader(x);
        return diff_weight[x];
    }

    // merge with constraint: value[y] - value[x] = w
    bool merge(ll x, ll y, ll w)
    {
        ll rx = leader(x);
        ll ry = leader(y);

        ll wx = weight(x); // weight from x to rx
        ll wy = weight(y); // weight from y to ry

        if (rx == ry) return false;

        // Solve: value[y] - value[x] = w
        // → (wy + diff_weight[ry-root]) - (wx + diff_weight[rx-root]) = w
        // Since roots have diff_weight = 0:
        ll diff = w + wx - wy;

        // union by size
        if (size[rx] < size[ry]) {
            swap(rx, ry);
            diff = -diff;
        }

        parent[ry] = rx;
        diff_weight[ry] = diff;    // weight[ry] = value[ry] - value[rx]
        size[rx] += size[ry];

        component_count--;
        max_comp_size = max(max_comp_size, size[rx]);
        return true;
    }

    // same component?
    bool same(ll x, ll y)
    {
        return leader(x) == leader(y);
    }

    // difference value[y] - value[x]
    ll diff(ll x, ll y)
    {
        return weight(y) - weight(x);
    }

    ll setsz(ll x)
    {
        return size[leader(x)];
    }
};
// ──────────────────────────────────────────────────────────────────────────
// Math Algos
// ──────────────────────────────────────────────────────────────────────────
//floor div template
template <typename T>
T floor(T a, T b) {
  return a / b - (a % b && (a ^ b) < 0);
}
//ceil div template
template <typename T>
T ceil(T x, T y) {
  return floor(x + y - 1, y);
}
//balanced modulo or Euclidean modulo (out normal modulo)
template <typename T>
T bmod(T x, T y) {
  return x - y * floor(x, y);
}
// gives a quotient reminder pair for a div
template <typename T>
pair<T, T> divmod(T x, T y) {
  T q = floor(x, y);
  return {q, x - q * y};
}

const int residues[] = {1, 7, 11, 13, 17, 19, 23, 29};
vll primes_upto(ll n) 
{
    if (n < 2) return {};

    bitset<50000001> is_prime;
    is_prime.set();
    is_prime[0] = 0; // 1 is not prime

    vll primes = {2, 3, 5};

    int sqrt_n = sqrt(n);

    for (int p = 7; p <= sqrt_n; p += 2) {
        // Check only numbers coprime to 2, 3, 5
        ll mod30 = p % 30;
        bool good = false;
        each(r,residues)
            if (r == mod30) good = true;

        if (!good) continue;
        if (!is_prime[p/2]) continue;

        for (int j = p*p; j <= n; j += 2*p) {
            is_prime[j/2] = 0;
        }
    }

    for (int p = 7; p <= n; p += 2) {
        int mod30 = p % 30;
        each(r,residues) {
            if (mod30 == r) {
                if (is_prime[p/2]) primes.push_back(p);
                break;
            }
        }
    }

    return primes;
}
ll power(ll a, ll b) 
{
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

vll all_divisors(ll n) {
    vll divs;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) divs.push_back(n / i);
        }
    }
    sort(all(divs));
    return divs;
}

string to_base(ll a,ll b)
{
  if (b<2 || b>36) throw invalid_argument("base out of range");
    if (a == 0) return "0";
    static const char* digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    while (a > 0) {
        int rem = a % b;
        s.pb(digits[rem]);
        a /= b;
    }
    reverse(all(s));
    return s;
}
// ──────────────────────────────────────────────────────────────────────────────
// modint<998244353>
// ──────────────────────────────────────────────────────────────────────────────
template<ll M>
struct modint {
    ll v;
    constexpr modint(ll _v = 0) noexcept {
        v = _v % M;
        if (v < 0) v += M;
    }
    // addition / subtraction
    constexpr modint& operator+=(modint o) noexcept {
        v += o.v;
        if (v >= M) v -= M;
        return *this;
    }
    constexpr modint& operator-=(modint o) noexcept {
        v -= o.v;
        if (v < 0) v += M;
        return *this;
    }
    // multiplication
    constexpr modint& operator*=(modint o) noexcept {
        v = (unsigned long long)v * o.v % M;
        return *this;
    }
    // binary exponentiation
    friend modint power(modint x, ll e) {
        modint res(1);
        while (e > 0) {
            if (e & 1) res *= x;
            x *= x;
            e >>= 1;
        }
        return res;
    }
    // inverse (M must be prime)
    friend modint inv(modint x) {
        return power(x, M - 2);
    }
    // division
    constexpr modint& operator/=(modint o) noexcept {
        return *this *= inv(o);
    }

    // lee-way operators
    constexpr modint operator+(modint o) const noexcept { return modint(*this) += o; }
    constexpr modint operator-(modint o) const noexcept { return modint(*this) -= o; }
    constexpr modint operator*(modint o) const noexcept { return modint(*this) *= o; }
    constexpr modint operator/(modint o) const noexcept { return modint(*this) /= o; }

    // I/O
    friend ostream& operator<<(ostream& os, modint x) {
        return os << x.v;
    }
    friend istream& operator>>(istream& is, modint& x) {
        ll t; is >> t; x = modint(t); return is;
    }
};

static constexpr ll MOD = 998244353;
using mint = modint<MOD>;
template <typename T>
vector<T> operator+(const vector<T>& x, const vector<T>& y) {
    vector<T> r = x;
    r.insert(r.end(), y.begin(), y.end());
    return r;
}
ll n, pidx , qidx;
vll p;
vll q;
vll curr;
vbl used;
vvll perm;
ll cnt = 0;
void dfs()
{
    if (len(curr) == n)
    {
        perm.pb(curr);
        cnt++;
        if (curr == p) pidx = cnt;
        if (curr == q) qidx = cnt;
        return ;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            used[i] = true;
            curr.pb(i);
            dfs();
            curr.pop_back();
            used[i] = false;
        }
    }

}

int main()
{
    sll(n,m);
    s1vll(n,x);

    vll c(m + 1);
    vll y(m + 1);
    map<ll,ll> bonus;
    rep(i,1,m + 1)
    {
        in(c[i],y[i]);
        bonus[c[i]] = y[i];
    }

    vvll dp(n + 1, vll(n + 1, INF));
    dp[0][0] = 0;
    //dp[i][j] = max cost made till ith flip if counter is j

    rep(i,1,n + 1)
    {
        for (ll j = 1; j <= i; j++) dp[i][j] = dp[i - 1][j - 1] + x[i] + bonus[j];

        dp[i][0] = 0;
        for (ll j = 0; j < i; j++) chmax(dp[i][0],dp[i - 1][j]);
    }

    ll ans = 0;
    rep(j,0,n + 1) chmax(ans,dp[n][j]);

    out(ans);
}
