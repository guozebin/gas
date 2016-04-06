# Guo Zebin <zebin.guo@live.com>
#
# Chengyi, JMU, 2014-6-16
#
# __NR_open 5
#
# There is a default mode
# It's buggy that file must be existed

.section .text
.type open, @function
.globl open
open:
	pushl %ebp
	movl %esp, %ebp
	movl $5, %eax
	movl 8(%ebp), %ebx
	movl 12(%ebp), %ecx
	movl $0640, %edx
	int $0x80
	movl %ebp, %esp
	popl %ebp
	ret
