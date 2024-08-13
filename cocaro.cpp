//Co caro 3*3
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cout << "Moi ban cho X hoac O (X di truoc O di sau)" << endl;
	cout << "Chon X moi nhan phim 1." << endl << "chon O moi nhan phim 2." << endl;
	cout << endl;
	
	cin >> n;
	if(n==1) cout << "Ban chon X" << endl << "Doi thu chon O" << endl;
	else if(n==2) cout << "Ban chon O" << endl << "Doi thu chon X" << endl;
	else 
	{
		cout << "Khong hop le!";
		return 0;
	}
	cout << endl;
	
	char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	
	cout << "Nhap so vo o tuong ung de danh!" << endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
		
		if(n==1) cout << "Ban cam X xin moi di truoc." << endl;
		else cout << "Doi thu cam X xin moi di truoc." << endl;
		
		int k, b[10]={0};
		for(int i=1; i<=9; i++){
			cin >> k;
			if(k<1||k>9) return 0;
			if(b[k]==1){
				if(i%2==1){
				cout << "Khong hop le. Yeu cau X di lai!";
				i=i-1;
				continue;
				}
				else {
				cout << "Khong hop le. Yeu cau O di lai!";
				i=i-1;
				continue;
				}
			}
			b[k]=1;
			if(i%2==1){
				if(k==1) a[0][0]='X';
				else if(k==2) a[0][1]='X';
				else if(k==3) a[0][2]='X'; 
				else if(k==4) a[1][0]='X';
				else if(k==5) a[1][1]='X';
				else if(k==6) a[1][2]='X';
				else if(k==7) a[2][0]='X';
				else if(k==8) a[2][1]='X';
				else if(k==9) a[2][2]='X';
			}
			if(i%2==0){
				if(k==1) a[0][0]='O';
				else if(k==2) a[0][1]='O';
				else if(k==3) a[0][2]='O'; 
				else if(k==4) a[1][0]='O';
				else if(k==5) a[1][1]='O';
				else if(k==6) a[1][2]='O';
				else if(k==7) a[2][0]='O';
				else if(k==8) a[2][1]='O';
				else if(k==9) a[2][2]='O';
			}
			
			for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			
			if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X' || 
			a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X' ||
			a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X' ||
			a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X' ||
			a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X' ||
			a[2][0]=='X'&&a[1][1]=='X'&&a[0][2]=='X' )
			cout << "X thang";
			
			else if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O' || 
			a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O' ||
			a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O' ||
			a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O' ||
			a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O' ||
			a[2][0]=='O'&&a[1][1]=='O'&&a[0][2]=='O' )
			cout << "O thang";
		}	
		
	return 0;
	
}





