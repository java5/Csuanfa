#include<stdio.h> 
void main(){
	int total=1,t,i;
	while(1){
		t=total;
		for(i=1;i<=6;i++){
			if(t%5==1){
				t=(t-1)/5*4;
			}
			else
				break; 
		}
		if(i==7)
			break;
		total++;
	}
	printf("%d\n",total);
	while(i<=6){
		t=total; 
		if(t%5==1){
			t=t/5*4;
			i++;
		}else{
			total++;
			i=1;
		}
	}
	printf("%d",total);
}
