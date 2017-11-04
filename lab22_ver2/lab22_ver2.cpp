// lab22_ver1.cpp: определяет точку входа для консольного приложения.
//
/*Из отрицательных элементов целочисленной матрицы В(4,3) сформировать вектор А. В полученном векторе определить количество элементов, делящихся без остатка на 5. Распечатать:
а) исходную матрицу;
б) сформированный вектор;
в) количество элементов, делящихся без остатка на 5, и их адреса.*/

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cstdio>

using namespace std;

void main()
{
	char str[] = "Mama, I killed a man, put a bullet in his head, pulled my trigger and now he's dead.";
	char str2[sizeof(str)];
	strcpy_s(str2, str);                               //copies str to str2                                         
	cout << "Text: " << str2 << endl;
	char s1[] = " p", *ptrs1 = strstr(str2, s1);       //finds first '_p' in str2	                      
	ptrs1 = ptrs1 + 1;                                 //puts ptrs1 on 'p'
	char *ptrs2 = strchr(ptrs1, ' ');                  //finds firts \t after *ptrs1	                         
	char str3[sizeof(str2)];
	strncpy_s(str3, ptrs1, ptrs2 - ptrs1);             //copies the word to str3
	cout << "The word: " << str3 << endl;
	for (int i = strlen(str3) - 1; i >= 0; --i)        //reverses an array  
	{
		cout << str3[i] << ' ';
	}
	cout << endl;
	char *ptrp1;
	for (int i = 0; str2[i] != '\0'; i++)              //finds and prints adresses of 'p'   
	{
		ptrp1 = &str2[i];
		if (*ptrp1 == 'p')
			printf_s("%p %i\n", ptrp1, i);
	}
	system("pause");
}