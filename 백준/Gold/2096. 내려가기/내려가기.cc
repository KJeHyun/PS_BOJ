#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second

int Mdp1[3], Mdp2[3], mdp1[3], mdp2[3];

int main() {
	fast_io;
	int n;
	cin >> n;
	int a, b, c;
	cin >> a >> b >> c;
	Mdp2[0] = Mdp1[0] = mdp2[0] = mdp1[0] = a;
	Mdp2[1] = Mdp1[1] = mdp2[1] = mdp1[1] = b;
	Mdp2[2] = Mdp1[2] = mdp2[2] = mdp1[2] = c;
	for (int i = 1; i < n; i++) {
		cin >> a >> b >> c;
		Mdp2[0] = max(Mdp1[0], Mdp1[1]) + a;
		Mdp2[1] = max({ Mdp1[0], Mdp1[1], Mdp1[2] }) + b;
		Mdp2[2] = max(Mdp1[1], Mdp1[2]) + c;
		Mdp1[0] = Mdp2[0]; Mdp1[1] = Mdp2[1]; Mdp1[2] = Mdp2[2];

		mdp2[0] = min(mdp1[0], mdp1[1]) + a;
		mdp2[1] = min({ mdp1[0], mdp1[1], mdp1[2] }) + b;
		mdp2[2] = min(mdp1[1], mdp1[2]) + c;
		mdp1[0] = mdp2[0]; mdp1[1] = mdp2[1]; mdp1[2] = mdp2[2];
	}
	cout << max({ Mdp2[0], Mdp2[1], Mdp2[2] }) << " " << min({ mdp2[0],mdp2[1],mdp2[2] });
}