#include<iostream>
#include<chrono>
using namespace std;
bool  LuyThuaCua2 (int n)
{
	if (n == 0)
	{
		return false; 
	} 
	while (n != 1)
	{
		if (n % 2 != 0)
		{
			return false;
		}
		n = n / 2; 
	} 
	return true; 
} 
int main()
{
	int n; 
	cout << "nhap n: ";
	cin >> n;
	auto t0 = std::chrono::system_clock::now();
	if (LuyThuaCua2 (n) == true)
	{
		cout << n << " la luy thua cua 2 " << endl;  
	}
	else
	{
		cout << n << " khong  la luy thua cua 2 " << endl;  
	} 
    auto t1 = std::chrono::system_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count();
    std::cout << "time: " << elapsed_ms << "(ms)"<< std::endl;

} 
 
