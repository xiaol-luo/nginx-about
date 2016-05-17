#ifndef __NGX_HTTP_MYTEST_EXT_H__
#define __NGX_HTTP_MYTEST_EXT_H__

#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

typedef struct {
	ngx_str_t my_config_str;
	ngx_int_t my_config_num;
} ngx_http_mytest_diy_conf_t;

typedef struct 
{
	ngx_str_t my_str;
	ngx_int_t my_num;
	ngx_flag_t my_flag;
	size_t my_size;
	ngx_array_t *my_str_array;
	ngx_array_t *my_keyval;
	off_t my_off;
	ngx_msec_t my_msec;
	time_t my_sec;
	ngx_bufs_t my_bufs;
	ngx_uint_t my_enum_seq;
	ngx_uint_t my_bitmask;
	ngx_uint_t my_access;
	ngx_path_t *my_path;

	ngx_http_mytest_diy_conf_t my_diy_conf;
	
} ngx_http_mytest_conf_t;

void * ngx_http_mytest_create_loc_conf(ngx_conf_t *cf);

char * ngx_conf_set_diy_config(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);


#endif
