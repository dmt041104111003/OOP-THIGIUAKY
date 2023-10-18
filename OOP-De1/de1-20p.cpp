#include <bits/stdc++.h>
using namespace std;

class book{
	string masach,tensach,tacgia,nhaxuatban; int namxuatban;
	public: 
		book(string ms="",string ts="",string tg="",int namxb=0,string nxb=""){ masach=ms;tensach=ts;tacgia=tg;namxuatban=namxb;nhaxuatban=nxb;}
		void nhap(){ getline(cin,masach);getline(cin,tensach);getline(cin,tacgia);cin>>namxuatban;cin.ignore();getline(cin,nhaxuatban);}
		void xuat(){cout<<masach<<"	"<<tensach<<" "<<tacgia<<" "<<namxuatban<<"	"<<nhaxuatban<<endl;}
		string gettacgia(){return tacgia;}
};

int main () {
	int n;cin>>n;cin.ignore();book *b; b=new book[n+1]; for(int i=0;i<n;i++) b[i].nhap();cout<<endl; for(int i=0;i<n;i++) b[i].xuat();cout<<endl;
	string timSach_tacgia; getline(cin,timSach_tacgia); for(int i=0;i<n;i++) if(timSach_tacgia==b[i].gettacgia()){b[i].xuat();}
	return 0;
}

/*
5
#H284
Dragon Ball
Dao Manh Tung
2001
Kim Dong1
#K828
Doraemon
Dao Manh Tung
2005
Kim Dong2
#U729
Chu Be Rong
Do Hoang Duong
2006
Kim Dong8
#199
Shin-Cau be but chi
Hoang Duy Tung
2001
Kim Dong9
#N792
SpiderMan
Hoang Duy Tung
2000
Kim Dong1
*/
