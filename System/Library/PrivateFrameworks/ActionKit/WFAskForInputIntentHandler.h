//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFAskForInputIntentHandling-Protocol.h>

@class NSString;

@interface WFAskForInputIntentHandler : NSObject <WFAskForInputIntentHandling>
{
    _Bool _resolvedValue;	// 8 = 0x8
}

@property(nonatomic) _Bool resolvedValue; // @synthesize resolvedValue=_resolvedValue;
- (void)handleAskForInput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023eccd
- (void)resolveDateAndTimeAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023eb95
- (void)resolveTimeAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023ea5d
- (void)resolveDateAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e925
- (void)resolveUrlAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e7ed
- (void)resolveDefaultURLAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e77d
- (void)resolveNumberAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e631
- (void)resolveStringAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e4da
- (void)resolveTypeForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e418
- (void)resolveQuestionForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e2d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

