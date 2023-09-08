#pragma once
class Vehiculo{
private:
	float capacidad;
	float velocidad;
	float consumo;
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

