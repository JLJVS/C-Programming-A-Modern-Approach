


/*
a) p == a[0]  
Not allowed left side is an variable pointer and the right side is a variable

b) p == &a[0] 
Allowed, left side is a pointer and the right side is a pointer
true

c) *p == a[0]
Allowed, the left side dereferences the pointer to variable and the right side is a variable
true

d) p[0] == a[0];
Allowed, the left side changes the pointer to an array [0] and the right side also points to array[0]
true


*/