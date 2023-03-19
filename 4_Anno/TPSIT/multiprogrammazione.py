from __future__ import print_function
import multiprocessing


def thread1():
    print("---Sono il thread 1---")


def thread2():
    print("---Sono il thread 2---")
    print(700*200)

if __name__ == "__main__":
    p1 = multiprocessing.Process(target=thread2)
    p1.start()

    p2 = multiprocessing.Process(target=thread1)
    p2.start()

    p1.join()
    p2.join()