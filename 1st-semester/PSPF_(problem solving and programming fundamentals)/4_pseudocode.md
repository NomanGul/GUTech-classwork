# Pseudocode

Pseudocode is a way to represent the logic of a program in a human-readable format.

It is not a programming language, but it is a way to represent the logic of a program in a human-readable format.

Examples:

Is number even?

START
    INPUT NUMBER
    IF NUMBER % 2 == 0 THEN
        OUTPUT "Even"
    ELSE
        OUTPUT "Odd"
    ENDIF
END

Average of 3 numbers, if average is greater than 9, print "2 digit number", otherwise print "not 2 digit number".

START
    INPUT NUM1, NUM2, NUM3
    AVERAGE = (NUM1 + NUM2 + NUM3) / 3
    IF AVERAGE > 9 THEN
        OUTPUT "2 digit number"
    ELSE
        OUTPUT "not 2 digit number"
    ENDIF
END

Write pseudocode to input the radius of a circle, calculate the area using the formula PI * radius^2 and print the result.

START
    INPUT radius
    AREA = PI * radius^2
    OUTPUT AREA
END


# Loops

Count from 1 to 10

START
    FOR number FROM 1 TO 10
        OUTPUT number
    ENDFOR
END

Take age of 30 people and plus 5 to each age and print the new age.

START
    FOR i FROM 1 TO 30
        INPUT age
        NEW_AGE = age + 5
        OUTPUT NEW_AGE
    ENDFOR
END
