//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@class AFInstanceContext, AFSiriHomeAutomationRequestInfo;

@interface AFSiriHomeAutomationBackgroundRequest : NSObject <AFSiriExternalRequest>
{
    AFSiriHomeAutomationRequestInfo *_requestInfo;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014bbbd
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000014b840
- (id)initWithRequestInfo:(id)arg1 instanceContext:(id)arg2;	// IMP=0x000000000014b76c
- (id)initWithRequestInfo:(id)arg1;	// IMP=0x000000000014b6eb

@end

