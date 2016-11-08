#include<stdio.h>
#include<math.h>
main(){
	int n,p1=0,p2=0,i,count=0,p11=0,p22=0;
	while(count<11){
		
if(count==0||count==2||count==4||count==6||count==8){
printf(" Player 1\n");
	scanf(" %d",&p1);
	if(p1>0&&p1<10){
	p1=pow(2,p1);
	if(!((p1==p22)||(p1==p11))){
			p11=p11+p1;
			count++;
			if((p11&7==7)||(p11&56==56)||(p11&448==448)||(p11&73==73)||(p11&146==146)||(p11&292==292)||(p11&273==273)||(p11&84==84)){
printf("\nwinner is player 1");	break;	
}
			continue;
	}

	else {
		printf("\nError input\n");
	continue;
	}
}
	printf("\nError input\n");
	continue;
}
	else{
		printf(" Player 2\n");
			scanf(" %d",&p2);
			if(p2>0&&p2<10){
	p2=pow(2,p2);
			if(!((p2==p11)||(p2==p22))){
	p22=p22+p2;
	count++;
	
if((p22&7==7)||(p22&56==56)||(p22&448==448)||(p22&73==73)||(p22&146==146)||(p22&292==292)||(p22&273==273)||(p22&84==84)){
printf("\nwinner player 2"); break;	
}
	continue;
}
	else {
		printf("\nError input\n");
	continue;
	}
	}
	printf("\nError input\n");
	continue;

	}
		
if(count==9){ printf("\nRow!\n");break;
		} 
		
		
		}
}


