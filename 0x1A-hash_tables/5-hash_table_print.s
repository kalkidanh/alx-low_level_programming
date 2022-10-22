	.file	"5-hash_table_print.c"
	.text
	.section	.rodata
.LC0:
	.string	", "
.LC1:
	.string	"'%s': '%s'"
.LC2:
	.string	"}"
	.text
	.globl	hash_table_print
	.type	hash_table_print, @function
hash_table_print:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movb	$0, -17(%rbp)
	cmpq	$0, -40(%rbp)
	je	.L10
	movl	$123, %edi
	call	putchar@PLT
	movq	$0, -8(%rbp)
	jmp	.L4
.L9:
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	-8(%rbp), %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L5
	cmpb	$1, -17(%rbp)
	jne	.L6
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L6:
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	-8(%rbp), %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L7
.L8:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L7
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L7:
	cmpq	$0, -16(%rbp)
	jne	.L8
	movb	$1, -17(%rbp)
.L5:
	addq	$1, -8(%rbp)
.L4:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, -8(%rbp)
	jb	.L9
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	jmp	.L1
.L10:
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	hash_table_print, .-hash_table_print
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
