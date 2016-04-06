/*
 * Guo Zebin <zebin.guo@live.com>
 *
 * Chengyi, JMU, 2014-6-19
 *
 * Implements of keyboard operations
*/

#include "keyop.h"

void pageup(const char *buffer, int newline[], int *cursor)
{
	system("clear");
	writeline(buffer + newline[*cursor - 40], newline[*cursor - 20] - newline[*cursor - 40]);
	*cursor -= 20;
}

void pagedown(const char *buffer, int newline[], int *cursor)
{
	system("clear");
	writeline(buffer + newline[*cursor], newline[*cursor + 20] - newline[*cursor]);
	*cursor += 20;
}

void arrowup(const char *buffer, int newline[], int *cursor)
{
	system("clear");
	writeline(buffer + newline[*cursor - 21], newline[*cursor - 1] - newline[*cursor - 21]);		
	--(*cursor);

}

void arrowdown(const char *buffer, int newline[], int *cursor)
{
	system("clear");
	writeline(buffer + newline[*cursor - 19], newline[*cursor + 1] - newline[*cursor - 19]);
	++(*cursor);
}
