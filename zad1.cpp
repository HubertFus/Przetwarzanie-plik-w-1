#include <iostream>
#include <fstream>
using namespace std;
int x,y;
fstream plik;
fstream plik2;
int cw(int x,int y){
	if(x>0&&y>0){
		return 1;
	}else if(x<0&&y>0){
		return 2;
	}else if(x<0&&y<0){
		return 3;
	}else{
		return 4;
	}
}
int main(){
	plik.open("wsp.txt", ios::in);
	while(!plik.eof()){
		plik>>x>>y;
		plik2.open("wynik.txt",ios::app);
		plik2<<x<<" "<<y<<" "<<cw(x,y)<<"-cwiartka"<<endl;
		plik2.close();
	}
	plik.close();
}
