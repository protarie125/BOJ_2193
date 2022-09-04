#include <iostream>
#include <vector>

using namespace std;

using ll = long long;
using vl = vector<ll>;

auto fibo = vl{};

ll solve(int n) {
	if (fibo[n] < 0) {
		fibo[n] = solve(n - 1) + solve(n - 2);
	}

	return fibo[n];
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	if (n <= 2) {
		cout << 1;
		return 0;
	}

	fibo = vl(n + 1, -1);
	fibo[1] = 1;
	fibo[2] = 1;

	cout << solve(n);

	return 0;
}