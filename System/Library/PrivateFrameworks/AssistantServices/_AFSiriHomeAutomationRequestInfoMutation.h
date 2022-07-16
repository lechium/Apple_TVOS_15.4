//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriHomeAutomationRequestInfoMutating-Protocol.h>

@class AFSiriHomeAutomationRequestInfo, NSData, NSString;

@interface _AFSiriHomeAutomationRequestInfoMutation : NSObject <AFSiriHomeAutomationRequestInfoMutating>
{
    AFSiriHomeAutomationRequestInfo *_baseModel;	// 8 = 0x8
    NSData *_context;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasContext:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e6dc5
- (id)generate;	// IMP=0x00000000000e6d18
- (void)setContext:(id)arg1;	// IMP=0x00000000000e6cf8
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000000000e6c8d
- (id)init;	// IMP=0x00000000000e6c79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

