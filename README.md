# 4th-Task

Creating my own Vector container, and testing how it goes against std::vector. 

1st I will test how the push_back function works just by adding int elements to the vector.
2nd I will test how my Vector goes with the Student program that we wrote earlier.

## Installing

1. Copy the link of the repository with ".git" at the end
1. Use "git clone <Web URL>" command in git bash to install the program in wanted directory.
1. Run and enjoy :)

## V0.1
### Vector time check:

#### push_back time test

| Amount | My vector | std::vector 
| :---: | :---: | :---:
| 10000 | 0 s | 0 s
| 100000 | 0 s | 0 s
| 1000000 | 0.0156129 s | 0 s
| 10000000 | 0.0625005 s | 0.0781259 s
| 100000000 | 0.500008 s | 0.640651 s

## V1.0
### Checking how my Vector goes against std::vector

#### Storing the Student to 2 different containers:

| Amount | My vector | std::vector 
| :---: | :---: | :---:
| 10 | 0.001001 s | 0.0005 s
| 100 | 0.000998 s | 0.000501 s
| 1000 | 0.010026 s | 0.007509 s
| 10000 | 0.085062 s | 0.055019 s
| 100000 | 0.77786 s | 0.565488 s

#### Storing the Student to 1 other container and deleting the unneeded students from the main container:

| Amount | My vector | std::vector 
| :---: | :---: | :---:
| 10 | 0 s | 0.001001 s
| 100 | 0.002 s | 0.001002 s
| 1000 | 0.008004 s | 0.008004 s
| 10000 | 0.072066 s | 0.058064 s
| 100000 | 0.741598 s | 0.630486 s

#### Storing the Student to 1 other container and deleting the unneeded students from the main container (Without algorithms :)):

| Amount | My vector | std::vector 
| :---: | :---: | :---:
| 10 | 0.000502 s | 0.000501 s
| 100 | 0.003002 s | 0.0015 s
| 1000 | 0.126098 s | 0.059041 s
| 10000 | 11.6623 s | 5.04358 s
| 100000 | 1145.99 s | 453.388 s

## Warning

for this to work you need wow.txt files from the 3rd task that we had :)
