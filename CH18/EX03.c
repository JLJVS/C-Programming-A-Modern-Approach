/* 

extern float a;

linkage     -> variable defined externally 
duration    -> entire program run
scope       -> file


void f(register double b){
static int c;
auto char d;}

register double b 

linkage     -> no linkage
duration    -> automatic
scope       -> block

static int c 

linkage     -> no linkage
duration    -> static allocated once and persists for program run
scope       -> block

auto char d

linkage     -> no linkage
duration    -> automatic duration
scope       -> block
*/