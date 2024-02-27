#include <iostream>
#include "Perceptron.h"

int main(void)
{
    std::vector<float> input, weights;
    input.push_back(2.f);
    weights.push_back(0.5f);
    
    auto neuron = Perceptron(input,weights,5);
    neuron.calculate();

    printf("%f\n", neuron.value());
    
    return 0;
}

