//#include  "stc15.h"
//void main(){
//	P2=0xa0;	P0=0x00;	P2=0x80;	P0=0xff;
//	while(1){
//		P00 = 0;
//	}
//}


//#include <STC15F2K60S2.H>

//void Delay(unsigned int time);

//void main(){
//	P2=0xa0;	P0=0x00;	P2=0x80;	P0=0xff;
//	while(1){
//		P02 = 0;	Delay(50);
//		P02 = 1;	Delay(50);
//	}
//}

//void Delay(unsigned int time){
//	unsigned int i,j;
//	for(i=0;i<time;i++)
//		for(j=853;j>0;j--);
//}




 #include <STC15F2K60S2.H>
 void Delay(unsigned char time){
 	unsigned char i=11,j=190;
 	while(time--){
 		do{
 			while(--j);
 		}while(--i);
 	}
 }
 void main(){
 	P2=0xa0;	P0=0x00;	P2=0x80;	P0=0xff;
 	while(1){
 		P0=0xfe;	Delay(20);
 		P0=0xfd;	Delay(20);
 		P0=0xfb;	Delay(20);
 		P0=0xf7;	Delay(20);
 		P0=0xef;	Delay(20);
 		P0=0xdf;	Delay(20);
 		P0=0xbf;	Delay(20);
 		P0=0x7f;	Delay(20);
		
 	}
 }


// #include <STC15F2K60S2.H>
// sfr LED = 0x80;
// sbit Lucky = P0^3;
// void Delay(unsigned char time){
// 	unsigned char i=11,j=190;
// 	while(time--){
// 		do{
// 			while(--j);
// 		}while(--i);
// 	}
// }
// void main(){
// 	P2=0xa0;	P0=0x00;	P2=0x80;	P0=0xff;
// 	while(1){
// 		LED = 0xaa;
// 		Delay(20);
// 		LED = 0xff;
// 		Lucky = 0;
// 		Delay(50);
// 	}
// }

// #include "STC15.h"
// void Delay(unsigned char time){
// 	unsigned char i=11,j=190;
// 	while(time--){
// 		do{
// 			while(--j);
// 		}while(--i);
// 	}
// }
// void main(){
// 	P2=0xa0;	P0=0x00;	P2=0x80;	P0=0xff;
	
// 	while (1)
// 	{
// 		unsigned char i;
// 		for(i=0;i<8;i++){
// 			P0 = ~(0x01<<i);
// 			Delay(20);
// 		}
// 	}
	
// }




//#include "stc15.h"
//#include "intrins.h"

//unsigned char LED = 0xfe;
//unsigned int s = 500;

//void Delay(unsigned int time);

//void main(){
//	unsigned int i=300,count=0;
//	P2=0xa0;	P0=0x00;	P2=0x80;	P0=0xff;
//	while (1)
//	{
//		
//		
//		do{
//			P0 = LED;
//			Delay(i);/* code */
//			LED = _crol_(LED,1);
//			count++;
//		}while(count<7);
//		count %= 8;
//		i-=20;
//		
//		if(i<30){
//			i--;
//			i%=1;
//		}
//		
//	}
//	
//}
//void Delay(unsigned int time){
//	unsigned int i,j;
//	for(i=0;i<time;i++)
//		for(j=853;j>0;j--);
//}