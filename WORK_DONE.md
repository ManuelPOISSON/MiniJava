
### A brief sight on the work done

Notre MiniJava reconnaît les structures suivantes :

== pour les types int, bool, Object
operator ||, >=, <=, &&
i++ et i-- 
+= et -=
boucle for comprenant les ++, --, +=, -=
if avec et sans else
Un type assignation a été créé pour optimiser la boucle for
print boolean



### Other stuff that is not useful for you
  __
/X X \
| __ |
\____/


lexer..mll
  rule get_token = parse
    | regExp qui reconnait > (en l'occurence ">") return GT

parser.mll
  ajouter le token GT

ajouter le token GT dans le binop 
ici : 
LMJ.mli
  ast + position
et là : 
MJ.mli
  ast

dans les expressions : 
| expr op expr
|
%inline
op:
  |PLUS {OpAdd}
  |MOINS {OpMoins}
  |Ajouter le supérieur

mj2c : parcour ast et construit fichier '.c'

reste le typechecking

attention, le == peut prendre des booleens, des objets, des entiers


dans PrintMJ.ml