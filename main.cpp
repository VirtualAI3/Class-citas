#include <iostream>
#include "Day.h"
using namespace std;
int main()
{
 Entry nameTime;
 Time time(10,30,0);
 Date date;
 date.Set(12, 3, 2004); // Establecer la fecha en 12 3 2004
 Day day(date, 5); // Establecer el d�a en la fecha con citas
 SortedList list;
 for (int count = 1; count <= 3; count++)
 {
 nameTime.ReadEntry();
 day.InsertEntry(nameTime);
 }
 // Preparar e iterar a trav�s de la lista, imprimir los elementos
 int limit = day.NumberOfEntries();
 day.ResetEntries(); // Preparar para iteraci�n
 cout << "Elementos para " << day.DateIs().Month() << " "
 << day.DateIs().Day()
 << ", " << day.DateIs().Year() << endl;
 for (int count = 0; count < limit; count++)
 {
 nameTime = day.GetNextItem();
 cout << "Nombre: " << nameTime.NameStr() << " Tiempo: "
 << nameTime.TimeStr() << endl;
 }
 // El elemento est� en la lista
 if (day.TimeFree(time))
 cout << time.Hours() << ":" << time.Minutes()
 << " est� libre." << endl;
 else
 cout << time.Hours() << ":" << time.Minutes()
 << " no est� libre. " << endl;
 // El elemento no est� en la lista
 time.Set(0,0,0);
 if (day.TimeFree(time))
 cout << time.Hours() << ":" << time.Minutes()
 <<" est� libre." << endl;
 else
 cout << time.Hours() << ":" << time.Minutes()
 << " no est� libre. " << endl;
 // Borrar e iterar a trav�s de la lista, imprimir los elementos
 day.Delete(nameTime);
 day.ResetEntries(); // Preparar para iteraci�n
 limit = day.NumberOfEntries();
 for (int count = 0; count < limit; count++)
 {
 nameTime = day.GetNextItem();
 cout << "Nombre: " << nameTime.NameStr() << " Tiempo: "
 << nameTime.TimeStr() << endl;
 }
 return 0;
}
