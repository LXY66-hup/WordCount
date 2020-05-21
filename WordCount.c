#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp;
	int count;
	char type[2],name[10],ch;
	printf("Please input£º\n");
	scanf("%s %s",&type,&name);
    if(strcmp(type,"-c")==0)
	{
		fp=fopen(name,"r");
  	    if(fp==NULL){
		    printf("File open error!\n");
	     	return 0;
		}
		count=0;
		while((ch=fgetc(fp))!=EOF)
		{
          
            count++;

		}
		printf("×Ö·ûÊý£º%d\n",count);	
		fclose(fp);
		return 0;

	}
	else if(strcmp(type,"-w")==0)
	{
		fp=fopen(name,"r");
  	    if(fp==NULL){
		    printf("File open error!\n");
	     	return 0;
		}
		count=1;
		while((ch=fgetc(fp))!=EOF)
		{
          
            if(ch==' '||ch==',')
			{
				count++;
			}

		}
		printf("µ¥´ÊÊý£º%d\n",count);	
		fclose(fp);
		return 0;

	}
	else
		printf("input error!\n");
	    return 0;


}
