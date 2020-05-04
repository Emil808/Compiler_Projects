.class public sampleProgram
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static number I
.field private static number2 I
.field private static number3 I
.field private static number4 I

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

; $number=2<<1;

	ldc	2
	ldc	1
	ishl
	putstatic	sampleProgram/number I

; $number2=2<<2;

	ldc	2
	ldc	2
	ishl
	putstatic	sampleProgram/number2 I

; $number3=4>>1;

	ldc	4
	ldc	1
	ishr
	putstatic	sampleProgram/number3 I

; $number4=8>>2;

	ldc	8
	ldc	2
	ishr
	putstatic	sampleProgram/number4 I

; printf('%d\n%d\n%d\n%d\n',$number,$number2,$number3,$number4);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d\n%d\n%d\n%d\n"
	ldc	4
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/number I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	1
	getstatic	sampleProgram/number2 I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	2
	getstatic	sampleProgram/number3 I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	3
	getstatic	sampleProgram/number4 I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	getstatic     sampleProgram/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
