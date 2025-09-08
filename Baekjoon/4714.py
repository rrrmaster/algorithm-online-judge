while True:
    x = float(input())
    if x < 0:
        break
    print("Objects weighing {:.2f} on Earth will weigh {:.2f} on the moon.".format(x, x * 0.167))
