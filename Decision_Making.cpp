//Nhập vào 1 số nguyên, yêu cầu xuất ra chữ số hàng trăm của số đó, nếu không có thì xuất ra 0

#include <iostream>
using namespace std;

int main() {
	int n, so_chu_so = 0;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> n;
	if (n >= 100) {
		cout << " chu so hang tram cua so " << n << " la " << n / 100 % 10 << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	return 0;
}