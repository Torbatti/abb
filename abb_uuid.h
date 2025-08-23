/*
 * Copyright (c) 2025 Arya Bakhtiari
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
*/

#ifndef ABB_UUID_IMPL
#define ABB_UUID_IMPL

/*
 * VERSION: UNTRACKED
*/

/*
 * DOCUMENTATION:
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*
*/
typedef struct abbuuid_Uuid
{
  unsigned char bytes[16];
} abbuuid_Uuid;

/*
*/
#define abbuuid_INIT_SUCCESS 0
#define abbuuid_INIT_FAILURE -1

/*
*/
#define abbuuid_NIL {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#define abbuuid_MAX {{255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255}}

/*
*/
#ifdef ABB_UUID_DUMMY
static int abbuuid_initDummy(abbuuid_Uuid* uuid){
  /* err: char is not 1 byte! */
  char a_char = 0;
  if(sizeof(a_char) != 1){return abbuuid_INIT_FAILURE;}

  uuid->bytes[0] = 0xcc;
  uuid->bytes[1] = 0xcc;
  uuid->bytes[2] = 0xcc;
  uuid->bytes[3] = 0xcc;
  uuid->bytes[4] = 0xcc;
  uuid->bytes[5] = 0xcc;
  uuid->bytes[6] = 0xcc;
  uuid->bytes[7] = 0xcc;
  uuid->bytes[8] = 0xcc;
  uuid->bytes[9] = 0xcc;
  uuid->bytes[10] = 0xcc;
  uuid->bytes[11] = 0xcc;
  uuid->bytes[12] = 0xcc;
  uuid->bytes[13] = 0xcc;
  uuid->bytes[14] = 0xcc;
  uuid->bytes[15] = 0xcc;

  return abbuuid_INIT_SUCCESS;
}
#endif /* ABB_UUID_DUMMY */

/*
*/
#ifdef ABB_UUID_V4
static int abbuuid_initV4(abbuuid_Uuid* uuid){

  return 0;
}
#endif /* ABB_UUID_V4 */

/*
*/
#ifdef ABB_UUID_INITV7
static int abbuuid_initV7(abbuuid_Uuid* uuid){

  return 0;
}
#endif /* ABB_UUID_V7 */

#ifdef __cplusplus
}
#endif

#endif /* ABB_UUID_IMPL */
  
/*
 * CHANGELOG:
*/
