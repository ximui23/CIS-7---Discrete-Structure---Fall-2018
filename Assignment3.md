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
       (q v r)' v p    <=>   (q' v p) ^ (r' v p)    Implication times three
        q' ^ r' v p    <=>   (q' v p) ^ (r' v p)    De Morgan's Laws
       (q' ^ r') v p   <=>   (q' ^ r') v p          Distributive
       
PART4: 
Let Loves(x,y) mean “x loves y,” Traveler(x) mean “x is a traveler,”
City(x) mean “x is a city,” Lives(x,y) mean “x lives in y.”

Translate into English: ∃x∀y∀z(C i t y(x)∧Tr aveler (y)∧Li ves(z,x)) → (Loves(y,x)∧ ¬Loves(z,x))
    "For some cities, all travelers love a city while the residents do not love that city. "
 
Translate into Predicate Logic: “No traveler loves the city they live in.” :
    ∀y,∀x((City(x) ^ Traveler(y) ^ Lives(y,x)) -> ¬Loves(y,x)
    
 
 
PART5: 
Assuming: p → (q ∧ r ), s → r , r → p
Prove: s → q.

s is true         assump
r is true         mpp
p is true         mpp
(q ∧ r ) is true  mpp
q is true
s -> q


Assuming: ¬(r ∨ s), ¬p → s, p → q. 
Prove: q

¬(r ∨ s)     Given
r' ^ s'      De Morgan's Laws
and 's       Modus Tollens
¬p → s       Given
(p')'        Modus Tollens
p            Double Negation
q


HINT:
Modus Ponen: If x -> q, and x, then q
Modus Tollens: If x -> q, and ~q, then ~x





