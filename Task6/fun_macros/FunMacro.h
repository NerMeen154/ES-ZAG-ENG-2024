
#ifndef _FUNMACRO_H_
#define _FUNMACRO_H_

#define SET_BIT(VAR,BIT_POS) ((VAR)|= (1<<(BIT_POS)))
#define CLEAR_BIT(VAR,BIT_POS) ((VAR)&= ~(1<<(BIT_POS)))
#define TOGGLE_BIT(VAR,BIT_POS) ((VAR)^= 1<<(BIT_POS))

#endif // _FUNMACRO_H_
