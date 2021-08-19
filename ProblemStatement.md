<h2 style="text-align: center;">Intersection</h2>
<p style="text-align: center;">time limit per test: 2 seconds</p>
<p style="text-align: center;">memory limit per test: 256 megabytes</p>
<p style="text-align: center;">input: standard input</p>
<p style="text-align: center;">output: standard output</p>

<br>

You are given a set of n lines parallel to the x-axis. Find the minimum number of lines parallel to the y-axis need to be drawn such that all the n lines are cut atleast once.

The lines are described in the following way:
- (x1, y) - the left coordinate
- (x2, y) - the right coordinate

### Input
The first line contains one integer t (1 ≤ t ≤ 10) — the number of test cases. Then t test cases follow.

Each test case consists of two parts.

First line contains one integer n (1 ≤ n ≤ 100) — the number of ***lines*** in each test case

Followed by n lines each containing 3 integers x1, x2, y (0 ≤ x1, x2, y ≤ 10<sup>2</sup> ) — the coordinates of the endpoint of each ***line***. <br> (as the ***lines*** are parallel to x-axis, only one y coordinate is sufficient)

### Output
For each test case output in a separate line a single integer d — the minimum number of the ***lines*** parallel to y-axis needed to cut all the given ***lines*** which are parallel to the x-axis. 

### Example

#### Input
    2
    6
    4 9 2 
    2 8 7 
    8 10 5 
    3 4 7 
    1 2 2 
    3 6 8
    10
    5 10 5
    3 13 2
    19 26 9
    11 19 2
    7 23 10
    17 32 1
    10 16 8
    0 19 5
    10 25 16
    12 26 1
#### Output
    3
    2

### Note
In case 1, draw 3 ***lines*** parallel to y-axis passing through (2,0), (4,0) and (8,0)<br>
In case 2, Draw 2 ***lines*** parallel to y-axis passing through (10,0) and (19,0)



