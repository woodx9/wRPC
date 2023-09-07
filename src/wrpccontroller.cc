#include "wrpccontroller.h"

WRpcController::WRpcController()
{
    m_failed = false;
    m_errText = "";
}

void WRpcController::Reset()
{
    m_failed = false;
    m_errText = "";
}

bool WRpcController::Failed() const
{
    return m_failed;
}

std::string WRpcController::ErrorText() const
{
    return m_errText;
}

void WRpcController::SetFailed(const std::string& reason)
{
    m_failed = true;
    m_errText = reason;
}

// 目前未实现具体的功能
void WRpcController::StartCancel(){}
bool WRpcController::IsCanceled() const {return false;}
void WRpcController::NotifyOnCancel(google::protobuf::Closure* callback) {}