	.file	"1-string_nconcat.c"
	.text
	.section	.rodata
.LC0:
	.string	""
	.text
	.globl	string_nconcat
	.type	string_nconcat, @function
string_nconcat:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -16(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L2
	leaq	.LC0(%rip), %rax
	movq	%rax, -24(%rbp)
.L2:
	cmpq	$0, -32(%rbp)
	jne	.L3
	leaq	.LC0(%rip), %rax
	movq	%rax, -32(%rbp)
.L3:
	movl	$0, -12(%rbp)
	jmp	.L4
.L5:
	addl	$1, -16(%rbp)
	addl	$1, -12(%rbp)
.L4:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L5
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %eax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L6
	movl	$0, %eax
	jmp	.L7
.L6:
	movl	$0, -16(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L8
.L9:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-16(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -16(%rbp)
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movzbl	(%rcx), %eax
	movb	%al, (%rdx)
	addl	$1, -12(%rbp)
.L8:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L9
	movl	$0, -12(%rbp)
	jmp	.L10
.L12:
	movl	-12(%rbp), %edx
	movq	-32(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-16(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -16(%rbp)
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movzbl	(%rcx), %eax
	movb	%al, (%rdx)
	addl	$1, -12(%rbp)
.L10:
	movl	-12(%rbp), %edx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L11
	movl	-12(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jb	.L12
.L11:
	movl	-16(%rbp), %edx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	-8(%rbp), %rax
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	string_nconcat, .-string_nconcat
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
