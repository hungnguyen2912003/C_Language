#include <stdio.h>

int ABCD(int a, int b, int c){
	while(a < 3){
		if(b < 1){
			c++;
			continue;
		}
		if(a > b){
			b = a;
			break;
		}
		else{
			if(c==3){
				c++;
				return 1;
			}
			else{
				a++;
			}
		}
	}
	return 0;
}


int main(){
	printf("%d", ABCD(2,0,5));
	return 1;
}
