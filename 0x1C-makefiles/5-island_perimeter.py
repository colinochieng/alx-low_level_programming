#!/usr/bin/python3
"""
A module to calculate perimeter of an Island
"""


def island_perimeter(grid):
    """
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """
    width = len(grid[0])
    height = len(grid)
    per = 0

    for i in range(height):
        for j in range(width):
            if j > 0 and i > 0:
                if grid[i][j] == 1:
                    if grid[i - 1][j] == 0:
                        per += 1
                    if grid[i][j - 1] == 0:
                        per += 1
                    if grid[i][j + 1] == 0:
                        per += 1
                    if grid[i + 1][j] == 0:
                        per += 1
    return per
