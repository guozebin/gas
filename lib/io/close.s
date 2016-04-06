# Guo Zebin <zebin.guo@live.com>
#
# Chengyi, JMU, 2014-6-16
#
# int close(int fd);
# __NR_close 6

.section .text
.type close, @function
.globl close
close:
	pushl %ebp
	movl %esp, %ebp
	movl $6, %eax		# __NR_close
	movl 8(%ebp), %ebx	# file_descriptor
	int $0x80
	movl %ebp, %esp
	popl %ebp
	ret
