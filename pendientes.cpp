#include <iostream>
#include <stdlib.h>

using namespace std;

class Punto {
	protected:
	float x1, y1, x_1, y_1;
	float x2, y2, x_2, y_2;
	public:
	void pedir_puntos() {
		
		cout << "Ingrese la coordenada x del primer punto de la primera recta: ";
		cin >> x1;
		cout << "Ingrese la coordenada y del primer punto de la primera recta: ";
		cin >> y1;
		cout << "Ingrese la coordenada x del segundo punto de la primera recta: ";
		cin >> x_1;
		cout << "Ingrese la coordenada y del segundo punto de la primera recta: ";
		cin >> y_1;
		cout << "Ingrese la coordenada x del primer punto de la segunda recta: ";
		cin >> x2;
		cout << "Ingrese la coordenada y del primer punto de la segunda recta: ";
		cin >> y2;
		cout << "Ingrese la coordenada x del segundo punto de la segunda recta: ";
		cin >> x_2;
		cout << "Ingrese la coordenada y del segundo punto de la segunda recta: ";
		cin >> y_2;
		}
		
}; 

class Recta : public Punto
{
		private:
		float num1, num2, dem1, dem2, m1, m2, cruce1, cruce2, resul, resul1, coor_x, coor_y;
		public:
		void hallar_pendientes(){
			dem1 = x_1 - x1;
			num1 = y_1 - y1;
			dem2 = x_2 - x2;
			num2 = y_2 - y2; 
			m1 = num1/dem1;
			m2 = num2/dem2;
			
			cruce1 = y1 - (x1*m1);
			cruce2 = y2 - (x2*m2);
			resul = m1 - m2;
			resul1 = cruce2 - cruce1; 
			coor_x = resul1/resul;
			coor_y = m1*coor_x + cruce1;
			
			cout << "El valor de la pendiente de la primera recta es:  " << m1 << endl; 
			cout << "El valor de la pendiente de la segunda recta es:  " << m2 << endl;
			
			if (m1 == m2)
			cout << "Las rectas son paralelas\n";
		
			if (m1 == -m2 && m2 == -m1)
			{
				cout << "Las rectas son perpendiculares\n";
			}
			else 
			{
				
				cout << "La coordenada x de intersección entre las rectas es: \n" << coor_x << endl;
				cout << "La coordenada y de intersección entre las rectas es: \n" << coor_y << endl;
			}		
	}
};

int main ()
{
	Punto p;
	Recta r;
	r.pedir_puntos();
	r.hallar_pendientes();	
}






		
		