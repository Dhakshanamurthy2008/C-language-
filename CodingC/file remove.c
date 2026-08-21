#include<stdio.h>
int main(){
	FILE*fp;
	if(remove("new.txt")==0){
	    printf("file is deleted sucessfully");
	}
	else{
	    printf("not able to remove the file");
	}
    }