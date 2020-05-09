.class public sampleProgram
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static counter I
.field private static alpha I
.field private static bravo I
.field private static charlie F
.field private static delta F

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method


.method private static increment(I)I

; return$a+1;

	iload 0
	ldc	1
	iadd

	istore 1
	iload 1
	ireturn
.limit locals 2
.limit stack 4
.end method


.method private static decrement(I)I

; return$a-1;

	iload 0
	ldc	1
	isub

	istore 1
	iload 1
	ireturn
.limit locals 2
.limit stack 4
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

; $alpha=13;

	ldc	13
	putstatic	sampleProgram/alpha I

; $bravo=54;

	ldc	54
	putstatic	sampleProgram/bravo I

; $counter=increment($alpha);

	getstatic	sampleProgram/alpha I
	invokestatic sampleProgram/increment(I)I
	putstatic	sampleProgram/counter I

; printf('$alpha = %d\n',$alpha);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"$alpha = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/alpha I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; printf('$counter = %d\n',$counter);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"$counter = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/counter I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; $counter=decrement($bravo);

	getstatic	sampleProgram/bravo I
	invokestatic sampleProgram/decrement(I)I
	putstatic	sampleProgram/counter I

; printf('$bravo = %d\n',$bravo);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"$bravo = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/bravo I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; printf('$counter = %d\n',$counter);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"$counter = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/counter I
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
