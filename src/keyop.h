/*
 * Guo Zebin <zebin.guo@live.com>
 *
 * Chengyi, JMU, 2014-6-19
 *
 * Define some keyboard operations
 * for PageUp, PageDown, ArrowUp, ArrowDown
 * You can redifine them yourself
 */
#ifndef KEYOP_H
#define KEYOP_H

#define PAGEUP		'a'
#define PAGEDOWN	'd'
#define ARROWUP		'w'
#define ARROWDOWN	's'

extern void
pageup(const char *buffer, int newline[], int *cursor);

extern void
pagedown(const char *buffer, int newline[], int *cursor);

extern void
arrowup(const char *buffer, int newline[], int *cursor);

extern void
arrowdown(const char *buffer, int newline[], int *cursor);

#endif
