#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j, e, r;
	int x, y, u, v, q, w, a[x][y], b[u][v], c[q][w];
	int calculation;
	
	
	cout<<"input two number into 'x' and 'y' of 'a' array."<<endl;
	cin>>x>>y;
	
	cout<<"input two number into 'u' and 'v' of 'b' array."<<endl;		
	cin>>u>>v;
	
	cout<<"chose one to calculate."<<endl;
	cout<<" 1:'+' 2:'-' 3:'*' "<<endl;
	cin>>calculation;
	
	switch(calculation){
		case 1:
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		
		case 2:
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				c[i][j]=a[i][j]-b[i][j];
			}			
		}
		
		/*case 3:
			for(i=0;i<x;i++ ;e=0;e<i;e++){
				for(j=0;j<y;j++ ;r=0;r<j;r++){
					c[i][j]=a[e][r]*b[e][r];	
				}
			}*/ 
	}
	
	return 0;
}
