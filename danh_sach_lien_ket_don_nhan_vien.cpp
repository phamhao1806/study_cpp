#include <iostream>
#include <string>
using namespace std;
struct NhanVien
{
    int MaNhanVien;
    string TenNhanVien;
    int Tuoi;
    float HeSoLuong;
};
struct Node
{
    NhanVien* data;
    Node* pNext;
};
struct SingleList
{
    Node* pHead;
    Node* pTail;
};
void init(SingleList*& List)
{
    List = new SingleList();
    List->pHead = List->pTail = NULL;
}
void CreateNhanVien(NhanVien*& NhanVien)
{
    cout << "Ma nhan vien: ";
    cin >> NhanVien->MaNhanVien;
    cin.ignore();
    cout << "Ten nhan vien: ";
    getline(cin,NhanVien->TenNhanVien);
    cout<<"Tuoi : ";
   cin>>NhanVien->Tuoi;
   cout<<"He so luong :";
   cin>>NhanVien->HeSoLuong;
}
Node* CreateNode()
{
    Node* pNode = new Node();
    pNode->data = new NhanVien;
    CreateNhanVien(pNode->data);
    pNode->pNext = NULL;
    return pNode;
}
void PrintNhanVien(NhanVien* NhanVien)
{
    cout << "Ma nhan vien : " << NhanVien->MaNhanVien << endl;
    cout << "Ten nhan vien : " << NhanVien->TenNhanVien << endl;
    cout << "Tuoi : " << NhanVien->Tuoi << endl;
    cout << "He so luong :" << NhanVien->HeSoLuong << endl;
}
void InsertLast(SingleList*& List)
{
    Node* pNode = CreateNode();
    if (List->pHead == NULL)
    {
        List->pHead = List->pTail = pNode;
    }
    else
    {
        List->pTail->pNext = pNode;
        List->pTail = pNode;
    }
}
void PrintList(SingleList* List)
{
    Node* pNode = List->pHead;
    cout << "Danh sach nhan vien:\n";
    while (pNode)
    {
        PrintNhanVien(pNode->data);
        pNode = pNode->pNext;
    }
}
int main()
{
    SingleList* List;
    init(List);
    int n;
    cout << "So luong nhan vien : "; cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cout << "nhan vien thu " << i <<":" << endl;
        InsertLast(List);
    }
    //cau 2
    PrintList(List);
}
