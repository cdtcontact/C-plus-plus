#include <iostream>
using namespace std;
/*
* 输入：反复输入n，并且跟上n个数字
* 输出：对于每组输入的数据，输出所有奇数的乘积
*/
int a[10000];

int main() {
	int n;
	while (cin>>n) {
		for (int i = 0;i < n;i++) {
			cin >> a[i];
		}
		int num = 1;
		for (int i = 0;i < n;i++) {
			if (a[i] % 2 == 1) {
				num *= a[i];
			}
		}
		cout << num << endl;
	}
	return 0;
}