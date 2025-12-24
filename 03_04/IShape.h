#pragma once
class IShape {
public:
    ~IShape() = default;
    void virtual Size() = 0;
    void virtual Draw() = 0;
};
