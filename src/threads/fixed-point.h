/** Define Fixed-point Real Arithmatic. */

/** The real is with a defult size 32, 
   17(p) is for integer and 14(q) is for decimal. */
#define p 17
#define q 14
#define f (1<<q)

/** Convert between integer and fixed-point.  
   Rounding toward zero or nearest is optional. */
#define Convert_i2f(n) ((n)*f)
#define Convert_f2i_zero(x) ((x)/f)
#define Convert_f2i_near(x) (((x)>=0)?(((x)+(f>>1))/f):(((x)-(f>>1))/f))

/* Fixed-point real's sum and difference. */
#define Add_ff_f(x,y) ((x)+(y))
#define Sub_ff_f(x,y) ((x)-(y))
#define Add_fi_f(x,n) ((x)+((n)*f))
#define Sub_fi_f(x,n) ((x)-((n)*f))

/* Fixed-point real's product and quotient.*/
#define Mul_ff_f(x,y) (((int64_t)(x)*(y))/f)
#define Mul_fi_f(x,n) ((x)*(n))
#define Div_ff_f(x,y) (((int64_t)(x)*f)/(y))
#define Div_fi_f(x,n) ((x)/(n))