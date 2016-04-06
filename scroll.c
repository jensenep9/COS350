#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <sys/stat.h>

int main(int argc,char *argv[]){
	FILE *fp;
	long int filesize;
	char charArray[260][100];
	char tempC;
	if (argc == 2){
		fp = fopen(argv[1],"r");
		if(fp){
			fseek(fp,0L,SEEK_END);
			filesize = ftell(fp);
			fseek(fp,0L,SEEK_SET);
			int i; int j;
			j=0;
			
			for(i=0;i<filesize;i++){
				tempC=fgetc(fp);
				if(tempC=="\n"){
					j++;
				}
				charArray[i][j]=tempC;
				printf("%d",i);
				printf("%d",j);
			}
		}
	} else {
	}
}
