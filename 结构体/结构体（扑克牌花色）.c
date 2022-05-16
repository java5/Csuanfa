#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct card
{
	char face;
	char suit;
 };
typedef struct card Card;
void main(){
	Card deck[52],t;
	char Face[]={'A','2','3','4','5','6','7',
				'8','9','X','J','Q','K'};
	char Suit[]={3,4,5,6};
	int i,j;
	for(i=0;i<52;i++){
		deck[i].face=Face[i%13];
		deck[i].suit=Suit[i/13];
	}
	for(i=0;i<52;i++){
		printf("%c%c\t",deck[i].face,deck[i].suit);
	}
	srand(time(0));
	for(i=0;i<52;i++){  //Ëæ»ú·¢ÅÆ 
		j=rand()%52;
		t=deck[i];deck[i]=deck[j];deck[j]=t; 
	}
	printf("\n");
	for(i=0;i<52;i++){
		printf("%c %c\t",deck[i].face,deck[i].suit);
	}
} 
