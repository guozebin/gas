# Guo Zebin <zebin.guo@live.com>
#
# Chengyi, JMU, 2014-6-2
#
# __NR_read 3

.section .text
.type read, @function
.globl	read
read:
	pushl %ebp
	movl %esp, %ebp
	movl $3, %eax		# __NR_read
	movl 8(%ebp), %ebx
	movl 12(%ebp), %ecx
	movl 16(%ebp), %edx
	int $0x80
	movl %ebp, %esp
	popl %ebp
	ret
