/**
 * 给定一个指向以NULL结尾的指针列表的指针，在列表中的字符串中查找一个特定的字符。
 * 这个函数将破坏这些指针，所以它只适用于这组字符串只使用一次的情况。
 */

#include <stdio.h>
#include <assert.h>

#define TRUE	1
#define FALSE	0

int find_char(char **strings, char value){
	assert(strings != NULL);

	while(*strings != NULL){
		while(**strings != '\0'){
			if(*(*strings)++ == value){
				return TRUE;
			}
			strings++;
		}	
	}
	return FALSE;
}
