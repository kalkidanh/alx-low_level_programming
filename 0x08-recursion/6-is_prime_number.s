	.file	"6-is_prime_number.c"
	.text
	.globl	is_divisible
	.type	is_divisible, @function
is_divisible:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	%eax, -8(%rbp)
	jne	.L4
	movl	$1, %eax
	jmp	.L3
.L4:
	movl	-8(%rbp), %eax
	leal	1(%rax), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	is_divisible
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	is_divisible, .-is_divisible
	.globl	is_prime_number
	.type	is_prime_number, @function
is_prime_number:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$2, -4(%rbp)
	cmpl	$1, -20(%rbp)
	jg	.L6
	movl	$0, %eax
	jmp	.L7
.L6:
	cmpl	$1, -20(%rbp)
	jle	.L8
	cmpl	$3, -20(%rbp)
	jg	.L8
	movl	$1, %eax
	jmp	.L7
.L8:
	movl	-4(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	is_divisible
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	is_prime_number, .-is_prime_number
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
