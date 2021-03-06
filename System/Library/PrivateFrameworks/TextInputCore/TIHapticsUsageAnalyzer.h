//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionAnalyzing-Protocol.h>

@class NSString;

@interface TIHapticsUsageAnalyzer : NSObject <TITypingSessionAnalyzing>
{
}

+ (id)bucketForTime:(double)arg1;	// IMP=0x000000000001bd24
+ (id)idleTimeBuckets;	// IMP=0x000000000001bd17
- (void)registerEventSpec;	// IMP=0x000000000001b977
- (void)dispatchIdleEventType:(id)arg1 idleTime:(double)arg2 session:(id)arg3;	// IMP=0x000000000001b84b
- (void)dispatchSessionEventWithActiveTime:(double)arg1 visibleTime:(double)arg2 session:(id)arg3;	// IMP=0x000000000001b573
- (_Bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;	// IMP=0x000000000001af93
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;	// IMP=0x000000000001af7a
- (id)init;	// IMP=0x000000000001af2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

