### Logic

The solution follows the concept of a *Greedy Algorithm*. 

Firstly choose the line with the smallest value of x2, say X and draw a line parallel to the y-axis passing through (X,0).
This line will cut all the other lines where x1 ≤ X and X ≤ x2. Remove all such lines.<br>
Now apply the same algorithm to the remaining lines as well.

### Algorithm
- Store the values of the coordinates in a 2-D array of dimentions n X 3.
- Sort the array with respect to the x2 coordinate in increasing order.
- Now chose the first element as the point where the first intersecting line is formed. 
- Now iterate through the array and find the element where x1 > than the previous value of x2(from where the previous intersecting line was drawn).
- Now this point becomes the place where another intersecting line is formed.
- Repeat the algorithm
