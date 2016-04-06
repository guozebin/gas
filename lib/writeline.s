# Guo Zebin <zebin.guo@live.com>
#
# Chengyi, JMU, 2014-6-18
#
# Write buffer to stand out(console), then go to new line
# Reference .NET Framework System.Console.WriteLine(...)
#
.section .data
newline:
	.asciz	"\n"
.section .text
.globl writeline
.type writeline, @function
writeline:
	pushl %ebp
	movl %esp, %ebp
	subl $12, %esp

	movl 12(%ebp), %eax
	movl 8(%ebp), %ebx

	movl %eax, 8(%esp)	# count
	movl %ebx, 4(%esp)	# buf
	movl $1, (%esp)		# STDOUT_FILENO
	call write
	
	# New line
	movl $1, 8(%esp)	# count: 1
	movl $newline, 4(%esp)	# "\n"
	movl $1, (%esp)		# STDOUT_FILENO
	call write
	
	addl $12, %esp
	movl %ebp, %esp
	popl %ebp
	ret
