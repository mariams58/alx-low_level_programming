#!/usr/bin/python3
""" Returnd the perimter of a given island described in grid """


def island_perimeter(grid):
    """ Calculates the perimeter of an island """
    rows = len(grid)
    col = len(grid[0])
    if grid:
        leng = 0
        widt = 0
        for i in range(rows):
            for j in range(col):
                if grid[i][j] == 1:
                    leng += 1
                    if (grid[i - 1][j] == 1 and i > 0):
                        widt += 1
                    if (grid[i][j - 1] == 1 and j > 0):
                        widt += 1
        result = leng * 4 - widt * 2
    return result


if __name__ == "__main__":
    island_perimeter(grid)
