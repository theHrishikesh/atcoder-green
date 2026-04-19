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
#define pf push_front
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
#define fi first
#define se second
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
//string macros
#define str(x) to_string(x)
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
using P = pair<ll,ll>;
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
static constexpr ll MOD9 = 998244353;
static constexpr ll MODe = 1000000007;
// ----------------------------------------------------------------------------------------
template<class T> auto vmin(const T& a){ return *min_element(all(a)); }
template<class T> auto vmax(const T& a){ return *max_element(all(a)); }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > T(b)){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < T(b)){ a = b; return 1; } return 0; }
template<typename T>
using maxpq = priority_queue<T>;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;
//helpers
ll modulo(ll n, ll MOD)
{
    n %= MOD;
    if (n < 0) n += MOD;
    return n;
}
ll pow10(ll n, ll m)
{
    n %= m;
    vll pw(n + 1);
    pw[0] = 1;
    rep(i,1,n + 1) pw[i] = (pw[i - 1] * 10) % m;

    return pw[n];
}
ll digitcount(long long x) {
    int cnt = 0;
    while (x > 0) {
        cnt++;
        x /= 10;
    }
    return cnt;
}
/*Math Algorithms*/
// fast modular exponentiation
ll modpow(ll base, ll exp, ll mod)
{
    ll result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
ll modinv(ll a , ll mod) {
    return modpow(a, mod - 2,mod);
}
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
inline void out(const Head &head, const Tail &... tail) {
    print(head);
    if constexpr (sizeof...(tail) > 0) {
        std::cout << ' ';
        out(tail...);
    } else {
        std::cout << '\n';
    }
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
void __print(const deque<T> &v) {
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
// Debug Helper
template<typename T>
void print_stack(std::stack<T> s)
{
    std::cout << "[ ";
    while (!s.empty())
    {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << "]\n";
}

template<typename T>
void print_queue(std::queue<T> q)
{
    std::cout << "[ ";
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << "]\n";
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
// Range Query Data Structures
// ──────────────────────────────────────────────────────────────────────────
//Segment Tree
struct SegTree {
    ll n;
    vll tree;

    SegTree(ll _n) {
        n = _n;
        tree.assign(4*n, 0);
    }


    void build(ll node, ll l, ll r, vll &a) {
        if (l == r) {
            tree[node] = a[l];
            return;
        }
        ll mid = (l + r) / 2;
        build(2*node, l, mid, a);
        build(2*node+1, mid+1, r, a);
        tree[node] = tree[2*node] + tree[2*node+1];
    }


    ll query(ll node, ll l, ll r, ll ql, ll qr) {
        if (qr < l || r < ql) return 0;              
        if (ql <= l && r <= qr) return tree[node];  
        ll mid = (l + r) / 2;
        return query(2*node, l, mid, ql, qr)
            + query(2*node+1, mid+1, r, ql, qr);
    }


    void update(ll node, ll l, ll r, ll pos, ll val) {
        if (l == r) {
            tree[node] = val;
            return;
        }
        ll mid = (l + r) / 2;
        if (pos <= mid) update(2*node, l, mid, pos, val);
        else update(2*node+1, mid+1, r, pos, val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
};
//Wavelet Tree
struct WaveletTree {
    long long lo, hi;
    WaveletTree *l, *r;
    vector<int> pref; // counts, indices stay int

    // Default constructor
    WaveletTree() : lo(0), hi(0), l(nullptr), r(nullptr) {}

    // Public constructor
    WaveletTree(const vector<long long> &data) : l(nullptr), r(nullptr) {
        if (data.empty()) {
            lo = hi = 0;
            return;
        }

        lo = *min_element(data.begin(), data.end());
        hi = *max_element(data.begin(), data.end());

        vector<long long> a = data; // reordered internally
        build(a.begin(), a.end(), lo, hi);
    }

private:
    void build(vector<long long>::iterator from,
            vector<long long>::iterator to,
            long long _lo, long long _hi) {

        lo = _lo;
        hi = _hi;
        l = r = nullptr;

        if (from >= to || lo == hi) return;

        long long mid = (lo + hi) >> 1;

        pref.reserve(to - from + 1);
        pref.push_back(0);
        for (auto it = from; it != to; ++it)
            pref.push_back(pref.back() + (*it <= mid));

        auto pivot = stable_partition(
            from, to,
            [mid](long long x) { return x <= mid; }
        );

        l = new WaveletTree();
        r = new WaveletTree();
        l->build(from, pivot, lo, mid);
        r->build(pivot, to, mid + 1, hi);
    }

    // INTERNAL: k is 0-based
    long long kth_internal(int lq, int rq, int k) const {
        if (lq >= rq) return -1;
        if (lo == hi) return lo;

        int leftCount = pref[rq] - pref[lq];
        if (k < leftCount)
            return l->kth_internal(pref[lq], pref[rq], k);
        else
            return r->kth_internal(
                lq - pref[lq],
                rq - pref[rq],
                k - leftCount
            );
    }

public:
    // PUBLIC: k is 1-based
    long long kth(int lq, int rq, int k) const {
        return kth_internal(lq, rq, k - 1);
    }

    // count occurrences of x
    int freq(int lq, int rq, long long x) const {
        if (lq >= rq || x < lo || x > hi) return 0;
        if (lo == hi) return rq - lq;

        long long mid = (lo + hi) >> 1;
        if (x <= mid)
            return l->freq(pref[lq], pref[rq], x);
        else
            return r->freq(
                lq - pref[lq],
                rq - pref[rq],
                x
            );
    }

    // count elements <= x
    int lte(int lq, int rq, long long x) const {
        if (lq >= rq || x < lo) return 0;
        if (hi <= x) return rq - lq;

        return l->lte(pref[lq], pref[rq], x)
            + r->lte(
                lq - pref[lq],
                rq - pref[rq],
                x
            );
    }

    // count elements in [low, high]
    int range_count(int lq, int rq, long long low, long long high) const {
        if (lq >= rq || high < lo || hi < low) return 0;
        if (low <= lo && hi <= high) return rq - lq;

        return l->range_count(pref[lq], pref[rq], low, high)
            + r->range_count(
                lq - pref[lq],
                rq - pref[rq],
                low, high
            );
    }
};


/*Convex Hull*/

// Vector subtraction: b -> a
P sub(const P& a, const P& b) {
    return {a.first - b.first, a.second - b.second};
}

// Cross product of two vectors
ll cross_vec(const P& a, const P& b) {
    return a.first * b.second - a.second * b.first;
}

// Cross product (OA x OB)
ll cross(const P& O, const P& A, const P& B) {
    return cross_vec(sub(A, O), sub(B, O));
}

vpll convex_hull(vpll pts) {
    int n = pts.size();
    if (n <= 1) return pts;

    sort(pts.begin(), pts.end());
    pts.erase(unique(pts.begin(), pts.end()), pts.end());

    vpll hull;

    // Lower hull
    for (const auto& p : pts) {
        while (hull.size() >= 2 &&
            cross(hull[hull.size()-2], hull.back(), p) <= 0) {
            hull.pop_back();
        }
        hull.push_back(p);
    }

    // Upper hull
    int lower_size = hull.size();
    for (int i = (int)pts.size() - 2; i >= 0; i--) {
        while ((int)hull.size() > lower_size &&
            cross(hull[hull.size()-2], hull.back(), pts[i]) <= 0) {
            hull.pop_back();
        }
        hull.push_back(pts[i]);
    }

    hull.pop_back(); // remove duplicate start point
    return hull;
}

/* Graph Algorithms */

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
V<V<T>> readGrid(ll H, ll W, bool withSpaces = false) {
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


// LCA — Binary Lifting
struct LCA {
    ll n, LOG;
    vvll adj;
    vvll par;     // par[v][j] = 2^j-th ancestor
    vll depth;

    LCA(ll n) : n(n) {
        LOG = __lg(n) + 1;
        adj.assign(n, {});
        par.assign(n, vll(LOG, -1));
        depth.assign(n, 0);
    }

    // add undirected edge
    void add_edge(ll u, ll v) {
        adj[u].pb(v);
        adj[v].pb(u);
    }

    // DFS to set depth + immediate parent
    void dfs(ll v, ll p) {
        par[v][0] = p;
        for (ll to : adj[v]) {
            if (to == p) continue;
            depth[to] = depth[v] + 1;
            dfs(to, v);
        }
    }

    // build LCA table
    void build(ll root = 0) {
        dfs(root, -1);
        for (ll j = 1; j < LOG; j++) {
            for (ll i = 0; i < n; i++) {
                if (par[i][j-1] != -1)
                    par[i][j] = par[par[i][j-1]][j-1];
            }
        }
    }

    // kth ancestor of node v
    ll kth_parent(ll v, ll k) {
        for (ll j = 0; j < LOG; j++) {
            if (k & (1LL << j)) {
                v = par[v][j];
                if (v == -1) break;
            }
        }
        return v;
    }

    // lowest common ancestor
    ll lca(ll a, ll b) {
        if (depth[a] < depth[b]) swap(a, b);

        // lift a to same depth
        a = kth_parent(a, depth[a] - depth[b]);

        if (a == b) return a;

        for (ll j = LOG - 1; j >= 0; j--) {
            if (par[a][j] != par[b][j]) {
                a = par[a][j];
                b = par[b][j];
            }
        }
        return par[a][0];
    }

    // distance between two nodes
    ll dist(ll a, ll b) {
        ll c = lca(a, b);
        return depth[a] + depth[b] - 2 * depth[c];
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
// topo sort (Kahn's Algorithm)
bool topo_sort(const vvll& dag)
{
    ll k = dag.size();
    vll indeg(k, 0);

    // compute indegrees
    rep(u,0,k)
    {
        each(v, dag[u])
        {
            indeg[v]++;
        }
    }

    queue<ll> q;
    rep(i,0,k)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    vll topo;

    while (!q.empty())
    {
        ll u = q.front(); q.pop();
        topo.pb(u);

        each(v, dag[u])
        {
            if (--indeg[v] == 0)
                q.push(v);
        }
    }

    // Optional safety check
    // if ((ll)topo.size() != k) -> cycle exists (should not happen for SCC DAG)

    return ((ll)topo.size() == k);
}


// DSU Algorithm
// Classic DSU (Union-Find)
struct DSU {
    vector<ll> parent, size;
    ll component_count;
    ll max_comp_size;

    DSU(ll n)
    {
        parent.resize(n);
        size.assign(n, 1);

        rep(i, n) parent[i] = i;

        component_count = n;
        max_comp_size = 1;
    }

    // find leader with path compression
    ll leader(ll x)
    {
        if (parent[x] == x) return x;
        return parent[x] = leader(parent[x]);
    }

    // merge two sets
    bool merge(ll x, ll y)
    {
        ll rx = leader(x);
        ll ry = leader(y);

        if (rx == ry) return false;

        // union by size
        if (size[rx] < size[ry]) swap(rx, ry);

        parent[ry] = rx;
        size[rx] += size[ry];

        component_count--;
        max_comp_size = max(max_comp_size, size[rx]);
        return true;
    }

    // are x and y in the same set?
    bool same(ll x, ll y)
    {
        return leader(x) == leader(y);
    }

    // size of the set containing x
    ll setsz(ll x)
    {
        return size[leader(x)];
    }
};
// Weighted DSU Algorithm
struct WDSU {
    vector<ll> parent, size;
    vector<ll> diff_weight;   // weight[x] - weight[parent[x]]
    ll component_count;
    ll max_comp_size;

    WDSU(ll n)
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


//primes upto
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
template <typename T>
vector<T> operator+(const vector<T>& x, const vector<T>& y) {
    vector<T> r = x;
    r.insert(r.end(), y.begin(), y.end());
    return r;
}

/*modint template */
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

using mint = modint<MOD9>;

/*Binomial Templates*/
vector<mint> fact, invfact;
void init_nCr(ll N) {
    fact.resize(N + 1);
    invfact.resize(N + 1);

    fact[0] = 1;
    for (ll i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i;

    invfact[N] = inv(fact[N]);
    for (ll i = N; i > 0; i--)
        invfact[i - 1] = invfact[i] * i;
}
mint nCr(ll n, ll r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] * invfact[n - r];
}

int main() 
{
    Test
    {
        sll(h,w);
        sstr(s);
        ll n = h + w - 2;
        vll d(n + 1,0), r(n + 1,0);
        rep(i,0,n)
        {
            d[i + 1] = d[i] + (s[i] == 'D');
            r[i + 1] = r[i] + (s[i] == 'R');
        }
        ll ans = 0;
        rep(k,0,n + 1)
        {
            ll l1 = d[k] + 1;
            ll l2 = k + 2 - w;
            ll l3 = r[n] - r[k] + k - w + 2;
            ll l4 = 1;
            ll r1 = k + 1 - r[k];
            ll r2 = h;
            ll r3 = k + 1;
            ll r4 = h + d[k] - d[n];

            ll li = max({l1,l2,l3,l4});
            ll ri = min({r1,r2,r3,r4});

            if (li <= ri)
            {
                ans += (ri - li + 1);
            }
        }
        out(ans);
    }
}
