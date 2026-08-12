#include<stdio.h>
void main(){
	char ip_frame[100],op_frame[200];
	char s_flag='@',e_falg='#',insert_char='!';
	int n,j=0;
	printf("Enter frame length:");
	scanf("%d\n",&n);
	printf("Enter frame elements(characters only)\n");
	for(int i=0;i<n;i++){
	scanf("%c",&ip_frame[i]);
	}
	for(int i=0;i<n;i++){
		if((ip_frame[i]=='@'||ip_frame[i]=='#')&&((i!=0)&&(i!=n-1))){
			op_frame[j++]=insert_char;
			op_frame[j++]=ip_frame[i];
		}
		else{
			op_frame[j++]=ip_frame[i];
		}
	}
	printf("\n After bit destuffing the frame is=\n");
	
	printf("%s",op_frame);
	}
	

