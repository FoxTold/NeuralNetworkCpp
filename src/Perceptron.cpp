#include "Perceptron.h"
#include <iostream>
void Perceptron::calculate()
{
    if(_input.size() != _weights.size())
    {
        return;
    }
    float calculatedValue = 0;

    for(int i=0;i<_input.size();++i)
    {
        calculatedValue += _weights[i] * _input[i];
    }
    _value = calculatedValue + _bias;
}
