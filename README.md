# revisions

# Les variables
## question 1
Ecrire un programme permettant d’échanger les valeurs de deux variables A et B, et ce quel que soit leur contenu préalable.
Afficher le contenu des variables avant et après échange.

## question 2
Une variante écrire un programme permettant d’échanger les valeurs de trois variables A, B et C. C transférant à B la valeur de A, à C la valeur de B et à A la valeur de C
Afficher le contenu des variables avant et après échange.

## question 3
Ecrire un programme qui demande un nombre à l’utilisateur, puis qui calcule et  affiche le carré de ce nombre.

## question 4
Ecrire un programme qui demande son prénom à l'utilisateur, et qui lui réponde par un charmant « Bonjour » suivi du prénom. On aura ainsi le dialogue suivant :
```
machine : Quel est votre nom ?
utilisateur : Marie
machine : Bonjour, Marie!
```
## question 5
Ecrire un programme qui lit le prix HT d’un article, le nombre d’articles et le taux de TVA, et qui fournit le prix total TTC correspondant. Faire en sorte que des libellés apparaissent clairement.

# Les tests

## question 6
Ecrire un programme qui demande un nombre à l’utilisateur, et l’informe ensuite si ce nombre est positif ou négatif (on laisse de côté le cas où le nombre vaut zéro).

## question 7
Ecrire un programme qui demande deux nombres à l’utilisateur et l’informe ensuite si leur produit est négatif ou positif (on laisse de côté le cas où le produit est nul). Attention toutefois : on ne doit pas calculer le produit des deux nombres.

## question 8
Ecrire un algorithme qui demande un nombre à l’utilisateur, et l’informe ensuite si ce nombre est positif ou négatif (on inclut cette fois le traitement du cas où le nombre vaut zéro).

## question 9
Ecrire un programme qui demande l’âge d’un enfant à l’utilisateur. Ensuite, il l’informe de sa catégorie :
- "Poussin" de 6 à 7 ans
- "Pupille" de 8 à 9 ans
- "Minime" de 10 à 11 ans
- "Cadet" après 12 ans

Peut-on concevoir plusieurs algorithmes équivalents menant à ce résultat ?

oui comme toujours .

# Les boucles

## question 10
Ecrire un programme qui demande un nombre compris entre 10 et 20, jusqu’à ce que la réponse convienne. En cas de réponse supérieure à 20, on fera apparaître un message : « Plus petit ! », et inversement, « Plus grand ! » si le nombre est inférieur à 10.

## question 11
Ecrire un programme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants. 

Par exemple, si l'utilisateur entre le nombre 17, le programme affichera les nombres de 18 à 27.
**Attention : utilisez une boucle while!**

## question 12
Ecrire un programme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants. 

Par exemple, si l'utilisateur entre le nombre 17, le programme affichera les nombres de 18 à 27.
**Attention : utilisez une boucle for!**

## question 13
Ecrire un algorithme qui demande successivement 20 nombres à l'utilisateur, et qui lui dise ensuite quel était le plus grand parmi ces 20 nombres :

Entrez le nombre numéro 1 : 12\
Entrez le nombre numéro 2 : 14\
etc.\
Entrez le nombre numéro 20 : 6\
Le plus grand de ces nombres est  : 14

Modifiez ensuite l'algorithme pour que le programme affiche de surcroît en quelle position avait été saisie ce nombre :

C'était le nombre numéro 2

## question 14

Écrire un algorithme qui permette de connaître ses chances de gagner au tiercé, quarté, quinté et autres impôts volontaires.

On demande à l'utilisateur le nombre de chevaux partants, et le nombre de chevaux joués. Les deux messages affichés devront être :

Dans l'ordre : une chance sur X de gagner\
Dans le désordre : une chance sur Y de gagner

X et Y nous sont donnés par la formule suivante, si n est le nombre de chevaux partants et p le nombre de chevaux joués (on rappelle que le signe ! signifie "factorielle") :

X = n ! / (n - p) !\
Y = n ! / (p ! * (n -- p) !)

NB : cet algorithme peut être écrit d'une manière simple, mais relativement peu performante. Ses performances peuvent être singulièrement augmentées par une petite astuce. Vous commencerez par écrire la manière la plus simple, puis vous identifierez le problème, et écrirez une deuxième version permettant de le résoudre.

# les tableaux
## question 15
Ecrire un programme qui déclare un tableau de 9 notes, dont on fait ensuite saisir les valeurs par l’utilisateur.

## question 16

Ecrivez un algorithme constituant un tableau, à partir de deux tableaux de même longueur préalablement saisis. Le nouveau tableau sera la somme des éléments des deux tableaux de départ.

Tableau 1 :

| 4 | 8 | 7 | 9 | 1 | 5 | 4 | 6 |

Tableau 2 :

| 7 | 6 | 5 | 2 | 1 | 3 | 7 | 4 |

Tableau à constituer :

| 11 | 14 | 12 | 11 | 2 | 8 | 11 | 10 |

## question 17
Ecrivez un algorithme permettant, à l’utilisateur de saisir un nombre quelconque de notes d'une classe. Le programme, une fois la saisie terminée, renvoie le nombre de ces notes supérieures à la moyenne **de la classe.**

## question 18
Ecrivez un algorithme qui permette de saisir un nombre quelconque de valeurs, et qui les range au fur et à mesure dans un tableau. Le programme, une fois la saisie terminée, doit dire si les éléments du tableau sont tous consécutifs ou non.

Par exemple, si le tableau est :

| 12 | 13 | 14 | 15 | 16 | 17 | 18 |\
ses éléments sont tous consécutifs. En revanche, si le tableau est :

| 9 | 10 | 11 | 15 | 16 | 17 | 18 |

## question 19
Écrivez un algorithme qui fusionne deux tableaux (déjà existants) dans un troisième, qui devra être trié.

**Attention ! On présume que les deux tableaux de départ sont préalablement triés : il est donc irrationnel de faire une simple concaténation des deux tableaux de départ, puis d'opérer un tri : comme quand on se trouve face à deux tas de papiers déjà triés et qu'on veut les réunir, il existe une méthode bien plus économique (et donc, bien plus rationnelle...)**

# Tableaux a plusieurs dimensions
## question 20
Écrivez un algorithme remplissant un tableau de 6 sur 13, avec des zéros.

## question 21
Soit un tableau T à deux dimensions (12, 8) préalablement rempli de valeurs numériques.

Écrire un algorithme qui recherche la plus grande valeur au sein de ce tableau.
