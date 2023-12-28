#!/usr/bin/python3
""" This module will return the perimeter of an island"""


def island_perimeter(grid):
    """ this module
    calculates and returns the
    perimeter of an island
    """
    peri = 0
    row = len(grid)
    col = len(grid[0])
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                 peri += 4
                 if i > 0 and grid[i - 1][j] == 1:
                     peri -= 1
                 if i < (row - 1) and grid[i + 1][j] == 1:
                     peri -= 1
                 if j > 0 and grid[i][j - 1] == 1:
                     peri -= 1
                 if j < (col - 1)  and  grid[i][j + 1] == 1:
                     peri -= 1
    return peri
