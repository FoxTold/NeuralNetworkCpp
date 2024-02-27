#pragma once

#include <vector>

class Perceptron{
public:
    Perceptron() = default;
    Perceptron(const std::vector<float>& input, const std::vector<float>& weights, float bias)
    :   _input(input),
        _weights(weights),
    _bias(bias){};

    void calculate();
    [[nodiscard]] float value() const { return _value; }

private:
    std::vector<float> _input;
    std::vector<float> _weights;
    float _bias;
    float _value = {};
};
