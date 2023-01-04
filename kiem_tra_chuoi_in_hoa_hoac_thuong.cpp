#include<iostream>
#include<string>
using namespace std;

bool KiemTra (string s)
{
	int count = 0;
	int count1 = 0; 
	for (int i = 0; i < s.size(); i++)
	{
		count++;
	}
    for (int i = 0; i < s.size(); i++)
	{
        if(s[i] >= 'A' && s[i] <= 'Z')
		{
            count1++;
        }
    	if(s[i] >= 'a' && s[i] <= 'z')
		{
            count1++;
        } 
	}
	if (count == count1)
	{
		return true; 
	}else
	{
		return false; 
	} 
} 
int main()
{
	string s;
	cout << "Nhap chuoi: "; 
	cin >> s;
	if (KiemTra(s) == true)
	{
		cout << "toan chuoi  la in hoa hoac chu thuong" ;
	}else
	{
		cout << "toan chuoi khong la in hoa hoac chu thuong" ;
	}
 } 
