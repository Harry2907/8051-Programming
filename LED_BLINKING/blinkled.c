#include<reg51.h>
#define led P2

	void delay (void)
{
		unsigned int i;
		for(i=0;i<10000;i++);
} 
void main(){

	while(1){
	led=0x00;
	delay();
	led=0xFF;
	delay();
}
}