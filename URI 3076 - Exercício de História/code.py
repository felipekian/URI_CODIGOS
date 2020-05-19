'''
    Felipe Derkian - URI 3076 - Exercício de História
'''


import math

def calcular_seculo(ano):
    seculo = ano/100

    if ano%100 != 0:
        seculo = seculo + 1    

    return int(seculo)

if __name__ == "__main__":
    while True:
        try:
            ano = int(input())
            print( calcular_seculo(ano) )
        except EOFError:
            break
