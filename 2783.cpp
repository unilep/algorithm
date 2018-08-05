#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<functional>
using namespace std;

double X, Y, R;
int N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> X >> Y >> N;
	R = X / Y;
	while (N--) {
		cin >> X >> Y;
		R = (R < (X / Y)) ? R : (X / Y);
	}
	printf("%.2lf", R * 1000);
}
