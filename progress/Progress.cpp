#include "stdafx.h"
#include "Progress.h"
//Add comment
void ProgressView::handleCancel() {
  _controller->onCancel();
}
void ProgressView::onFinish() {
}
int ProgressView::ShowView() {
  _controller->onViewReady();
  return 0;
}
void ProgressModel::done() {
    _controller->onModelDone();
}
