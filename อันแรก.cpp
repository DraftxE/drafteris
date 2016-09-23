#include<stdio.h> //เรียกใช้ library stido เมื่อใช้ฟังชั่น printf
#include<conio.h> //เรียกใช้ library conio เมื่อใข้ฟังชั่น clrscr และ getch
void main(void) { //เรียกใช้ฟังชั่น main เป็นฟังชั่นหลังของโปรแกรม
  int a,b,c //ประกาศตัวแปร a,b และ c เป็นข้อมูลชนิด integ
  clrscr(); //ลบจอภาพ
  a = 5; //กำหนดค่า a = 5
  b = 3; //กำหนดค่า a = 3
  c = a+b; //ให้ a + b แล้วนำค่าเก็บเอาไว้ที่ตัว C
  printf("5 + 3 = %d,c") //แสดงค่าที่เก็บเอาไว้ในตัวแปร c
  getch(); //รอรับการแป้นพิมพ์ 1 ครั้ง
  }
