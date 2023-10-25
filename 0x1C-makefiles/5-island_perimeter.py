#!/usr/bin/python3
"""Represents a function measuring an island perimeter."""


def island_perimeter(grid):
    """Displays the perimiter of an island.

    Args:
        grid (list): integ representing an island.
    Returns:
        The perimeter of the island.
    """
    _width = len(grid[0])
    _height = len(grid)
    _edges = 0
    _size = 0

    for k in range(_height):
        for j in range(_width):
            if grid[k][j] == 1:
                _size += 1
                if (j > 0 and grid[k][j - 1] == 1):
                    _edges += 1
                if (k > 0 and grid[k - 1][j] == 1):
                    _edges += 1
    return _size * 4 - _edges * 2
