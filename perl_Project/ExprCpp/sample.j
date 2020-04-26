
.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
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
	putstatic	sample/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic	sample/_standardIn LPascalTextIn;

; $abc=500;

	ldc	500
	putstatic	/abc I

; $def=40.03;

	ldc	40.03
	putstatic	/def F

; $ghi=4+3;

	ldc	4
	ldc	3
	iadd
	putstatic	/ghi I

; $jkl=12.523-2.40;

	ldc	12.523
	ldc	2.40
	fsub
	putstatic	/jkl F

; $mno=5*8;

	ldc	5
	ldc	8
	imul
	putstatic	/mno I

; $pqr=123.09*0.4;

	ldc	123.09
	ldc	0.4
	fmul
	putstatic	/pqr F

; $intvar=$abc+$ghi;

	getstatic	/abc I
	getstatic	/ghi I
	iadd
	putstatic	/intvar I

; $realvar=$def/$pqr;

	getstatic	/def F
	getstatic	/pqr F
	fdiv
	putstatic	/realvar F

; $boolvar=$abc>$def;

	getstatic	/abc I
	getstatic	/def F
	ifgt L0
	iconst_0
	goto L1
L0:
	iconst_1
L1:
	putstatic	/boolvar I

; while($abc<$def){$abc=1+2;}

L2:
	getstatic	/abc I
	getstatic	/def F
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
	putstatic	/abc I
	goto L2
L3:

	getstatic     sample/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
