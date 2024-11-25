#include<bits/stdc++.h>
using namespace std;
/*class dthuc{
	int bac;
	float *heso;
	public:
		void nhap(){
			cin >> bac;
			heso = new float[bac+1];
			for(int i =0;i<=bac;i++){
				cin >> heso[i];
			}
		}
		void xuat(){
			for(int i=0;i<=bac;i++){
				cout << heso[i];
				if(i!= 0)cout << "x^" << i;
				if(i!=bac)cout << "+";
			}
		}
		float daoham(float x){
			float s=0;
			for(int i=1;i<=bac;i++){
				s+= heso[i]*i*pow(x,i-1);
			}
			return s;
		}
		
};
main(){
	dthuc a;
	a.nhap();
	a.xuat();
	int x;cin >> x;
	cout << "\n"<<a.daoham(x);
}
*/
class qlh {
	string mh,th,xs;
	int sl,lh;
	public:
		void nhap(){
			cin >> mh;
			cin.ignore(1);
			getline(cin,th);
			getline(cin,xs);
			cin >> lh >> sl;
		}
		void xuat(){
			cout << "San pham co ma hang " 
			<< mh << ":\nten : "<<th 
			<< "\nxuat su: "<< xs << 
			"\nLo: "<< lh << "\nSo luong: "<< sl << endl;
		}
		int getsl(){
			return sl;
		}
		int getlh(){
			return lh;
		}
		string getten(){
			return th;
		}
};
class dientu:public qlh{
	int tgbh; //thang
	public:
		void nhapdt() {
			qlh::nhap();
			cin >> tgbh;
		}
		void xuatdt() {
			qlh::xuat();
			cout << "\nthoi gian bao hanh: "<< tgbh<< " thang" << endl;
		}
		int gettgbh(){
			return tgbh;
		}
};
main(){
	int n;cin >> n;
	vector<dientu> a(n);
	for(int i=0;i<n;i++){
		a[i].nhapdt();
	}
	int dem1=0,dem2=0,dem3=0;
	for(int i=0;i<n;i++){
		if(a[i].gettgbh()>=12){
				if(a[i].getlh()==1) dem1+=a[i].getsl();
				else if(a[i].getlh()==2) dem2+=a[i].getsl();
				else if(a[i].getlh()==3) dem3+=a[i].getsl();
		}
	}
	cout <<"Hang loai 1 co: " <<dem1<<
	"Hang loai 2 co: "<< dem2 <<
	"Hang loai 3 co: "<< dem3<< endl;
	string x;
	cin.ignore(1);
	getline(cin,x);
	bool xx=0;
	for(int i=0;i<n;i++){
		if(a[i].getten()==x){
			a[i].xuatdt();
			xx=1;
		}
	}
	if(!xx) cout << "Ko co";
}
