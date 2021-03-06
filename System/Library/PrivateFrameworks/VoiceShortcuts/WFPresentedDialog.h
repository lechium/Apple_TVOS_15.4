//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WFDialogRequest, WFDialogResponse, WFWorkflowRunningContext;

@interface WFPresentedDialog : NSObject
{
    WFDialogRequest *_request;	// 8 = 0x8
    WFDialogResponse *_response;	// 16 = 0x10
    unsigned long long _presentationMode;	// 24 = 0x18
    WFWorkflowRunningContext *_context;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000032dc8
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) WFWorkflowRunningContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) WFDialogResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) WFDialogRequest *request; // @synthesize request=_request;
- (id)initWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000032ca0

@end

