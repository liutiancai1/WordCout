#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main() {
//sum����������
    int sum = 0;
    FILE* fp;        
    
    char buffer[MAX_LINE] ;        
    int len ;    //���ַ�����
    int i;
    fp = fopen("D:/c���Դ���/test.txt","r");
    if(fp == NULL){
        printf("cannot open file!");
        exit(0);
    }
    //��ȡ�ļ�����
    while(! feof(fp)){
        

        if(fgets(buffer, MAX_LINE, fp) != NULL){
            
            len = strlen(buffer);
            sum ++;
            //len - 1 ��Ϊ��ȥ�����з���ռλ��
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

    //���
    printf("\n\t �ܵ�����Ϊ %d \n \n",sum);
	printf("\n\t ���ַ���Ϊ%d\n", len);
    
    return 0;
}
