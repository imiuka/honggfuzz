/*
 *
 * honggfuzz - Intel PT decoder
 * -----------------------------------------
 *
 * Author: Robert Swiecki <swiecki@google.com>
 *
 * Copyright 2010-2016 by Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * permissions and limitations under the License.
 *
 */

#ifndef _HF_LINUX_PT_H_
#define _HF_LINUX_PT_H_

#include "common.h"

#include <linux/perf_event.h>
#include <stdint.h>

extern void arch_ptAnalyze(struct perf_event_mmap_page *pem, uint8_t * auxBuf,
                           dynFileMethod_t method, void (*add_branch) (uint64_t from, uint64_t to));

#endif                          /* _HF_LINUX_INTEL_PT_LIB */