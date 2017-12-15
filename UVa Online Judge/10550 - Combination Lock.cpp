#include<cstdio>

int main(){
	
	unsigned int a,b,c,d;	
	
	while(scanf("%d %d %d %d", &a, &b, &c, &d), (a||b||c||d)){
		
		int suma = 80;
		
		suma += 40-a-b;
		suma += 40;
		suma += b-c;
		suma += 40-c-d;
		
		printf("%d\n",suma*9);
	}
		
	return 0;
}
