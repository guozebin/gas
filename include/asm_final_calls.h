/* 
 * Guo Zebin <zebin.guo@live.com>
 * 
 * Chengyi, JMU, 2014-6-19
 * 
 */

#ifndef ASM_FINAL_CALLS_H
#define ASM_FINAL_CALLS_H

/* File option flags */
#define O_RDONLY 0	/* Open the file for reading only */
#define O_WRONLY 1	/* Open the file for writing only */
#define O_RDWR 2	/* Open the file for both reading and writing */
#define O_NDELAY 04	/* Non-blocking I/O */
#define O_APPEND 010	/* Append(writes) guaranteed at the end */
#define O_CREAT 00400	/* Open with file create (uses third open arg) */
#define O_TRUNC 01000	/* Open with truncation */
#define O_EXCL 02000	/* Exclusive open */


/* Standard file descriptors */
#define	STDIN_FILENO	0	/* Standard input */
#define	STDOUT_FILENO	1	/* Standard output */
#define	STDERR_FILENO	2	/* Standard error output */

typedef unsigned  size_t;

/* file_descriptor(fd) */
extern int
read(int fd, const char *buf, size_t count);

/* Write to a fd specified */
extern int
write(int fd, const char *buf, size_t count);

/*
 * Write to console
 * A simulation to C# System.Console.WriteLine(String str)
 */
extern int
writeline(const char *buf, size_t count);

/* Open a file, return the fd */
extern int
open(const char *pathname, int option_flags);

/* Close a file */
extern int
close(int file_descriptor);

/* Convert binary(character exactly) to hexacimal */
extern void
bin2hex(char bin, char *hexbuf);

/* Maybe used one day */
extern void
delay(int sometime);

/* This is a copy from linux kernel string_32.c */
extern size_t
strlen(const char *str);

extern void
setbuf(void *buf, int val, unsigned len);

/* A simulation to getch() in <conio.h> on Windows */
extern int getch(void);


#endif
