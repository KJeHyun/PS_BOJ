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

int main() {
	fast_io;
	int n, m;
	cin >> n >> m;
	unordered_map<string, int> pokemonToNum;
	unordered_map<int, string> numToPokemon;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		pokemonToNum[s] = i + 1;
		numToPokemon[i + 1] = s;
	}
	for (int i = 0; i < m; i++) {
		string x;
		cin >> x;
		if (isdigit(x[0])) {
			cout << numToPokemon[stoi(x)];
		}
		else cout << pokemonToNum[x];
		cout << "\n";
	}
}