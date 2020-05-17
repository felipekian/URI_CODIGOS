'''
    Felipe Derkian - URI 3084 - Relógio Antigo
'''

def tratamento_entrada(entrada):
    entrada = entrada.split()
    horas = int(entrada[0])
    minutos = int(entrada[1])
    return horas, minutos

def calcular_horario(hora, minutos):
    horario = ""
    
    hora = int(hora / 30)
    minutos = int(minutos / 6)

    if hora < 10:
        horario = "0" + str(hora)
    else:
        horario = str(hora)


    if minutos < 10:
        horario = horario + ":0" + str(minutos)
    else:
        horario = horario + ":" + str(minutos)

    return horario
    

    

if __name__ == "__main__":
    while True:
        try:
            entrada = input()
            # h = horas, m = minutos
            h, m = tratamento_entrada(entrada)

            print("{}".format(calcular_horario(h, m)))
            
        except EOFError:
            break