	.file	"2-calloc.c"
	.text
	.globl	_calloc
	.type	_calloc, @function
_calloc:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	cmpl	$0, -36(%rbp)
	je	.L2
	cmpl	$0, -40(%rbp)
	jne	.L3
.L2:
	movl	$0, %eax
	jmp	.L4
.L3:
	movl	-40(%rbp), %eax
	imull	-36(%rbp), %eax
	movl	%eax, %eax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	jne	.L5
	movl	$0, %eax
	jmp	.L4
.L5:
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L6
.L7:
	movl	-20(%rbp), %edx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	addl	$1, -20(%rbp)
.L6:
	movl	-40(%rbp), %eax
	imull	-36(%rbp), %eax
	cmpl	%eax, -20(%rbp)
	jb	.L7
	movq	-16(%rbp), %rax
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	_calloc, .-_calloc
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
