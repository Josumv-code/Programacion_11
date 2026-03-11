def hay_cupo(reservas, capacidad):
    return len(reservas) < capacidad


def mostrar_resumen(reservas, capacidad):
    print("\n Registrados ")
    print(f"Resevas aceptaas: {len(reservas)}/{capacidad}")
    for nombre in reservas:
        print(f"- {nombre}")


def main():
    capacidad = 5
    reservas = []

    while True:
        print(f"\n epacios dispnibles: {capacidad - len(reservas)}")
        nombre = input("Nombre (o 'salir'): ")

        if nombre.lower() == "salir":
            break

        if hay_cupo(reservas, capacidad):
            reservas.append(nombre)
            print("has sido reservado")
        else:
            print("Ya no hay espacio.")

    mostrar_resumen(reserva, capacidad)


if __name__ == "_main_":
    main()
    
    #Keneth Y esteban me ayudaron mucho :(((((((((((