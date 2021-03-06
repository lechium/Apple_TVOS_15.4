//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAudioSessionAssertionAcquisitionService-Protocol.h>

@class AFInstanceContext, NSString;

@interface AFAudioSessionAssertionRemoteAcquisitionService : NSObject <AFAudioSessionAssertionAcquisitionService>
{
    AFInstanceContext *_instanceContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001ba81
- (id)acquireAudioSessionAssertionWithContext:(id)arg1 relinquishmentHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b4a6
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x000000000001b409

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

