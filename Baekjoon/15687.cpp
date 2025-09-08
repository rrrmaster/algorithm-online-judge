class Rectangle {
private:
    int width, height;
public:
    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }
    int get_width() const {
        return width;
    }
    int get_height() const {
        return height;
    }
    void set_width(int width) {
        this->width = (0 < width && width <= 1000 ) ? width : this->width;
    }
    void set_height(int height) {
        this->height = (0 < height && height <= 2000) ? height : this->height;
    }
    int area() const {
        return width * height;
    }
    int perimeter() const {
        return (width + height) * 2;
    }
    bool is_square() const {
        return width == height;
    }
};