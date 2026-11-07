#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");//для переключения русской кодировки
	puts("Hello word");//вывод стртроки
	getchar();//задержка экрана
	return 0;
	//какие то изменения
}