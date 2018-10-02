PART 1:
Proove each of the following. Indicate which proof method you are using and show your work.

Show that the square root of 2 is irrational.
  Suppose the square root of 2 is rational 
  -> the square root of 2 can be presented in a form of rational, which is a/b
  -> assume a and b no common factor, which means they are both odd
  ->      the square root of 2 = a/b
  ->                   2 = a^2/b^2
  ->                  a^2 = 2 x b^2
  -> a^2 is even 
  -> a must be even
  -> a^2 can divide by 2
  -> b^2 is even 
  -> b must be even
  -> both a and b are even, which is a contradiction with the assumption that we made at the beginning
  -> Square root of 2 is not rational
  => Square root of 2 is irrational.
  (Use contradiction proof)
  
  If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
  
    n = 25, a perfect square
    Also, n = 25 = 9 + 16, where 9, ans 16 are perfect squares
    -> the statement is true
    
    n = 100 , a perfect square
    Also, n = 100 = 36 + 64, 
    64, 36 are perfect squares
    -> the statement is true
    
    n = 169, a perfect square
    Also, n = 169 = 100 + 69 
    100, 69 are perfect squares
    -> the statement is true
    
    (Use Exhausted proof)
   
   
The sum of two odd integers is even. Hint: By definition, even integers can be expressed as 2n, thus odd integers can be expressed as 2n + 1
    odd integers = 2n +- 1
    even integers = 2n
    
    Sum of two odd integers = (2n + 1) + (2n + 1)
                            =  4n + 2
                            =  2(2n + 1)
    Let k = 2n + 1
      -> sum of two odd integers = 2k 
      -> by definition, 2k is even integer
    (Direct Proof)
      
 The sum of an even integer and it's square is even
    even integer = 2n
    even integer's square = (2n)^2 = 4n^2
    sum of an even integer and it's square is :
          2n + (2n)(2n)
        = 2n(2n+1)
    let k = 2n+1
    ->  sum = 2nk
    let m = nk
    ->  sum = 2m
    ->  sum is even
    (Direct Proof)
    
  If n squared is odd, then n is odd
     If n is even, then n square is even
     (Contraposition Proof)
     n is even -> n = 2k
     n square = (2k)^2 = 4k^2 = 2(2k^2)
     let p = 2n^2
     -> n^2 = 2p
     -> n^2 is even
     (Direct proof)
     If n is even, then n square is even <=> if n squared is odd, then n is odd
     (Contrapositive Law)
     
 PART 2: 
 
 Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
    Base case, n = 1:
     1 = n(2n-1)
     1 = 1(2(1)-1)
     1 = 1  Base case 
     
     Assume the statement is true for k
     
     Show that k + 1 is true:
       1 + 5 + 9 + ... + (4k-3) + (4(k+1)-3) = (k+1)(2(k+1)-1)
       1 + 5 + 9 + ... + (4k-3) + (4k+1)     = (k+1)(2k+1)
       we assume that it's true for (1+5+9+...+(4k-3)), we will plug it in
       k(2k-1) + (4k+1)  =  2k^2 + 3k + 1
       2k^2 - k + 4k +1  =  2k^2 + 3k + 1
       2k^2 + 3k + 1     =  2k^2 + 3k + 1
       => if k is true, then k+1 is true
       Also, we have proven k=1 is true
       => We have proven 1,2,...n
       
   Prove that for any positive integer number n, n^3 + 2n is divisible by 3
   
       Assume n^3 + 2n is divisible by 3 for any positive integer number
       Base case: n=1, 1^3 + 2(1) = 3 which is disible by 3
                  n=k, k^3 + 2k = 3m, where m is some integer
                  Assume k true
       Proving k+1 true: 
            (k+1)^3 + 2(k+1) = k^3 + 3k^2 + 3k + 1 + 2k + 2 
                             = k^3 + 2k + 3k^2 + 3k + 3
                             = 3m       + 3(k^2 + k + 1)
                             = 3(m + k^2 + k + 1)
       -> k + 1 is divisible by 3
       Therefore, we have k = 1 is true, k is true, and k+1 is tru
       =>We have proven that 1,2,...n
                             
       
   
     
   Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers
        
        Assume 9^n - 1 is divisible by 8 for any non-negative integers
        Base case: n = 1, 9^1 - 1 = 8, which is divisible by 8
                   n = k, 9^k - 1 = 8m, where  m is some integer
                   => 9^k = 8m + 1
                   Assume k is true
        Proving k+1 is true:
              9^(k+1) - 1 = 9^k(9) - 1 
                          = (8m + 1)(9) - 1 
                          = 72m + 9 - 1
                          = 72m + 8 
                          = 8(9m + 1), this is divisible by 8
       -> k + 1 is divisible by 8
       => We have proven that 1,2,...n
                          
    
    
 
 
