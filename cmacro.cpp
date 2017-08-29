#include <bits/stdc++.h>
using namespace std;

// Preprocessor loop
#define CAT_I(x, y) x ## y
#define CAT(x, y) CAT_I(x, y)

#define INC0 1
#define INC1 2
#define INC2 3
#define INC3 4
#define INC4 5
#define INC5 6
#define INC6 7
#define INC7 8
#define INC8 9
#define INC(i) CAT(INC, i)

#define EMPTY(...)
#define DEF_COMMA0 _,1 EMPTY
#define COMMA0() ,0
#define IS_EMPTY_III(f, s) s
#define IS_EMPTY_II(t) IS_EMPTY_III t
#define IS_EMPTY_I(x) IS_EMPTY_II((DEF_ ## x()))
#define IS_EMPTY(x, ...) IS_EMPTY_I(x COMMA0)

#define IF_0(x, y) y
#define IF_1(x, y) x
#define IF(cond, x, y) CAT(IF_, cond)(x, y)

#define FOR_EACH_I9(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I8(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I7(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I6(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I5(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I4(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I3(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I2(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I1(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I0(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I(i, F, ...) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH(F, ...) FOR_EACH_I(0, F, __VA_ARGS__)
#define IF_0(x, y) y
#define IF_1(x, y) x
#define IF(cond, x, y) CAT(IF_, cond)(x, y)

#define FOR_EACH_I9(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I8(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I7(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I6(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I5(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I4(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I3(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I2(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I1(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I0(i, F, x, ...) F(x) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH_I(i, F, ...) IF(IS_EMPTY(__VA_ARGS__), EMPTY, CAT(FOR_EACH_I, i))(INC(i), F, __VA_ARGS__)
#define FOR_EACH(F, ...) FOR_EACH_I(0, F, __VA_ARGS__)
// Preprocessor loop end

// Preprocessor args counter
#define PP_NARG(...) \
         PP_NARG_(__VA_ARGS__,PP_RSEQ_N())
#define PP_NARG_(...) \
         PP_ARG_N(__VA_ARGS__)
#define PP_ARG_N( \
          _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
         _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
         _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
         _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
         _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
         _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
         _61,_62,_63,N,...) N
#define PP_RSEQ_N() \
         63,62,61,60,                   \
         59,58,57,56,55,54,53,52,51,50, \
         49,48,47,46,45,44,43,42,41,40, \
         39,38,37,36,35,34,33,32,31,30, \
         29,28,27,26,25,24,23,22,21,20, \
         19,18,17,16,15,14,13,12,11,10, \
         9,8,7,6,5,4,3,2,1,0
#define IS_ONEARG(...) IS_ONEARG_(__VA_ARGS__,PP_RSEQ_ONE())
#define IS_ONEARG_(...) IS_ONEARG_N(__VA_ARGS__)
#define IS_ONEARG_N(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, N, ...) N
#define PP_RSEQ_ONE() 0,0,0,0,0,0,0,0,0,1,0

// Preprocessor args counter end

// alternative rep macro
#define esc_paren(...) __VA_ARGS__
#define in ,
#define rep(...) rep1(rep2, (__VA_ARGS__))
#define rep1(X, A) X A
#define rep2(i, ...) IF(IS_ONEARG(__VA_ARGS__), rep_len1(i, __VA_ARGS__), rep3(i, __VA_ARGS__))
#define rep_len1(i, end, ...) for (int i = 0; i < end; i++)
#define rep3(i, iter, ...) rep4(rep5, (iter, i, esc_paren __VA_ARGS__))
#define rep4(X, A) X A
#define rep5(iter, ...) iter(__VA_ARGS__)

// iterators
#define up up_iter ,
#define up_iter3(i, start, end) for (int i = start; i < end; i++)
#define up_iter4(i, start, end, up) for (int i = start; i < end; i += up)
#define up_iter(...) CAT(up_iter, PP_NARG(__VA_ARGS__))(__VA_ARGS__)
#define down down_iter ,
#define down_iter2(i, end) for(int i = end-1; i >= 0; i++)
#define down_iter3(i, start, end) for (int i = end-1; i >= start; i--)
#define down_iter4(i, start, end, down) for (int i = end-1; i >= start; i -= down)
#define down_iter(...) CAT(down_iter, PP_NARG(__VA_ARGS__))(__VA_ARGS__)
#define viter viter_iter ,
#define viter_iter(i, v) auto tmpitr=v.begin(); for (auto i=*tmpitr; tmpitr != v.end(); tmpitr++)

// short names
typedef long long ll;
typedef string str;
#define down_queue(x) priority_queue<x>
#define up_queue(x) priority_queue<x, vector<x>, greater<x>>
#define vec(x) vector<x>
ll gcd(ll a,ll b){while(b){ll tmp = a % b;a = b;b = tmp;}return a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
#define all(x) x.begin(), x.end()
#define split_str(str, sp_word) istringstream stream(str); string res; for(int cnt = 0; getline(stream,res,sp_word); cnt++)
#define digit(x) ((int)log10((double)(x)) + 1)
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define out(x) for(auto i : x) cout << i << " "; cout << endl;
#define outln(x) for(auto i : x) cout << i << " " << endl;
#define vec_cpy(to,from) copy(all(to),back_inserter(from))
#define ary_cpy(to,from) memcpy(to, from, sizeof from)
#define MOD = 1000000007; 

// debug macros
#define DEBUG_VAR(v) << #v << "=" << v << " "
#ifdef DEBUG
#define debug_echo(e) cout << "L" << __LINE__ << ": " << e << endl
#define debug_var(...) cout << "L" << __LINE__ << ": " FOR_EACH(DEBUG_VAR, __VA_ARGS__) << endl
#define debug_echo_dp1(dp, N) { cout << "[ "; rep(i, N) cout << dp[i] << " ";  cout << "]" << endl; }
#else
#define debug_echo(e)
#define debug_var(...)
#define debug_echo_dp1(dp, N)
#endif

// Implementation

int main() {
}

