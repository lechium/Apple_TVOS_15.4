//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFMyriadContextMutating-Protocol.h>

@class AFMyriadContext, AFMyriadGoodnessScoreOverrideState, AFMyriadPerceptualAudioHash, NSString;

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating>
{
    AFMyriadContext *_baseModel;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;	// 24 = 0x18
    AFMyriadGoodnessScoreOverrideState *_overrideState;	// 32 = 0x20
    long long _activationSource;	// 40 = 0x28
    unsigned long long _activationExpirationTime;	// 48 = 0x30
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasPerceptualAudioHash:1;
        unsigned int hasOverrideState:1;
        unsigned int hasActivationSource:1;
        unsigned int hasActivationExpirationTime:1;
    } _mutationFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003776d
- (id)generate;	// IMP=0x00000000000375cf
- (void)setActivationExpirationTime:(unsigned long long)arg1;	// IMP=0x00000000000375c1
- (void)setActivationSource:(long long)arg1;	// IMP=0x00000000000375b3
- (void)setOverrideState:(id)arg1;	// IMP=0x0000000000037593
- (void)setPerceptualAudioHash:(id)arg1;	// IMP=0x0000000000037573
- (void)setTimestamp:(unsigned long long)arg1;	// IMP=0x0000000000037565
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000000000374fa
- (id)init;	// IMP=0x00000000000374e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
