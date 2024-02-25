#pragma once

#include <vector>

class Neuron{
public:
    Neuron() = default;
    Neuron(const std::vector<float>& input, const std::vector<float>& weights, float bias)
    :   _input(input),
        _weights(weights),
    _bias(bias){};
    
    void calculate();
    void print_value() const;
    
private:
    std::vector<float> _input;
    std::vector<float> _weights;
    float _bias;
    float _value = {};
};
