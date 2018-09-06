Prove p -> q <=> q' -> p'

p -> q <=> q' -> p'
p' v q <=> (q')' v p'  Implication
p' v q <=> q v p'      Double Negation
p' v q <=> p' v q      Commutative

Show that (p->r) ^ (q->r) <=> (p v q) -> r

(p' v r) ^ (q' v r) <=> (p v q)' v r          Implication
(p' v r) ^ (q' v r) <=> (p' ^ q') v r         De Morgan's laws
(p' v r) ^ (q' v r) <=> (p' v r) ^ (q' v r)   Distributive

Given an interpretation to prove that the following wff is not valid
(Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))
x is a color
A(x) -> x is white 
B(x) -> x is red
For some x, x is white AND for some x, x is red -> for some x, x is white AND red
