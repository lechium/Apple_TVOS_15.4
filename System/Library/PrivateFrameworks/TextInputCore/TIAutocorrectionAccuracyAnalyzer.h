//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionAnalyzing-Protocol.h>

@class NSString, TITypingSession;

@interface TIAutocorrectionAccuracyAnalyzer : NSObject <TITypingSessionAnalyzing>
{
    TITypingSession *_currentSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000053852
@property(retain, nonatomic) TITypingSession *currentSession; // @synthesize currentSession=_currentSession;
- (void)registerEventSpec;	// IMP=0x000000000005322a
- (_Bool)analyzeWordEntryAligned:(id)arg1;	// IMP=0x000000000005298e
- (_Bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;	// IMP=0x00000000000527d1
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;	// IMP=0x00000000000527b8
- (id)init;	// IMP=0x000000000005276c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

