#!/usr/bin/python3
""" Returnd the perimter of a given island described in grid """


def island_perimeter(grid):
    """ Calculates the perimeter of an island """
    rows = len(grid)
    col = len(grid)
    if grid:
        leng = 0
        widt = 0
        for i in range(rows):
            for j in range(col):
                if grid[i][j] == 1 :
                    if grid[i - 1][j] == 0:
                        leng += 1
                    if grid[i + 1][j] == 0:
                        widt += 1
        if leng == 0:
            result = 2 * leng
        elif widt == 0:
            result = 2 * widt
        else:
            result = 2 * (leng + widt)
    return result


if __name__ == "__main__":
    island_perimeter(grid)
