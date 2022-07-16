//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSURL, WFDialogAttributions, WFDialogRequest, WFWorkflowRunningContext;

@protocol WFUIPresenterInterface <NSObject>

@optional
- (_Bool)showWebPage:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)returnFocusToOriginatingAppForRunningContext:(WFWorkflowRunningContext *)arg1 completionHandler:(void (^)(void))arg2;
- (void)bringDialogsToFrontForRunningContext:(WFWorkflowRunningContext *)arg1 completionHandler:(void (^)(void))arg2;
- (void)dismissPresentedContentForRunningContext:(WFWorkflowRunningContext *)arg1 completionHandler:(void (^)(void))arg2;
- (void)showDialogRequest:(WFDialogRequest *)arg1 runningContext:(WFWorkflowRunningContext *)arg2 completionHandler:(void (^)(WFDialogResponse *))arg3;
- (void)completePersistentModeWithSuccess:(_Bool)arg1 runningContext:(WFWorkflowRunningContext *)arg2 completion:(void (^)(void))arg3;
- (void)beginPersistentModeWithRunningContext:(WFWorkflowRunningContext *)arg1 attributions:(WFDialogAttributions *)arg2 completionHandler:(void (^)(void))arg3;
@end

