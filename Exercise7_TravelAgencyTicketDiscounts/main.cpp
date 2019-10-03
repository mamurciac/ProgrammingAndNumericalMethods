#include <iostream>

using namespace std;

/*  This exercise consists of the following declared:
        Una agencia de viajes ha contratado nuestros servicios para elaborar un programa que calcule el precio de los
        billetes de ida y vuelta en avión. El precio básico del billete se calcula conociendo la distancia a recorrer y el
        número de días de estancia. La agencia aplica una política de descuentos de tal modo que si la estancia es superior
        a 7 días y la distancia es superior a 800 Km, o bien la persona es mayor de 55 años, el billete tiene una reducción
        del 25%. El precio por kilómetro es de 0.50€. Implementa un programa que solicitando nombre, edad, distancia en
        kilómetros y número de dias de estancia, muestre el precio del billete para ese cliente. La salida del programa
        debe mostrarse de la siguiente manera:
            Estimado Sr. <CLIENTE>, el precio de su viaje es XXXXX
            Le hemos aplicado un descuento de XXXXX */

int main(){
    double distance, pricePerKilometer = 0.5, ticketPrice, discountPercentage = 0.25, ticketDiscount = 0.0;
    int age, numberStayDays, nameMaxLength = 15;
    char name[nameMaxLength];
    cout << endl << " Bienvenido a la agencia de viajes" << endl << endl;
    cout << " Indica tu nombre: ";
    cin >> name;
    cout << " Indica tu edad: ";
    cin >> age;
    cout << " Indica la distancia del recorrido (en Km): ";
    cin >> distance;
    cout << " Indica el numero de dias de estancia: ";
    cin >> numberStayDays;

    ticketPrice = distance * pricePerKilometer;
    if(age > 55 || (numberStayDays > 7 && distance > 8.0)){
        ticketDiscount = ticketPrice * discountPercentage;
    }
    ticketPrice -= ticketDiscount;
    cout << endl << " Estimado Sr(a). " << name << ", el precio de tu viaje es " << ticketPrice << endl;
    cout << " Te hemos aplicado un descuento de " << ticketDiscount << endl;
    return 0;
}
