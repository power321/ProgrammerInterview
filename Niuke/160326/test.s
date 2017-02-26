	.file	"test.cc"
	.section	.rodata
.LC0:
	.string	"%2d%3f%4f"
.LC1:
	.string	"\na=%d,b=%d,c=%f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	leal	36(%esp), %eax
	movl	%eax, 12(%esp)
	leal	40(%esp), %eax
	movl	%eax, 8(%esp)
	leal	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
.LEHB0:
	call	scanf
	flds	36(%esp)
	flds	40(%esp)
	fxch	%st(1)
	movl	44(%esp), %eax
	fstpl	16(%esp)
	fstpl	8(%esp)
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	printf
.LEHE0:
	movl	$0, %eax
	jmp	.L5
.L4:
	movl	%eax, (%esp)
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L5:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA0:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE0-.LLSDACSB0
.LLSDACSB0:
	.uleb128 .LEHB0-.LFB0
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L4-.LFB0
	.uleb128 0
	.uleb128 .LEHB1-.LFB0
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE0:
	.text
	.size	main, .-main
	.ident	"GCC: (Debian 4.7.2-5) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
