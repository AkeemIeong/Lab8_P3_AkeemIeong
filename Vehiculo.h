#pragma once
class Vehiculo{
private:
	float capacidad=0;
	float velocidad=0;
	float consumo=0;
public:
	Vehiculo();
	Vehiculo(float, float, float);
	float getCapacidad();
	void setCapacidad(float);
	float getVelocidad();
	void setVelocidad(float);
	float getConsumo();
	void setConsumo(float);
	~Vehiculo();
};

