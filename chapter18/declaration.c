typedef int *Fcn(void);
typedef Fcn *Fnc_ptr;
typedef Fnc_ptr Fnc_ptr_array[10];

Fnc_ptr_array x;
// 两者相等
int *(*x[10])(void);


