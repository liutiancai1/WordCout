#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main() {
//sum：单词总数
    int sum = 0;
    FILE* fp;        
    
    char buffer[MAX_LINE] ;        
    int len ;    //行字符个数
    int i;
    fp = fopen("D:/c语言代码/test.txt","r");
    if(fp == NULL){
        printf("cannot open file!");
        exit(0);
    }
    //读取文件内容
    while(! feof(fp)){
        

        if(fgets(buffer, MAX_LINE, fp) != NULL){
            
            len = strlen(buffer);
            sum ++;
            //len - 1 是为了去掉换行符所占位置
            for(i = 0; i < len - 1; i++){
                if((buffer[i] == ' ') || (buffer[i] == ',')){
                	if (i!=0 && (buffer[i-1] != ' ' && buffer[i-1] != ',')) {
                	
                    	sum ++;
					}
                    
                }
            }
        }
        
    }

    fclose(fp);

    //输出
    printf("\n\t 总单词数为 %d \n \n",sum);
	printf("\n\t 总字符数为%d\n", len);
    
    return 0;
}
