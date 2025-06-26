#include<stdio.h>
#include"libutil.h"
int main(){
	int result=clamp(15, 0, 10);
	printf("result: %d",result);
}
