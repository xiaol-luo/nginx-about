#include "ngx_http_mytest_ext.h"

ngx_int_t ngx_http_mytest_handler(ngx_http_request_t *r)
{
	ngx_int_t rc = ngx_http_discard_request_body(r);
	if (rc != NGX_OK) {
		return rc;
	}

	ngx_str_t type = ngx_string("text/plain");
	ngx_str_t response = ngx_string("Hello World!");
	r->headers_out.status = NGX_HTTP_OK;
	r->headers_out.content_length_n = response.len;
	r->headers_out.content_type = type;
	rc = ngx_http_send_header(r);
	if (rc == NGX_ERROR || rc > NGX_OK || r->header_only) {
		return rc;
	}

	ngx_buf_t *b;
	b = ngx_create_temp_buf(r->pool, response.len);
	if (b == NULL) {
		return NGX_HTTP_INTERNAL_SERVER_ERROR;
	}
	ngx_memcpy(b->pos, response.data, response.len);
	b->last = b->pos + response.len;
	b->last_buf = 1;

	ngx_chain_t out;
	out.buf = b;
	out.next = NULL;
	return ngx_http_output_filter(r, &out);
}

static char *ngx_http_mytest(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
	ngx_http_core_loc_conf_t *clcf;
	clcf = ngx_http_conf_get_module_loc_conf(cf, ngx_http_core_module);
	clcf->handler = ngx_http_mytest_handler;
	return NGX_CONF_OK;

}

ngx_str_t a = ngx_null_string;

static ngx_conf_enum_t test_enums[] = {
	{ ngx_string("apple"), 1 },
	{ ngx_string("banana"), 2 },
	{ ngx_string("orange"), 3 },
	{ ngx_null_string, 0 }
};

static ngx_conf_bitmask_t test_bitmasks[] = {
	{ ngx_string("good"), 0x0002 },
	{ ngx_string("better"), 0x0004 },
	{ ngx_string("best"), 0x0008 },
	{ ngx_null_string, 0 }
};

static ngx_command_t ngx_http_mytest_commands[] = {
	{ngx_string("mytest"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LMT_CONF|NGX_CONF_NOARGS,
	ngx_http_mytest,
	NGX_HTTP_LOC_CONF_OFFSET,
	0, 
	NULL},

	{ngx_string("test_flag"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_FLAG,
	ngx_conf_set_flag_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_flag),
	NULL},

	{ngx_string("test_str"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_str_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_str),
	NULL},

	{ngx_string("test_str_array"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_str_array_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_str_array),
	NULL},

	{ngx_string("test_keyval"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_keyval_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_keyval),
	NULL},

	{ngx_string("test_num"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_num_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_num),
	NULL},

	{ngx_string("test_size"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_size_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_size),
	NULL},

	{ngx_string("test_off"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_off_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_size),
	NULL},

	{ngx_string("test_msec"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_msec_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_msec),
	NULL},

	{ngx_string("test_sec"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_sec_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_sec),
	NULL},

	{ngx_string("test_bufs"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_bufs_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_bufs),
	NULL},

	{ngx_string("test_enum"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_enum_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_enum_seq),
	test_enums},

	{ngx_string("test_bitmask"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF,
	ngx_conf_set_bitmask_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_bitmask),
	test_bitmasks},

	{ngx_string("test_access"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE123,
	ngx_conf_set_access_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_access),
	test_bitmasks},

	{ngx_string("test_path"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE123,
	ngx_conf_set_path_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_path),
	test_bitmasks},

	{ngx_string("diy_config"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE12,
	ngx_conf_set_diy_config,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_mytest_conf_t, my_diy_conf),
	test_bitmasks},

	ngx_null_command
};

static ngx_http_module_t ngx_http_mytest_module_ctx = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ngx_http_mytest_create_loc_conf,
	NULL
};

ngx_module_t ngx_http_mytest_module = {
	NGX_MODULE_V1,
	&ngx_http_mytest_module_ctx,
	ngx_http_mytest_commands,
	NGX_HTTP_MODULE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NGX_MODULE_V1_PADDING
};

void * ngx_http_mytest_create_loc_conf(ngx_conf_t *cf)
{
	ngx_http_mytest_conf_t *mycf;
	mycf = (ngx_http_mytest_conf_t *)ngx_pcalloc(cf->pool, sizeof(ngx_http_mytest_conf_t));
	if (mycf == NULL){
		return NULL;
	}

	mycf->my_flag = NGX_CONF_UNSET;
	mycf->my_num = NGX_CONF_UNSET;
	mycf->my_str_array = NGX_CONF_UNSET_PTR;
	mycf->my_keyval = NULL;
	mycf->my_off = NGX_CONF_UNSET;
	mycf->my_msec = NGX_CONF_UNSET_MSEC;
	mycf->my_sec = NGX_CONF_UNSET;
	mycf->my_size = NGX_CONF_UNSET_SIZE;
	mycf->my_diy_conf.my_config_num = NGX_CONF_UNSET;

	return mycf;
}


char * ngx_conf_set_diy_config(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
	// conf 传入的是ngx_http_mytest_conf_t
	// cf 是nginx.conf中对应配置的内容
	
	ngx_str_t *values = NULL;
	ngx_http_mytest_diy_conf_t *mycf = NULL;

	mycf = (ngx_http_mytest_diy_conf_t *)conf + cmd->offset;
	values = cf->args->elts;

	if (cf->args->nelts > 1)
	{
		mycf->my_config_str = values[1]; 
	}
	if (cf->args->nelts > 2)
	{
		mycf->my_config_num = ngx_atoi(values[2].data, values[2].len);
		if (mycf->my_config_num == NGX_ERROR)
		{
			return "invalid number";
		}
	}

	return NGX_CONF_OK;
}
