## Speller

CS50 pset4
```
dictionary                test
    |                     
move into memory          - take doc into memory
---------------           - check spelling
|             |           - not case sensitive
|             |
---------------
|             |
|             |
|             |
|             |
---------------


array to keep of words in dictionary
[cat, caterpillar, Hat, hat]


iterate through array to find a word in the array or sort it
solve with a tri or hash table

          [TRI]                 Hash table
          / | \                   0 -80
        [] []  []
       /|\  |  | \
      / | \ O  O  O
     O  O  O
     
"Hat" => 71
"cat" => 77

How many for the amount of items?
1000 items * 100 boxes = 10 items in each box

link list [[],[],[],[],[]]
int array [i]

address + (sizeof(type)*i)

bytes = 4

0*123
0*127       index 0
0*131       index 1
0*135
0*139
0*143
0*147

address + (sizeof(type)*i)
0*123 + (sizeof(type)*0)
0*123 + (4*3)
0*123 + (12)
0*135

Find how much memory to storage depending on refrence

```
