#include <bits/stdc++.h>
using namespace std;

class dathuc{
	int bac,*heso;
	public: dathuc(){bac=0;heso=nullptr;} ~dathuc(){delete[] heso;}
		void nhap(){cin>>bac;heso=new int[bac+1];for(int i=0;i<=bac;i++) cin>>heso[i];}
		friend ostream& operator << (ostream& in, dathuc& a){for(int i=0;i<=a.bac;i++) in<<a.heso[i]<<" "; return in;}
		friend float tinhGT(dathuc a, float x0){float result=0; for (int i = 0; i <= a.bac; i++) result += a.heso[i]*pow(x0, i); return result;}
};

int main () {
	dathuc A; A.nhap(); cout<<A<<endl; float x0;cin>>x0;float result=tinhGT(A,x0);cout<<result;
	return 0;
}
/*
3
3 8 2 5
2
*/
