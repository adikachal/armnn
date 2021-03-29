//
// Copyright © 2017 Arm Ltd and Contributors. All rights reserved.
// SPDX-License-Identifier: MIT
//
#pragma once

#include "Workload.hpp"
#include "WorkloadUtils.hpp"

#include <armnn/backends/CpuTensorHandleFwd.hpp>

#include <utility>

namespace armnn
{

class SyncMemGenericWorkload : public BaseWorkload<MemSyncQueueDescriptor>
{
public:
    SyncMemGenericWorkload(const MemSyncQueueDescriptor& descriptor, const WorkloadInfo& info);
    void Execute() const override;
    void ExecuteAsync(WorkingMemDescriptor& descriptor) override;

private:
    ITensorHandle* m_TensorHandle;
};

} //namespace armnn
