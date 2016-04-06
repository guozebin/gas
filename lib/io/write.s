# Guo Zebin <zebin.guo@live.com>
#
# Chengyi, JMU, 2014-5-11
#
# __NR_write 4


.section .text
.type write, @function
.globl write
write:
	pushl %ebp
	movl %esp, %ebp
	movl $4, %eax		# __NR_write
	movl 8(%ebp), %ebx	# fd
	movl 12(%ebp), %ecx	# buf
	movl 16(%ebp), %edx	# count
	int $0x80
	movl %ebp, %esp
	popl %ebp
	ret
