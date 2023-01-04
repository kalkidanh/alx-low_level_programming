	.file	"1-create_file.c"
	.text
	.globl	create_file
	.type	create_file, @function
create_file:
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
	movq	%rsi, -32(%rbp)
	movl	$0, -12(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L2
	movl	$-1, %eax
	jmp	.L3
.L2:
	cmpq	$0, -32(%rbp)
	je	.L4
	movl	$0, -12(%rbp)
	jmp	.L5
.L6:
	addl	$1, -12(%rbp)
.L5:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L6
.L4:
	movq	-24(%rbp), %rax
	movl	$384, %edx
	movl	$578, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -8(%rbp)
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rcx
	movl	-8(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	write@PLT
	movl	%eax, -4(%rbp)
	cmpl	$-1, -8(%rbp)
	je	.L7
	cmpl	$-1, -4(%rbp)
	jne	.L8
.L7:
	movl	$-1, %eax
	jmp	.L3
.L8:
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	close@PLT
	movl	$1, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	create_file, .-create_file
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
