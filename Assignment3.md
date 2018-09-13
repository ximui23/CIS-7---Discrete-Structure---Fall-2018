PART 1:
Let S = it is sunny, C = camping is fun, H = the homework is
done, and M = mathematics is easy.

  Translate into English: (M → H)∧(S →C) : 
      If mathematics is easy then the homework is done, and if it is sunny then camping is fun.
  
  Translate into Propositional Logic: “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”: 
      (S ^ H) -> (M v C)
     
PART 2:
Use a truth table to determine whether this is a tautology, contradiction, or neither: (¬B → ¬A) → ((¬B → A) → B)
  | A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B
  |---|---|--- |--- | -------- | ------- | ---------------
  | T | T | F  | F  | T        |  T      |  T
  | T | F | F  | T  | F        |  T      |  F
  | F | T | T  | F  | T        |  T      |  T
  | F | F | T  | T  | T        |  F      |  T
  
  
 Use a truth table to determine whether this is a tautology, contradiction, or neither: ((A → B)∧(B → ¬A)) → A
   | A | B | ¬A | A → B | B → ¬A | (A → B)∧(B → ¬A) | ((A → B)∧(B → ¬A)) → A
   |---|---|----|-------|--------|------------------|------------------------
   | T | T | F  | T     | F      |  F               |  T
   | T | F | F  | F     | T      |  F               |  T
   | F | T | T  | T     | T      |  T               |  F
   | F | F | T  | T     | T      |  T               |  F
   
PART 3:
For each of the following pairs of propositions, show that the
two propositions are logically equivalent by finding a chain of equivalences from one
to the other. State which definition or law of logic justifies each equivalence in the
chain.

Prove:  (p ∧ q) → r    <=>   p → (q → r)
        (p ^ q)' v r   <=>   p' v (q' v r)     Implication times three
        (p' v q') v r  <=>   p' v (q' v r)     De Morgan's Laws
        p' v (q' v r)  <=>   p' v (q'v r)      Associative
        
Prove: (q ∨ r ) → p    <=>   (q → p)∧(r → p)
        
