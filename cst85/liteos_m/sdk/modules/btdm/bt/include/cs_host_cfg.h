/*
 * Copyright (c) 2021 Chipsea Technologies (Shenzhen) Corp., Ltd. All rights reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/***
 * cs_host_cfg.h
 */

#ifndef CS_HOST_CFG_H
#define CS_HOST_CFG_H
#include <stdbool.h>

typedef struct {
    bool support_sniff;
    bool multiple_phone;
    bool support_aon;
    bool support_sleep;
    unsigned char rom_version;
}cs_host_cfg_t;

#endif /* CS_HOST_CFG_H */
