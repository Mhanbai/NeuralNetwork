////////////////////////////////////////////////////////////////////////////////
// Filename: Neuron.cpp
////////////////////////////////////////////////////////////////////////////////
#include "Neuron.h"


Neuron::Neuron()
{

}


Neuron::Neuron(const Neuron& other)
{
}


Neuron::~Neuron()
{
}


bool Neuron::Initialize(float input1Weight_in, float input2Weight_in, float input3Weight_in)
{
	weight1 = input1Weight_in;
	weight2 = input2Weight_in;
	weight3 = input3Weight_in;

	return true;
}


void Neuron::Shutdown()
{
	return;
}

float Neuron::ReturnOutput(float value1, float value2, float value3)
{
	return max(0.0f, ((value1 * weight1) + (value2 * weight2) + (value3 * weight3)));
}
