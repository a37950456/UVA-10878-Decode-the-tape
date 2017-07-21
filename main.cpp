//
//  main.cpp
//  Decode the tape
//
//  Created by Tina Tsai on 2017/7/21.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//
/*每一行代表一個 ASCII code 打洞的地方代表1
 ASCII code 的範圍是0~127  八個位數
 ex. A = 1000.001  = | o   .  o|  = 65 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){

char tape[15];
char i,word;
int table[10]={0,128,64,32,16,8,0,4,2,1};  //二進制表 0 = . or |
    
 while( gets(tape) != NULL)
 {
     if (tape[0]== '_')
     continue;
      word = 0; //ASCII 從0開始 利用二進制的方式加
     for(i=1;i<=9;i++){     //0= |
         if (tape[i]== '.')
         continue;
         if(tape[i]== 'o')
             word +=table[i]; //打洞的地方為1

     }
     printf("%c",word);
}
    return 0 ;
}
