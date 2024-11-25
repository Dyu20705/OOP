#include<bits/stdc++.h>
using namespace std;
/*class hcn {
	float w,h;
	public: 
		void nhap(){
			cin >> w >> h;
		}
		void xuat(){
			cout <<"Chieu rong: " <<w<<"\nChieu dai: "<< h << endl;
		}
		float s(){
			return w*h;
		}
};
main(){
	int n;cin >> n;float ss=0;float smin=1e9;
	vector<hcn> a(n);
	for(int i=0;i<n;i++){
		a[i].nhap();
		ss+= a[i].s();
		if(a[i].s()<smin) smin = a[i].s();
	}
	cout <<"Dien tich trung binh: "<< ss/n<<endl;
	cout << "Cac hinh co dien tich nho nhat"
	for(int i=0;i<n;i++){
		cout << "Thong tin hinh thu "<< i+1 << endl;
		if(a[i].s()==smin) a[i].xuat();
	}
}
*/

class thisinh{
	string hoten;
	float diem;
	public:
		void nhap(){
			cin.ignore(1);
			getline(cin,hoten);
			cin >> diem;	
		}
		float getdiem(){
			return diem;
		}
};
class olym:public thisinh{
	char truong; //A,B,C
	public:
		void nhapol(){
			thisinh::nhap();
			cin >> truong;
		}
		char gettruong(){
			return truong;
		}
	
};
main(){
	int n;cin >> n;
	vector<olym>a(n);
	float diem1=0,diem2=0,diem3=0;
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++){
		a[i].nhapol();
		if(a[i].gettruong()=='A') {
			diem1+= a[i].getdiem();
			x++;
		}
		else if(a[i].gettruong()=='B')
		{
			diem2+= a[i].getdiem();
			y++;
		} 
		else if(a[i].gettruong()=='C')
		{
			diem3+= a[i].getdiem();
			z++;
		} 
	}
	cout << "A: "<< diem1 <<"co "<< x<<" sinh vien"<< "B: "<<diem2<<"co "<< x<<" sinh vien"<<"C: "<<diem3<<"co "<< x<<" sinh vien";
	float mx = max((diem1>diem2?diem1:diem2),diem3);
	if(mx == diem1)cout << "A cao";
	else if(mx == diem2)cout << "B cao";
	else if(mx == diem3)cout << "C cao";
}
