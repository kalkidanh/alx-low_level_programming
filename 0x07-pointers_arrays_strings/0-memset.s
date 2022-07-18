	.file	"0-memset.c"
	.text
	.globl	_memset
	.type	_memset, @function
_memset:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, %eax
	movl	%edx, -16(%rbp)
	movb	%al, -12(%rbp)
	jmp	.L2
.L3:
	movl	-16(%rbp), %eax
	subl	$1, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-12(%rbp), %eax
	movb	%al, (%rdx)
	subl	$1, -16(%rbp)
.L2:
	cmpl	$0, -16(%rbp)
	jne	.L3
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_memset, .-_memset
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
