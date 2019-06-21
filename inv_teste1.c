int main()
{
 unsigned int n = __VERIFIER_nondet_uint();
 unsigned int x=n, y=0;
 
 __VERIFIER_assume(y + n <= 10 && y <= 10);  
 while(x>0)
 {
   x--;
   y++;   
   __VERIFIER_assume(y + n <= 10 && y <= 10);  
 } 
 __VERIFIER_assume(y <= 10);
 assert(y==n);
}
