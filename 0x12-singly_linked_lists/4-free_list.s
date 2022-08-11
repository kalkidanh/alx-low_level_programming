	.file	"4-free_list.c"
	.text
	.globl	free_list
	.type	free_list, @function
free_list:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	jmp	.L2
.L3:
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
.L2:
	cmpq	$0, -24(%rbp)
	jne	.L3
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	free_list, .-free_list
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
