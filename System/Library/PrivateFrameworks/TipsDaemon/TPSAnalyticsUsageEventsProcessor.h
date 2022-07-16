//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor
{
    NSDate *_currentDate;	// 8 = 0x8
}

+ (_Bool)_tipStatusValidForLiftProcessing:(id)arg1 contextualInfo:(id)arg2 firstShownDate:(id)arg3;	// IMP=0x00000000000207b7
+ (id)_firstShownDateForTipStatus:(id)arg1;	// IMP=0x0000000000020726
+ (id)_usageEventsProcessedKeyForIdentifier:(id)arg1;	// IMP=0x00000000000206fa
+ (id)_preHintRangeOutOfBoundsForIdentifier:(id)arg1;	// IMP=0x00000000000206ce
+ (id)_preHintUsageKeyForIdentifier:(id)arg1;	// IMP=0x00000000000206a2
- (void).cxx_destruct;	// IMP=0x00000000000208df
- (void)setCurrentDate:(id)arg1;	// IMP=0x00000000000208cb
- (void)_countsForPredicate:(id)arg1 streamName:(id)arg2 interval:(id)arg3 userStore:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000020409
- (void)_saveHistoricalUsage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ffc6
- (void)_savePreHintRangeOutOfBounds:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000001ff16
- (void)_calculateLift:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fbe8
- (void)resetAnalytics;	// IMP=0x000000000001fa92
- (void)processAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ea08
- (id)init;	// IMP=0x000000000001e99b

@end
