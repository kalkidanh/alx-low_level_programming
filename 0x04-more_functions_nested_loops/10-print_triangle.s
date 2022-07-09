	.file	"10-print_triangle.c"
	.text
	.globl	print_triangle
	.type	print_triangle, @function
print_triangle:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	cmpl	$0, -20(%rbp)
	jle	.L2
	movl	$0, -12(%rbp)
	jmp	.L3
.L8:
	movl	$1, -8(%rbp)
	jmp	.L4
.L5:
	movl	$32, %edi
	call	_putchar@PLT
	addl	$1, -8(%rbp)
.L4:
	movl	-20(%rbp), %eax
	subl	-12(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L5
	movl	$0, -4(%rbp)
	jmp	.L6
.L7:
	movl	$35, %edi
	call	_putchar@PLT
	addl	$1, -4(%rbp)
.L6:
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L7
	movl	$10, %edi
	call	_putchar@PLT
	addl	$1, -12(%rbp)
.L3:
	movl	-12(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L8
	jmp	.L10
.L2:
	movl	$10, %edi
	call	_putchar@PLT
.L10:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_triangle, .-print_triangle
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
