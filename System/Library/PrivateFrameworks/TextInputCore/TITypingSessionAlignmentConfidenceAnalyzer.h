//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionAnalyzing-Protocol.h>

@class NSMutableDictionary, NSString, TITypingSession, TITypingSessionAligned;

@interface TITypingSessionAlignmentConfidenceAnalyzer : NSObject <TITypingSessionAnalyzing>
{
    TITypingSession *_session;	// 8 = 0x8
    TITypingSessionAligned *_alignedSession;	// 16 = 0x10
    NSMutableDictionary *_payload;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000087cb6
- (void)dispatchEventWithPayload:(id)arg1;	// IMP=0x0000000000087c30
- (void)registerEventSpec;	// IMP=0x0000000000087531
- (_Bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;	// IMP=0x00000000000871d9
- (id)_generateFeatureUsageMetricsForContext:(id)arg1;	// IMP=0x0000000000086faa
- (id)_generateMetadataForTypingSessionFromContext:(id)arg1;	// IMP=0x0000000000086d74
- (id)_generatePercentageOfTotalWordsForAlignmentConfidencesFromRawCounts:(id)arg1;	// IMP=0x0000000000086a20
- (id)_generateCountsOfWordsForAlignmentConfidences;	// IMP=0x0000000000086582
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;	// IMP=0x0000000000086569
- (id)init;	// IMP=0x0000000000086503

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

