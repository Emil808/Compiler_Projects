.class public sampleProgram
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static abc I
.field private static def F
.field private static ghi I
.field private static jkl F
.field private static mno I
.field private static pqr F
.field private static intvar I
.field private static realvar F
.field private static boolvar I
.field private static what I
.field private static bwa F

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic	sampleProgram/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic	sampleProgram/_standardIn LPascalTextIn;

; $abc=$ghi;

	getstatic	sampleProgram/ghi I
	putstatic	sampleProgram/abc I

; $def=40.03;

	ldc	40.03
	putstatic	sampleProgram/def F

; $ghi=4+3;

	ldc	4
	ldc	3
	iadd
	putstatic	sampleProgram/ghi I

; $jkl=12.523-2.40;

	ldc	12.523
	ldc	2.40
	fsub
	putstatic	sampleProgram/jkl F

; $mno=5*8;

	ldc	5
	ldc	8
	imul
	putstatic	sampleProgram/mno I

; $pqr=123.09*0.4;

	ldc	123.09
	ldc	0.4
	fmul
	putstatic	sampleProgram/pqr F

; $intvar=$abc+$ghi;

	getstatic	sampleProgram/abc I
	getstatic	sampleProgram/ghi I
	iadd
	putstatic	sampleProgram/intvar I

; $realvar=$def/$pqr;

	getstatic	sampleProgram/def F
	getstatic	sampleProgram/pqr F
	fdiv
	putstatic	sampleProgram/realvar F

; $boolvar=$abc>$def;

	getstatic	sampleProgram/abc I
	getstatic	sampleProgram/def F
	ifgt L0
	iconst_0
	goto L1
L0:
	iconst_1
L1:
	putstatic	sampleProgram/boolvar I

; while($abc<$def){$abc=1+2;}

L2:
	getstatic	sampleProgram/abc I
	getstatic	sampleProgram/def F
	iflt L4
	iconst_0
	goto L5
L4:
	iconst_1
L5:
	ifle L3

; $abc=1+2;

	ldc	1
	ldc	2
	iadd
	putstatic	sampleProgram/abc I
	goto L2
L3:

; if($intvar){$for=6+8*5/4;}

	getstatic	sampleProgram/intvar I
	ifle L7

; $for=6+8*5/4;

	ldc	6
	ldc	8
	ldc	5
	imul
	ldc	4
	idiv
	iadd
	putstatic	sampleProgram/for I
L7:

; $what=3;

	ldc	3
	putstatic	sampleProgram/what I

; if($what){$bwa=9.3+0.3*6.3;}else{while($abc<$def){$abc=1+2;if($intvar){$for=6+8*5/4;}}}

	getstatic	sampleProgram/what I
	ifle L8

; $bwa=9.3+0.3*6.3;

	ldc	9.3
	ldc	0.3
	ldc	6.3
	fmul
	fadd
	putstatic	sampleProgram/bwa F
	goto L9
L8:

; while($abc<$def){$abc=1+2;if($intvar){$for=6+8*5/4;}}

L10:
	getstatic	sampleProgram/abc I
	getstatic	sampleProgram/def F
	iflt L12
	iconst_0
	goto L13
L12:
	iconst_1
L13:
	ifle L11

; $abc=1+2;

	ldc	1
	ldc	2
	iadd
	putstatic	sampleProgram/abc I

; if($intvar){$for=6+8*5/4;}

	getstatic	sampleProgram/intvar I
	ifle L15

; $for=6+8*5/4;

	ldc	6
	ldc	8
	ldc	5
	imul
	ldc	4
	idiv
	iadd
	putstatic	sampleProgram/for I
L15:
	goto L10
L11:
L9:

	getstatic     sampleProgram/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
