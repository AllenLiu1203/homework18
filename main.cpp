//
//  main.cpp
//  homework18
//
//  Created by 劉世翔 on 2019/5/31.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    char num3[20];
    int num4,num[256]={0};
    printf("       計算每個數字出現的次數               \n");
    printf("輸入一個連串整數：");
    scanf("%s",num3);
    for(num4=0;num4<strlen(num3);num4++)
        num[(int)num3[num4]]++;
    for(num4=0;num4<256;num4++)
        if(num[num4]!=0)
            printf("數字 %c 出現 %d 次\n",(char)num4,num[num4]);
    return 0;
}
