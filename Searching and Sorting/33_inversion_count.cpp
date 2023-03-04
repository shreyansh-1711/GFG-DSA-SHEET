
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpii;
#define sqr(x) ((ll)(x) * (x))
#define endl "\n"
#define pb push_back
#define pp pop_back
#define fi first
#define se second
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define alla(arr, sz) arr, arr + sz
#define setbits(x) __builtin_popcount(x)
#define unsetbits(x) (int)log2(x) - setbits(x) + 1
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
const int M = 1e9 + 7;
const int P = 1e8 + 10;
// vb isPrime(P, true);

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.fi);
    cerr << ",";
    _print(p.se);
    cerr << "}";
}
template <class T, class V>
void _printm(pair<T, V> p)
{
    cerr << "{";
    _print(p.fi);
    cerr << ":";
    _print(p.se);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "{ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}
template <class T>
void _print(unordered_set<T> v)
{
    cerr << "{ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "{ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _printm(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(unordered_map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _printm(i);
        cerr << " ";
    }
    cerr << "]";
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

ll binMul(ll a, ll b)
{
    ll ans = 0;
    while (b)
    {

        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}
ll binExp(ll a, ll b, int m)
{
    a %= m;
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = binMul(ans, a);
        a = binMul(a, a);
        b = b >> 1;
    }
    return ans;
}
// void sieve(){isPrime[0]=isPrime[1]=false;for(int i = 2; i*i < P; i++){if(isPrime[i]==true){ for(int j = i * i; j < P; j += i)isPrime[j] = false;}}}
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll lcm(ll a, ll b) { return ((a * b) / (gcd(a, b))); }

//*****************************************************************************
long long merge(long long l, long long r, long long arr[], long long mid)
{

    long long inv = 0;

    long long n1 = mid - l + 1;

    long long n2 = r - mid;

    long long a[n1];

    long long b[n2];

    for (long long i = 0; i < n1; ++i)
    {

        a[i] = arr[l + i];
    }

    for (long long i = 0; i < n2; ++i)
    {

        b[i] = arr[mid + 1 + i];
    }

    long long i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {

        if (a[i] <= b[j])
        {

            arr[k] = a[i];

            i++;
            k++;
        }
        else
        {

            arr[k] = b[j];

            j++;
            k++;

            inv += n1 - i;
        }
    }

    while (i < n1)
    {

        arr[k] = a[i];

        i++;
        k++;
    }

    while (j < n2)
    {

        arr[k] = b[j];

        j++;
        k++;
    }

    return inv;
}

long long mergesort(long long l, long long r, long long arr[])
{

    long long inv = 0;

    if (l < r)
    {

        int mid = l + (r - l) / 2;

        inv += mergesort(l, mid, arr);

        inv += mergesort(mid + 1, r, arr);

        inv += merge(l, r, arr, mid);
    }

    return inv;
}

long long inversioncount(long long arr[], long long N)

{

    if (N == 1)
        return 0;

    return mergesort(0, N - 1, arr);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio();

    long long N;
    cin >> N;
    long long arr[N];
    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    inversioncount(arr, N);

    return 0;
}

// Shreyansh Jain