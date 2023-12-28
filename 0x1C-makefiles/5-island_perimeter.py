#!/usr/bin/python3
""" This module will return the perimeter of an island"""

def island_perimeter(grid):
    peri = 0
    row = len(grid)
    col = len(grid[0])
    for i in range(row):
        h_flag = 0
        for j in range(col):
            if grid[i][j] == 1 and h_flag == 0:
                if grid[i + 1] and grid[i + 1][j] == 1:
                    if grid[i - 1] and grid[i - 1][j] == 0:
                        peri += 3
                    elif grid[i - 1] and grid[i - 1][j] == 1:
                        peri += 2
                elif grid[i + 1] and grid[i + 1][j] == 0:
                    if grid[i - 1] and grid[i - 1][j] == 1:
                        peri += 3
                    else:
                        peri +=4
                h_flag = 1
            elif h_flag == 1 and grid[i][j] == 1:
                peri += 2
            elif h_flag == 1 and grid[i][j] == 0:
                break
    return peri
