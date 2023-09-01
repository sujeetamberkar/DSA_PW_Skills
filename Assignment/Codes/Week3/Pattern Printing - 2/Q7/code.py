def print_diamond(n: int) -> None:
    cur = [' '] * (2 * n)
    l = r = n

    while l >= 0 and r < len(cur):
        cur[l] = '*'
        cur[r] = '*'
        print(''.join(cur))
        cur[l] = ' '
        cur[r] = ' '
        l -= 1
        r += 1
    l += 2
    r -= 2
    while l != r:
        cur[l] = '*'
        cur[r] = '*'
        print(''.join(cur))
        cur[l] = ' '
        cur[r] = ' '
        l += 1
        r -= 1
    cur[l] = '*'
    print(''.join(cur))


def main():
    print_diamond(4)

main()