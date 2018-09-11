	.text
	.file	"greedy.c"
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp0:
	.cfi_def_cfa_offset 16
.Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movabsq	$.L.str, %rdi
	movl	$0, -4(%rbp)
	movl	$0, -12(%rbp)
	movb	$0, %al
	callq	printf
	movl	%eax, -32(%rbp)         # 4-byte Spill
	callq	get_float
	cvttss2si	%xmm0, %eax
	movl	%eax, -8(%rbp)
	movl	$0, -28(%rbp)
.LBB0_1:                                # =>This Inner Loop Header: Depth=1
	cmpl	$0, -8(%rbp)
	jle	.LBB0_3
# BB#2:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	$1, %eax
	movl	$5, %ecx
	movl	$10, %edx
	movl	$25, %esi
	movl	-8(%rbp), %edi
	movl	%eax, -36(%rbp)         # 4-byte Spill
	movl	%edi, %eax
	movl	%edx, -40(%rbp)         # 4-byte Spill
	cltd
	idivl	%esi
	movl	%eax, -12(%rbp)
	movl	-28(%rbp), %eax
	addl	-12(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-8(%rbp), %eax
	imull	$25, -12(%rbp), %esi
	subl	%esi, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cltd
	movl	-40(%rbp), %esi         # 4-byte Reload
	idivl	%esi
	movl	%eax, -20(%rbp)
	movl	-28(%rbp), %eax
	addl	-20(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-12(%rbp), %eax
	imull	$10, -20(%rbp), %edi
	subl	%edi, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cltd
	idivl	%ecx
	movl	%eax, -16(%rbp)
	movl	-28(%rbp), %eax
	addl	-16(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-12(%rbp), %eax
	imull	$5, -16(%rbp), %ecx
	subl	%ecx, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cltd
	movl	-36(%rbp), %ecx         # 4-byte Reload
	idivl	%ecx
	movl	%eax, -24(%rbp)
	movl	-28(%rbp), %eax
	addl	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-12(%rbp), %eax
	movl	-24(%rbp), %edi
	shll	$0, %edi
	subl	%edi, %eax
	movl	%eax, -8(%rbp)
	jmp	.LBB0_1
.LBB0_3:
	movabsq	$.L.str1, %rdi
	movl	-28(%rbp), %esi
	movb	$0, %al
	callq	printf
	movl	-4(%rbp), %esi
	movl	%eax, -44(%rbp)         # 4-byte Spill
	movl	%esi, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
.Ltmp3:
	.size	main, .Ltmp3-main
	.cfi_endproc

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"O hai! How much change is owed?\n"
	.size	.L.str, 33

	.type	.L.str1,@object         # @.str1
.L.str1:
	.asciz	"%d\n"
	.size	.L.str1, 4


	.ident	"Ubuntu clang version 3.6.0-2ubuntu1~trusty1 (tags/RELEASE_360/final) (based on LLVM 3.6.0)"
	.section	".note.GNU-stack","",@progbits
