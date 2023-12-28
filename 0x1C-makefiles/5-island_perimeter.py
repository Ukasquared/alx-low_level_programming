#!/usr/bin/python3
""" This module will return the perimeter of an island"""


def island_perimeter(grid):
    """ this module
    calculates and returns the
    perimeter of an island
    """
    if grid is None:
        return
    if grid == [] or not isinstance(grid, list):
        return
    peri = 0
    row = len(grid)
    col = len(grid[0])
    if 1 in grid[0] or 1 in grid[row - 1]:
        return
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                peri += 4
                if grid[i - 1][j] == 1:
                    peri -= 1
                if grid[i + 1][j] == 1:
                    peri -= 1
                if grid[i][j - 1] == 1:
                    peri -= 1
                if grid[i][j + 1] == 1:
                    peri -= 1
    if peri:
        return peri
    else:
        return
