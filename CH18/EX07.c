/*
Suppose that we declare x to be a const object. Which one of the following statements about x is false?

a) If x is of type int, it can be used as the value of a case label in a switch statement.
we can use an int for a switch statement i.e.

switch (x):
    case 1:
    case 2:
    etc

b) The compiler will check that no assignment is made to x.
If we try to assign a new value to x it will fail.

c) x is subject to the same scope rules as variables.
True

d) x can be of any type.
wrong x has to be an int or it will get converted (and if not possible to convert it will fail)


*/