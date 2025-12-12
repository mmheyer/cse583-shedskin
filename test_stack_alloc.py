def test_local_tuple():
    total = 0
    for i in range(1000000):
        t = (i, i + 1)
        a, b = t
        total += a + b
    return total

if __name__ == "__main__":
    result = test_local_tuple()
    print(result)

