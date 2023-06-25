//
//  main.c
//  Cex2
// 전역변수
//  Created by 이수연 on 2023/06/25.
//

#include <stdio.h>
int a = 5;
void fn(){
    a = a+3;
}
void main (){
    a = a+5;
    fn();
    printf("%d\n", a);
}
