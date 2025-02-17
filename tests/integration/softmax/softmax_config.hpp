/*******************************************************************************
 * Copyright (c) 2023-2024 Intel Corporation
 *
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
 *******************************************************************************/
#ifndef TRITONBENCHMARK_TEST_H
#define TRITONBENCHMARK_TEST_H

#include <sycl.hpp>

class mat1_4096x256_bf16_cfg0 {
public:
    static constexpr size_t mat_m = 4096;
    static constexpr size_t mat_n = 256;
    static constexpr size_t wg_m = 4; // 1 4 8 16
    static constexpr size_t wg_n = mat_n;
    static constexpr size_t sg_m = 1;
    static constexpr size_t sg_n = mat_n;
    using data_type_in = sycl::ext::oneapi::bfloat16;
    using data_type_out = sycl::ext::oneapi::bfloat16;
    using data_type_acc = float;
};

class mat1_4096x1024_bf16_cfg0 {
public:
    static constexpr size_t mat_m = 4096;
    static constexpr size_t mat_n = 1024;
    static constexpr size_t wg_m = 1; // 1 4 8 16
    static constexpr size_t wg_n = mat_n;
    static constexpr size_t sg_m = 1;
    static constexpr size_t sg_n = mat_n / 8;
    using data_type_in = sycl::ext::oneapi::bfloat16;
    using data_type_out = sycl::ext::oneapi::bfloat16;
    using data_type_acc = float;
};

class mat1_4096x2048_bf16_cfg0 {
public:
    static constexpr size_t mat_m = 4096;
    static constexpr size_t mat_n = 2048;
    static constexpr size_t wg_m = 1; // 1 4 8 16
    static constexpr size_t wg_n = mat_n;
    static constexpr size_t sg_m = 1;
    static constexpr size_t sg_n = mat_n / 8;
    using data_type_in = sycl::ext::oneapi::bfloat16;
    using data_type_out = sycl::ext::oneapi::bfloat16;
    using data_type_acc = float;
};

class mat1_4096x4096_bf16_cfg0 {
public:
    static constexpr size_t mat_m = 4096;
    static constexpr size_t mat_n = 4096;
    static constexpr size_t wg_m = 1; // 1 4 8 16
    static constexpr size_t wg_n = mat_n;
    static constexpr size_t sg_m = 1;
    static constexpr size_t sg_n = wg_n / 32;
    using data_type_in = sycl::ext::oneapi::bfloat16;
    using data_type_out = sycl::ext::oneapi::bfloat16;
    using data_type_acc = float;
};

class mat1_4096x8192_bf16_cfg1 {
public:
    static constexpr size_t mat_m = 4096;
    static constexpr size_t mat_n = 8192;
    static constexpr size_t wg_m = 1;
    static constexpr size_t wg_n = mat_n;
    static constexpr size_t sg_m = 1;
    static constexpr size_t sg_n = mat_n / 32;
    using data_type_in = sycl::ext::oneapi::bfloat16;
    using data_type_out = sycl::ext::oneapi::bfloat16;
    using data_type_acc = float;
};

#endif // TRITONBENCHMARK_TEST_H
