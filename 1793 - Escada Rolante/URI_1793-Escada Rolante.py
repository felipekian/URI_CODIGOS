# -*- coding: utf-8 -*-

'''
    Felipe Derkian - URI 1793 - Escada Rolante
'''

def calcular_tempo(tempos, n):
    
    cont = 0

    for i in range(n):
        if i == 0:
            cont = 10
        else:
            if int(tempos[i-1])+10 < int(tempos[i]):
                cont += 10
            else:
                cont += (int(tempos[i])-int(tempos[i-1]))
    return cont


if __name__ == "__main__":
    
    while True:
        n = int(input())
        
        if(n == 0): # parada
            break

        tempos = input()
        tempos = tempos.split()

        print(calcular_tempo(tempos, n))


