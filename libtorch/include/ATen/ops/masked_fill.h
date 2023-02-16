#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/masked_fill_ops.h>

namespace at {


// aten::masked_fill.Scalar(Tensor self, Tensor mask, Scalar value) -> Tensor
inline at::Tensor masked_fill(const at::Tensor & self, const at::Tensor & mask, const at::Scalar & value) {
    return at::_ops::masked_fill_Scalar::call(self, mask, value);
}

// aten::masked_fill.Tensor(Tensor self, Tensor mask, Tensor value) -> Tensor
inline at::Tensor masked_fill(const at::Tensor & self, const at::Tensor & mask, const at::Tensor & value) {
    return at::_ops::masked_fill_Tensor::call(self, mask, value);
}

// aten::masked_fill.Scalar_out(Tensor self, Tensor mask, Scalar value, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & masked_fill_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & mask, const at::Scalar & value) {
    return at::_ops::masked_fill_Scalar_out::call(self, mask, value, out);
}
// aten::masked_fill.Scalar_out(Tensor self, Tensor mask, Scalar value, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & masked_fill_outf(const at::Tensor & self, const at::Tensor & mask, const at::Scalar & value, at::Tensor & out) {
    return at::_ops::masked_fill_Scalar_out::call(self, mask, value, out);
}

// aten::masked_fill.Tensor_out(Tensor self, Tensor mask, Tensor value, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & masked_fill_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & mask, const at::Tensor & value) {
    return at::_ops::masked_fill_Tensor_out::call(self, mask, value, out);
}
// aten::masked_fill.Tensor_out(Tensor self, Tensor mask, Tensor value, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & masked_fill_outf(const at::Tensor & self, const at::Tensor & mask, const at::Tensor & value, at::Tensor & out) {
    return at::_ops::masked_fill_Tensor_out::call(self, mask, value, out);
}

}
