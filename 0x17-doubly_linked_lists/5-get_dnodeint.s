	.file	"5-get_dnodeint.c"
	.text
	.globl	get_dnodeint_at_index
	.type	get_dnodeint_at_index, @function
get_dnodeint_at_index:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L4
	movl	$0, %eax
	jmp	.L3
.L5:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -24(%rbp)
.L4:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L5
	movl	$0, -4(%rbp)
	jmp	.L6
.L9:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	je	.L10
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -24(%rbp)
	addl	$1, -4(%rbp)
.L6:
	cmpq	$0, -24(%rbp)
	jne	.L9
	jmp	.L8
.L10:
	nop
.L8:
	movq	-24(%rbp), %rax
.L3:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	get_dnodeint_at_index, .-get_dnodeint_at_index
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
