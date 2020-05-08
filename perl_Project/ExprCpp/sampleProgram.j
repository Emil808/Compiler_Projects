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
	invokestatic perl_Program/increment(I)I
	putstatic	sampleProgram/counter I

; while($bravo>40){if($bravo&2){printf('Has a 2: %d\n',$bravo);}elseif($bravo&4){printf('Has a 4: %d\n',$bravo);}else{printf('No 4 or 2\n');}$bravo=$bravo-1;}

L0:
	getstatic	sampleProgram/bravo I
	ldc	40
	isub
	ifgt L2
	iconst_0
	goto L3
L2:
	iconst_1
L3:
	ifle L1

; if($bravo&2){printf('Has a 2: %d\n',$bravo);}elseif($bravo&4){printf('Has a 4: %d\n',$bravo);}else{printf('No 4 or 2\n');}

	getstatic	sampleProgram/bravo I
	ldc	2
	iand
	ifle L4

; printf('Has a 2: %d\n',$bravo);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Has a 2: %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/bravo I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto L5
L4:
	getstatic	sampleProgram/bravo I
	ldc	4
	iand
	ifle L6

; printf('Has a 4: %d\n',$bravo);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Has a 4: %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sampleProgram/bravo I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto L5
L6:

; printf('No 4 or 2\n');

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"No 4 or 2\n"
	ldc	0
	anewarray	java/lang/Object
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
L5:

; $bravo=$bravo-1;

	getstatic	sampleProgram/bravo I
	ldc	1
	isub
	putstatic	sampleProgram/bravo I
	goto L0
L1:

	getstatic     sampleProgram/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
