#include <bits/stdc++.h>
using namespace std;
class Xe{
	string bienso;
	float trongluong;
	public:
		string getbs(){
			return bienso;
		}
		float gettl(){
			return trongluong;
		}
		void nhap(){
			cin >> bienso>>trongluong;
		}
		void xuat(){
			cout << "bien so: "<< bienso<<endl;
			cout << "trong luong: "<< trongluong<<endl;
		}
		
};
class bus:public Xe{
	int socho;
	public: 
		void nhapbus(){
			Xe::nhap();
			cin >> socho;
		}
		void xuatbus(){
			Xe::xuat();
			cout << "so cho: "<< socho<<endl;
		}
		int getsc(){
			return socho;
		}
};
class tai:public Xe{
	float taitrong;
	public: 
		void nhaptai(){
			Xe::nhap();
			cin >> taitrong;
		}
		void xuattai(){
			Xe::xuat();
			cout << "tai trong: "<<taitrong<<endl;
		}
		float gettai(){
			return taitrong;
		}
};
main() {
	int n,m;cin >> n>>m;
	bus *a = new bus[n];
	tai *b=new tai[m];
	for(int i=0;i<n;i++){
		a[i].nhapbus();
	}
	for(int i=0;i<m;i++){
		b[i].nhaptai();
	}
	for(int i=0;i<m;i++){
		if(b[i].gettl()>3&&b[i].gettai()<=15){
			b[i].xuattai();
		}else cout << "ko co xe tai tm";
	}
	for(int i=0;i<n;i++){
		if(a[i].gettl()>3&&a[i].getsc()>24){
			a[i].xuatbus();
		}else cout << "ko co xe bus tm";
	}
	string bs;
	cin>> bs;
	for(int i=0;i<n;i++){
		if(a[i].getbs()==bs) a[i].xuatbus();
		else cout << "ko co xe tai tm";
	}
	for(int i=0;i<m;i++){
		if(b[i].getbs()==bs) a[i].xuatbus();
		else cout << "ko co xe bus tm";
	}
	
	
}
   

