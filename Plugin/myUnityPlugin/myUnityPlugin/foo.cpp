#include "pch.h"
#include "foo.h"
Foo::Foo(int f_new) : f(f_new) {

}
int Foo::foo(int bar) {
	return bar + 1;
}