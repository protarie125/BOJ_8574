#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k, x, y;
	cin >> n >> k >> x >> y;

	auto ct = int{ 0 };
	const auto& k2 = k * k;
	while (0 < (n--)) {
		int px, py;
		cin >> px >> py;

		auto dx = px - x;
		auto dy = py - y;
		auto dist = dx * dx + dy * dy;

		if (k2 < dist) {
			++ct;
		}
	}

	cout << ct;

	return 0;
}