struct Coro
{
	size_t requestedStackSize;
	size_t allocatedStackSize;
	void *stack;
	ucontext_t env;
	unsigned char isMain;
};

Coro *Coro_new(void);
//void *Coro_stack(Coro *self);
//void Coro_initializeMainCoro(Coro *self);
//void Coro_switchTo_(Coro *self, Coro *next);
//void Coro_setup(Coro *self, void *arg);
//void Coro_startCoro_(Coro *self, Coro *other, void *context, CoroStartCallback *callback);
