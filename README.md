# gdb_demo

[GDB](https://www.gnu.org/software/gdb/) is a debbuger tool that supports a number of programming languages, including C++.

This project contains a handful of examples to illustrate some of its capabilities.

Official documentation:
`https://www.gnu.org/software/gdb/documentation/`

# Usage

## Synopsys

`
  run <1|2|3>
`

## Description

  Execute the example specified via argument (3 examples available, accepted values 1, 2 or 3). Note that the code has some known bugs (commented in the code) to demostrate the capabilities of GDB.
  
## Commands

 ```
  b (break):      https://sourceware.org/gdb/current/onlinedocs/gdb/Set-Breaks.html#index-b-_0028break_0029
  c (continue):   https://sourceware.org/gdb/current/onlinedocs/gdb/Continuing-and-Stepping.html#index-c-_0028continue_0029
  f (frame):      https://sourceware.org/gdb/current/onlinedocs/gdb/Selection.html#index-f-_0028frame_0029
  i (info):       https://sourceware.org/gdb/current/onlinedocs/gdb/Help.html#index-i-_0028info_0029 
  l (list):       https://sourceware.org/gdb/current/onlinedocs/gdb/List.html#index-l-_0028list_0029
  n (next):       https://sourceware.org/gdb/current/onlinedocs/gdb/Continuing-and-Stepping.html#index-n-_0028next_0029
  p (print):      https://sourceware.org/gdb/current/onlinedocs/gdb/Data.html#index-print
  s (step):       https://sourceware.org/gdb/current/onlinedocs/gdb/Continuing-and-Stepping.html#index-s-_0028step_0029
  bt (backtrace): https://sourceware.org/gdb/current/onlinedocs/gdb/Backtrace.html#index-bt-_0028backtrace_0029
  C-X 1 (TUI 1):  https://sourceware.org/gdb/current/onlinedocs/gdb/TUI-Keys.html#index-C_002dx-1
  C-X 2 (TUI 2):  https://sourceware.org/gdb/current/onlinedocs/gdb/TUI-Keys.html#index-C_002dx-2
  record:         https://sourceware.org/gdb/current/onlinedocs/gdb/Process-Record-and-Replay.html#index-record
  stop:           https://sourceware.org/gdb/current/onlinedocs/gdb/Hooks.html#index-stop_002c-a-pseudo_002dcommand
```

  Additional commands can be found here:

  List of **all** available commands:
  `https://sourceware.org/gdb/current/onlinedocs/gdb/Command-and-Variable-Index.html#Command-and-Variable-Index`

  List of reverse commands:
  `https://www.gnu.org/software/gdb/news/reversible.html`


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



Jose Miguel Armijo Fidalgo
https://www.linkedin.com/in/jmarmijo/
