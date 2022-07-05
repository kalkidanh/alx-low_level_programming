	.file	"2-print_alphabet_x10.c"
	.text
	.globl	print_alphabet_x10
	.type	print_alphabet_x10, @function
print_alphabet_x10:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L2
.L5:
	movl	$97, -8(%rbp)
	jmp	.L3
.L4:
	movl	-8(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	addl	$1, -8(%rbp)
.L3:
	cmpl	$122, -8(%rbp)
	jle	.L4
	movl	$10, %edi
	call	_putchar@PLT
	addl	$1, -4(%rbp)
.L2:
	cmpl	$9, -4(%rbp)
	jle	.L5
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_alphabet_x10, .-print_alphabet_x10
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
