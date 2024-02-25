#include "neuron.h"
#include <iostream>
void Neuron::calculate()
{
    if(_input.size() != _weights.size())
    {
        return;
    }
    float calulated_value = 0;

    for(int i=0;i<_input.size();++i)
    {
        calulated_value += _weights[i] * _input[i];
    }
    _value = calulated_value + _bias;
}

void Neuron::print_value() const{
    std::cout<<"Calculated value of neuron: " << _value << std::endl;
}
