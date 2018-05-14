# gdb_demo

[GDB](https://www.gnu.org/software/gdb/) is a debbuger tool that supports a number of programming languages, including C++.

This project contains a handful of examples to illustrate some of its capabilities.

# Usage

## Synopsys

`
  run <1|2|3>
`

## Description

  Execute the example specified via argument (3 examples available, accepted values 1, 2 or 3). Note that the code has some known bugs (commented in the code) to demostrate the capabilities of GDB.
  
# Examples

## Example 1

Give 2 integer numbers A and B, the following 5 operations are performed:

```
  sum  = A + B
  sub  = A - B
  div  = A / B
  prod = A * B
  total = sum + sub + div + prod
```

This example contains two error:
* **sum** is printed on screen when **sub** is expected (demostrate how to look for bugs)
* division by zero is not being handled (demostrate how GDB handles critical exceptions)

## Example 2

Same as example 1, but using a lambda instead of a function. This allows to observe how these two approaches (functions vs labda) can 
be debugged using GDB. The main difference is that, given the nature of the labda functions, breakpoints cannot be added givein their name.

## Example 3

Same as examples 1 and 2, but the product of A * B is calculated recursively so we add A to a counter B times. This function has a bug when calculating the product (need to return 0 on the base case). Also note that the two bugs from the previous examples have been fixed here.
