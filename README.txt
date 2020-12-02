Monica Heim
October 1, 2020
Anchorage,Alaska

Coding Assignment


-------------------------------------------
GENERAL DESCRIPTION:
-------------------------------------------
This module solves a coding problem that involves shuffling a deck of cards.  The problem description is as follows:
You are given a deck containing n cards. While holding the deck:

1. Take the top card off the deck and set it on the table
2. Take the next card off the top and put it on the bottom of the deck in your hand.
3. Continue steps 1 and 2 until all cards are on the table.  This is a round.
4. Pick up the deck from the table and repeat steps 1-3 until the deck is in the original order.

Write a program to determine how many rounds it will take to put a deck back into the original order. This will involve creating a data structure to represent the order of the cards.  This program should be written in C or C++.  Do not use STL.  It should take a number of cards in the deck as a command line argument and write the result to stdout. 


-------------------------------------------
Assumptions:
-------------------------------------------

Cards in deck are unique
A deck has a maximum of 52 cards.

-------------------------------------------
Instruction of use of Application:
-------------------------------------------
Terminal:
execute gcc deckOfCards.c
./a.out 
Enter number of cards in a deck between 1 to 52
Output is presented in stdout. 

Xcode:
Open deckOfCards
Compile and Run the file
Enter number of cards in a deck between 1 to 52
Output is presented in stdout. 

-------------------------------------------
Implementation:
-------------------------------------------
I used an array as my data structure. This data structure consists of a collection of elements, each identified by at least one array index or key. I chose an array data structure because I concluded that using an array is 5 times faster than using a stack or a queue. I think that efficiency plays a very important role in programming. 

-------------------------------------------
Complexity:
-------------------------------------------

k = number of rounds
N = number of cards

For each round Time Complexity is O(N) time, in total Time Complexity of this program is k*O(N)



-------------------------------------------
Unit Test:
-------------------------------------------
Size of Deck : Number of Rounds

1: 1
2: 2
3: 3
4: 2
5: 5
6: 6
7: 5
8: 4
9: 6
10: 6
11: 15
12: 12
13: 12
14: 30
15: 15
16: 4
17: 17
18: 18
19: 10
20: 20
21: 21
22: 14
23: 24
24: 90
25: 63
26: 26
27: 27
28: 18
29: 66
30: 12
31: 210
32: 12
33: 33
34: 90
35: 35
36: 30
37: 110
38: 120
39: 120
40: 26
41: 41
42: 42
43: 105
44: 30
45: 45
46: 30
47: 60
48: 48
49: 120
50: 50




