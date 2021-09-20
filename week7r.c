//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
#include<stdio.h>
#include<string.h>
main() {
    char text[100];
    int word ;
    scanf("%s",&text);
    word = strlen(text);
    for(int i = 0 ; word>=i; word--){
        printf("%c",text[word]);
    }
    return 0;
}