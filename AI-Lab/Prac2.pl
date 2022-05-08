parent(prashant, kartik).
parent(priya, kartik).
parent(prashant, chaitanya).
parent(priya, chaitanya).
parent(vinay, varun).
parent(poonam, varun).
parent(vinay, akshata).
parent(poonam, akshata).
parent(nitin, nishita).
parent(sunita, nishita).
parent(nitin, ruchita).
parent(sunita, ruchita).

male(kartik).
male(chaitanya).
male(prashant).
male(vinay).
male(nitin).
male(varun).

female(priya).
female(akshata).
female(ruchita).
female(nishita).
female(poonam).
female(sunita).

father_of(X, Y):-
    male(X), parent(X, Y).

mother_of(X, Y):-
    female(X), parent(X, Y).

brother_of(X, Y):-
    male(X), parent(Z, X), parent(Z, Y).

sister_of(X, Y):-
    female(X), parent(Z, X), parent(Z, Y).
