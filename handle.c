#include "main.h"
/**
 * init-handle - initialize the fields to handle
 * @handle: :struct handler'
 * @hndl: 'argument pointer'
 * Return: No return.
*/
void init_handle(va_list hndl, handle_t *handler)
{
	(void)hndl;
	handle->unsign = 0;
	handle->plus_flag = 0;
	handle->space_flag = 0;
	handle->hashtag_flag = 0;
	handle->zero_flag = 0;
	handle->minus_flag = 0;
	handle->width = 0;
	handle->precision = UINT_MAX;
	handle->h_modifier = 0;
	handle->l_modifier = 0;
}
