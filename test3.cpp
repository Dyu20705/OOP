#include<bits/stdc++.h>
using namespace std;
/*
class Dayso{
	int n;
	int *a;
	public:
		friend istream& operator>> (istream& is,Dayso& d){
			is>> d.n;
			d.a = new int[d.n];
			for(int i=0;i<d.n;i++){
				is >> d.a[i];
			}
			return is;
		}
		friend ostream& operator<< (ostream& os,Dayso& d){
			os << "Phan tu cua day so la: ";
			for(int i=0;i<d.n;i++){
				os << d.a[i] << " ";
			}
			return os;
		}
		float tbc(){
			float s=0;
			for(int i=0;i<n;i++){
				s+= a[i];
			}
			return s/n;
		}
		int getn(){
			return n;
		}
};
main(){
	Dayso a;
	cin >> a;
	cout << a.tbc()*a.getn();

}
*/
class mh{
	string mah;
	long dg;
	public:
		void nhapmh(){
			cin >> mah>> dg;
		}
		string getmah(){
			return mah;
		}
		long getdg(){
			return dg;
		}
};
class hd{
	string mah;
	int sl;
	string nb; //dd/mm/yyyy
	public:
		void nhaphd(vector<mh>& a){
			cin >> mah;
			for(int i=0;i<a.size();i++){
				if(mah == a[i].getmah()){
					cin >> sl>> nb;
					break;
				}
			}
		}
		int getsl(){
			return sl;
		}
		string getnb(){
			return nb;
		}
		string getmhh(){
			return mah;
		}
};
main(){
	int m,n;cin >> n >>m;
	vector<mh>a(m);
	vector<hd>b(n);
	for(int i=0;i<m;i++){
		a[i].nhapmh();
	}
	for(int i=0;i<n;i++){
		b[i].nhaphd(a);
	}
	cout << "Nhap ngay ban: \n";
	string xx;cin >> xx;
	long tongtien=0;
	for(int i=0;i<n;i++){
		if(b[i].getnb()==xx){
			for(int j=0;j<m;j++){
				if(a[j].getmah()==b[j].getmhh()){
					tongtien+= b[j].getsl()*a[j].getdg();
				}
			}
		}
	}
	cout << "Tong tien: "<< tongtien;
	int dem=0;
	for(int i=0;i<n;i++){
		if(b[i].getsl() >10){
			dem++;
		}
	}
	cout << dem;
}
