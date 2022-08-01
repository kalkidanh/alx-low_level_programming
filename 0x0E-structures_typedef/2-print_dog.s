	.file	"2-print_dog.c"
	.text
	.section	.rodata
.LC0:
	.string	"Name: (nil)"
.LC1:
	.string	"name: %s\n"
.LC3:
	.string	"age: (nil)"
.LC4:
	.string	"Age: %f\n"
.LC5:
	.string	"Owner: (nil)"
.LC6:
	.string	"Owner: %s\n"
	.text
	.globl	print_dog
	.type	print_dog, @function
print_dog:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L12
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L4
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	jmp	.L5
.L4:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L5:
	movq	-8(%rbp), %rax
	movss	8(%rax), %xmm1
	pxor	%xmm0, %xmm0
	comiss	%xmm1, %xmm0
	jbe	.L11
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	jmp	.L8
.L11:
	movq	-8(%rbp), %rax
	movss	8(%rax), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
.L8:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	jne	.L9
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	jmp	.L1
.L9:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L1
.L12:
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	print_dog, .-print_dog
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
