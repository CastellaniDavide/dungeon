for case in range(1,10):
        sol = 0

        for i in range(10 ** (case - 1), 10 ** (case)):
                a = 0
                b = 1
                for j in range(len(str(i))):
                        a += int(str(i)[j])
                        b *= int(str(i)[j])
                if a == b : sol  += 1
                # if a == b : print(i)

        print(f"{case}\t{sol}")

