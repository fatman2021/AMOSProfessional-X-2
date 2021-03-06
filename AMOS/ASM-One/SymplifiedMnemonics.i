���� 
� 
�� U4 F! �� R � �� �� [;-------------------T----------T--------T----------T----------T-------------T

; AltiVec Symplified Mnemonics

dssall:	MACRO
	dss	0,1
	ENDM

dstt:	MACRO
	dst	\1,\2,\3,1
	ENDM

dststt:	MACRO
	dstst	\1,\2,\3,1
	ENDM

; Other Symplified Mnemonics

; addi rD,rA,SIMM

li:	MACRO
	addi	\1,0,\2
	ENDM

subi:	MACRO
	addi	\1,\2,-(\3)
	ENDM

; addic rD,rA,SIMM

subic:	MACRO
	addic	\1,\2,-(\3)
	ENDM


; addic. rD,rA,SIMM

subic.:	MACRO
	addic	\1,\2,-(\3)
	ENDM

; addis rD,rA,SIMM

lis:	MACRO
	addis	\1,0,\2
	ENDM

subis:	MACRO
	addis	\1,\2,-(\3)
	ENDM

; bc BO,BI,Target_addr

blt:	MACRO
	bc	12,0,\1
	ENDM

bne:	MACRO
	bc	4,10,\2
	ENDM

bndz:	MACRO
	bc	16,0,\1
	ENDM

; bcctr BO,BI

bltctr:	MACRO
	bcctr	12,0
	ENDM

bnectr:	MARCO
	bcctr	4,10
	ENDM

bndzctr:	MACRO
	bcctr	16,0
	ENDM

; bclr BO,BI

bltlr:	MACRO
	bclr	12,0
	ENDM

bnelr:	MACRO
	bclr	4,10
	ENDM

bdnzlr:	MACRO
	bclr	16,0
	ENDM

; cmp crfD,L,rA,rB

cmpd:	MACRO
	IF	NARG=2
	cmp	0,1,\1,\2
	ELSE
	cmp	\1,1,\2,\3
	ENDIF
	ENDM

cmpw:	MACRO
	IF	NARG=2
	cmp	0,0,\1,\2
	ELSE
	cmp	\1,0,\2,\3
	ENDIF
	ENDM

; cmpi crfD,L,rA,SIMM

cmpdi:	MACRO
	IF	NARG=2
	cmpi	0,1,\1,\2
	ELSE
	cmpi	\1,1,\2,\3
	ENDIF
	ENDM

cmpwi:	MACRO
	IF	NARG=2
	cmpi	0,0,\1,\2
	ELSE
	cmpi	\1,0,\2,\3
	ENDIF
	ENDM

; cmpl crfD,L,rA,rB

cmpld:	MACRO
	IF	NARG=2
	cmpl	0,1,\1,\2
	ELSE
	cmpl	\1,1,\2,\3
	ENDIF
	ENDM

cmplw:	MACRO
	IF	NARG=2
	cmpl	0,0,\1,\2
	ELSE
	cmpl	\1,0,\2,\3
	ENDIF
	ENDM

; cmpli crfD,L,rA,UIMM

cmpldi:	MACRO
	IF	NARG=2
	cmpli	0,1,\1,\2
	ELSE
	cmpli	\1,1,\2,\3
	ELSE
	ENDM

cmplwi:	MACRO
	IF	NARG=2
	cmpli	0,0,\1,\2
	ELSE
	cmpli	\1,0,\2,\3
	ENDIF
	ENDM

; creqv crbD,crbA,crbB

crset:	MACRO
	creqv	\1,\1,\1
	ENDM

; crnor crbD,crbA,crbB

crnot:	MACRO
	crnor	\1,\2,\2
	ENDM

; cror crbD,crbA,crbB

crmove:	MACRO
	cror	\1,\2,\2
	ENDM

; crxor crbD,crbA,crbB

crclr:	MACRO
	crxor	\1,\1,\1
	ENDM
; mfspr rD,SPR

mfxer:	MACRO
	mfspr	\1,1
	ENDM

mflr:	MACRO
	mfspr	\1,8
	ENDM

mfctr:	MACRO
	mfspr	\1,9
	ENDM

; mtfb rD,TBR

mtfbl:	MACRO
	mftb	\1,268
	ENDM

mtfbu:	MACRO
	mtfb	\1,269
	ENDM

; mtcrf CRM,rS

mtcr:	MACRO
	mtcrf	#$FF,\1
	ENDM

; mtspr SPR,rS

mtxer:	MACRO
	mtspr	1,\1
	ENDM

mtlr:	MACRO
	mtspr	8,\1
	ENDM

mtctr:	MACRO
	mtspr	9,\1
	ENDM

; nor rA,rS,rB

not:	MACRO
	nor	\1,\2,\2
	ENDM

; or rA,rS,rB

mr:	MACRO
	or	\1,\2,\2
	ENDM

; ori rA,rS,UIMM

nop:	MACRO
	ori	r0,r0,0
	ENDM

; rlwinm rA,rS,SH,MB,ME

extlwi:	MACRO
	rlwinm	\1,\2,\4,0,((\3-1))
	ENDM

extrwi:	MACRO
	rlwinm	\1,\2,((\4)+(\3)),(32-(\3)),31
	ENDM

rotlwi:	MACRO
	rlwinm	\1,\2,\3,0,31
	ENDM

rotrwi:	MACRO
	rlwinm	\1,\2,(32-(\3)),0,31
	ENDM

slwi:	MACRO
	rlwinm	\1.\2,\3,0,(31-(\3))
	ENDM

srwi:	MACRO
	rlwinm	\1,\2,(32-(\3)),\3,31
	ENDM

clrlwi:	MACRO
	rlwinm	\1,\2,0,\3,31
	ENDM

clrrwi:	MACRO
	rlwinm	\1,\2,0,0,(31-(\3))
	ENDM

clrslwi:	MACRO
	rlwinm	\1,\2,\4,((\3)-(\4)),(31-(\4))
	ENDM

; rlwnm rA,rS,rB,MB,ME

rotlw:	MACRO
	rlwnm	\1,\2,\3,0,31
	ENDM

; subf rD,rA,rB

sub:	MACRO
	subf	\1,\3,\2
	ENDM

; subfc rD,rA,rB

subc:	MACRO
	subfc	\1,\3,\2
	ENDM

; tw TO,rA,rB

tweq:	MACRO
	tw	4,\1,\2
	ENDM

twlge:	MACRO
	tw	5,\1,\2
	ENDM

trap:	MACRO
	tw	31,r0,r0
	ENDM

; twi TO,rA,SIMM

twgti:	MACRO
	twi	8,\1,\2
	ENDM

twllei:	MACRO
	twi	6,\1,\2
	ENDM


