#!/usr/bin/python3
"""Contains function that calculates the perimeter of an island"""


def island_perimeter(grid):
    """Returns the perimeter of island described in grid
        Args:
            grid: repesentation of water and land
    """
    perimeter = 0

    def add_border(row, col):
        """Helper function to check if a boundary is required
        """
        # check for index out of range or water in cell
        if row < 0 or col < 0 or row >= len(grid) or col >= len(grid[0]) or \
                grid[row][col] == 0:
            return 1
        else:
            return 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimeter += add_border(row - 1, col)
                perimeter += add_border(row + 1, col)
                perimeter += add_border(row, col - 1)
                perimeter += add_border(row, col + 1)
    return perimeter
