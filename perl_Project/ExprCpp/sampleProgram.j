.class public sampleProgram
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static counter I
.field private static number F
.field private static negative I

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

; $number=0.3;

	ldc	0.3
	putstatic	sampleProgram/number F

; $counter=1;

	ldc	1
	putstatic	sampleProgram/counter I

; while($counter<10){printf('Count: %d\t',$counter);if($counter<5){$number=$number*2.4;}elseif($counter==5){$number=30.0;}else{$number=0.4;}$counter=$counter+1;printf('%f\n',$number);}

L0:
	getstatic	sampleProgram/counter I
	ldc	10
	isub
	iflt L2
	iconst_0
	goto L3
L2:
	iconst_1
L3:
	ifle L1

; printf('Count: %d\t',$counter);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Count: %d\t"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/counter I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; if($counter<5){$number=$number*2.4;}elseif($counter==5){$number=30.0;}else{$number=0.4;}

	getstatic	sampleProgram/counter I
	ldc	5
	isub
	iflt L6
	iconst_0
	goto L7
L6:
	iconst_1
L7:
	ifle L4

; $number=$number*2.4;

	getstatic	sampleProgram/number F
	ldc	2.4
	fmul
	putstatic	sampleProgram/number F
	goto L5
L4:
	getstatic	sampleProgram/counter I
	ldc	5
	isub
	ifeq L9
	iconst_0
	goto L10
L9:
	iconst_1
L10:
	ifle L8

; $number=30.0;

	ldc	30.0
	putstatic	sampleProgram/number F
	goto L5
L8:

; $number=0.4;

	ldc	0.4
	putstatic	sampleProgram/number F
L5:

; $counter=$counter+1;

	getstatic	sampleProgram/counter I
	ldc	1
	iadd
	putstatic	sampleProgram/counter I

; printf('%f\n',$number);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%f\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/number F
	invokestatic	java/lang/Float.valueOf(F)Ljava/lang/Float;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto L0
L1:

; $negative=-1;

	ldc	1
	ineg
	putstatic	sampleProgram/negative I

; printf('%d\n',$negative);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/negative I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; $negative=$negative-4;

	getstatic	sampleProgram/negative I
	ldc	4
	isub
	putstatic	sampleProgram/negative I

; printf('%d\n',$negative);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/negative I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; $negative=$negative*8;

	getstatic	sampleProgram/negative I
	ldc	8
	imul
	putstatic	sampleProgram/negative I

; printf('%d\n',$negative);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/negative I
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
