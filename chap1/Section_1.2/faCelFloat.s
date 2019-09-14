	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.intel_syntax noprefix
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4603179219131243634     ## double 0.55555555555555558
LCPI0_1:
	.quad	4629700416936869888     ## double 32
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	sub	rsp, 32
	mov	dword ptr [rbp - 4], 0
	mov	dword ptr [rbp - 16], 0
	mov	dword ptr [rbp - 20], 300
	mov	dword ptr [rbp - 24], 20
	mov	eax, dword ptr [rbp - 16]
	cvtsi2ss	xmm0, eax
	movss	dword ptr [rbp - 8], xmm0
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movss	xmm0, dword ptr [rbp - 8] ## xmm0 = mem[0],zero,zero,zero
	mov	eax, dword ptr [rbp - 20]
	cvtsi2ss	xmm1, eax
	ucomiss	xmm1, xmm0
	jb	LBB0_3
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movsd	xmm0, qword ptr [rip + LCPI0_0] ## xmm0 = mem[0],zero
	movsd	xmm1, qword ptr [rip + LCPI0_1] ## xmm1 = mem[0],zero
	movss	xmm2, dword ptr [rbp - 8] ## xmm2 = mem[0],zero,zero,zero
	cvtss2sd	xmm2, xmm2
	subsd	xmm2, xmm1
	mulsd	xmm0, xmm2
	cvtsd2ss	xmm0, xmm0
	movss	dword ptr [rbp - 12], xmm0
	movss	xmm0, dword ptr [rbp - 8] ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	xmm0, xmm0
	movss	xmm1, dword ptr [rbp - 12] ## xmm1 = mem[0],zero,zero,zero
	cvtss2sd	xmm1, xmm1
	lea	rdi, [rip + L_.str]
	mov	al, 2
	call	_printf
	movss	xmm0, dword ptr [rbp - 8] ## xmm0 = mem[0],zero,zero,zero
	mov	ecx, dword ptr [rbp - 24]
	cvtsi2ss	xmm1, ecx
	addss	xmm0, xmm1
	movss	dword ptr [rbp - 8], xmm0
	mov	dword ptr [rbp - 28], eax ## 4-byte Spill
	jmp	LBB0_1
LBB0_3:
	mov	eax, dword ptr [rbp - 4]
	add	rsp, 32
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%3.0f %6.1f\n"


.subsections_via_symbols
