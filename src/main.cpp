#include <iostream>
#include "neuron.h"

int main(void)
{
    std::vector<float> input, weights;
    input.reserve(10);
    weights.reserve(10);
    for(int i=0;i<10;i++)
    {
        input.push_back(i/10.f);
        weights.push_back(i/10.f );
    }
    
    auto neuron = Neuron(input,weights,5);
    neuron.print_value();
    return 0;
}

