PROGRAM LoopTest;

VAR
    i : integer;

BEGIN {main}
    i := 1;

    LOOP
        writeln('i = ', i);
        When i = 10 ==>;
        i := i + 1;
    agaIn;

    writeln('Done!');
END.