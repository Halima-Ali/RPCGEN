/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INTSTRING_H_RPCGEN
#define _INTSTRING_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct intstring {
	int i;
	char *s;
};
typedef struct intstring intstring;

#define STINT_PROG 0x19101925
#define STINT_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define STINT_STR 1
extern  float * stint_str_1(intstring *, CLIENT *);
extern  float * stint_str_1_svc(intstring *, struct svc_req *);
extern int stint_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define STINT_STR 1
extern  float * stint_str_1();
extern  float * stint_str_1_svc();
extern int stint_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_intstring (XDR *, intstring*);

#else /* K&R C */
extern bool_t xdr_intstring ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INTSTRING_H_RPCGEN */
