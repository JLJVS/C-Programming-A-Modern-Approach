#include <stdio.h>
#include <stdbool.h>

struct point{
    int x, y;
};

struct rectangle{
    struct point upper_left, lower_right;
};

void print_rectangle(struct rectangle r){
    printf("Upper Left = (%d, %d), Lower Right = (%d, %d)\n", r.upper_left.x, r.upper_left.y, r.lower_right.x, r.lower_right.y);
}

int calculate_area(struct rectangle r){
    return (r.lower_right.x - r.upper_left.x)*(r.upper_left.y-r.lower_right.y);
}

struct point calculate_center(struct rectangle r){
    int new_x = (r.upper_left.x + r.lower_right.x)/2;
    int new_y = (r.upper_left.y + r.lower_right.y)/2;
    struct point center = {new_x, new_y};
    return center;
}

struct rectangle move(struct rectangle r, int dx, int dy){
    struct point new_ul = {r.upper_left.x + dx, r.upper_left.y + dy};
    struct point new_lr = {r.lower_right.x + dx, r.lower_right.y + dy};
    struct rectangle new_r = {new_ul, new_lr};
    return new_r;
}

bool inside(struct rectangle r, struct point p){
    return (p.x > r.upper_left.x) && (p.x < r.lower_right.x) && (p.y < r.upper_left.y) && (p.y > r.lower_right.y);
}


int main(void) {

    printf("=== TEST 1: calculate_area ===\n");
    struct rectangle r1 = {{2, 10}, {8, 4}};
    printf("Area should be (8-2)*(10-4) = 36\n");
    printf("Calculated area: %d\n\n", calculate_area(r1));

    printf("=== TEST 2: calculate_center ===\n");
    struct point center = calculate_center(r1);
    printf("Center should be ((2+8)/2, (10+4)/2) = (5, 7)\n");
    printf("Calculated center: (%d, %d)\n\n", center.x, center.y);

    printf("=== TEST 3: move ===\n");
    struct rectangle r2 = move(r1, 3, -2);
    printf("Original UL=(2,10), LR=(8,4)\n");
    printf("Move by dx=3, dy=-2 => UL=(5,8), LR=(11,2)\n");
    printf("Calculated UL=(%d,%d), LR=(%d,%d)\n\n",
           r2.upper_left.x, r2.upper_left.y,
           r2.lower_right.x, r2.lower_right.y);

    printf("=== TEST 4: inside ===\n");
    struct point p1 = {5, 7};   // inside r1
    struct point p2 = {2, 10};  // on boundary → should be false
    struct point p3 = {20, 20}; // outside
    
    print_rectangle(r1);
    printf("Point (5,7) inside r1? Expected: true => %s\n",
           inside(r1, p1) ? "true" : "false");

    printf("Point (2,10) inside r1? Expected: false => %s\n",
           inside(r1, p2) ? "true" : "false");

    printf("Point (20,20) inside r1? Expected: false => %s\n",
           inside(r1, p3) ? "true" : "false");

    return 0;
}