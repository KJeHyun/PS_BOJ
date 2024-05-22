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

struct TreeNode {
	char value;
	TreeNode* left, * right;
};
TreeNode T[26];

void preorder(TreeNode* t) {
	if (t == nullptr) return;
	cout << t->value;
	preorder(t->left);
	preorder(t->right);
}
void inorder(TreeNode* t) {
	if (t == nullptr) return;
	inorder(t->left);
	cout << t->value;
	inorder(t->right);
}
void postorder(TreeNode* t) {
	if (t == nullptr) return;
	postorder(t->left);
	postorder(t->right);
	cout << t->value;
}
int main(){
	fast_io;
	int n;
	cin >> n;
	while (n--) {
		char v, l, r;
		cin >> v >> l >> r;
		T[v - 'A'].value = v;
		if (l != '.') T[v - 'A'].left = &T[l - 'A'];
		if (r != '.') T[v - 'A'].right = &T[r - 'A'];
	}
	preorder(&T[0]);
	cout << "\n";
	inorder(&T[0]);
	cout << "\n";
	postorder(&T[0]);
	cout << "\n";
}