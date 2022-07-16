//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERelevanceEngineMetricsRecorder-Protocol.h>

@class NSString;

@interface REClockFaceMetricsSubmitter : NSObject <RERelevanceEngineMetricsRecorder>
{
}

- (void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2;	// IMP=0x0000000000073ff1
- (void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;	// IMP=0x0000000000073f43
- (_Bool)_shouldRecordMetrics;	// IMP=0x0000000000073f3b
- (_Bool)_runningInTest;	// IMP=0x0000000000073ef3
- (_Bool)_runningInClockFace;	// IMP=0x0000000000073e27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

