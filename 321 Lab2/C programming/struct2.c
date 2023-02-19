#include <stdio.h>
#include <string.h>

struct Perfect{
	int s,e;
};

int isPerfect(int n){
	int sum, iter;
	sum = 1;
	iter = 2;
	while (iter<n){
		if (n%iter == 0){
			sum = sum+iter;
		}
		iter = iter + 1;
	}
	return sum;
}

int main(){
	struct Perfect p;
	scanf("%d", &p.s);
	scanf("%d", &p.e);
	for(p.s; p.s <= p.e; p.s = p.s+1){
		if(p.s == 1){
		
		}
		else if(p.s == isPerfect(p.s)){
			printf("%d\n", p.s);
		}
	}
	return 0;
}
