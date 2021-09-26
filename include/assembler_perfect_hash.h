/* x86 assembler
 * the-scientist@rootstorm.com
 * spl0its-r-us security
 */

#ifndef PERFECT_HASH_H
#define PERFECT_HASH_H

int
register_has_key(const char* key);
int
register_has_key(const char* reg);
int
sys_has_key(const char* key);

#endif // PERFECT_HASH_H