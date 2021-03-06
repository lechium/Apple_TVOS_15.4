//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, PXPeopleProgressDataSource;

@interface PXPeopleProgressManager : NSObject
{
    _Bool _monitoringProgress;	// 8 = 0x8
    _Bool _processingComplete;	// 9 = 0x9
    PXPeopleProgressDataSource *_dataSource;	// 16 = 0x10
    double _updateInterval;	// 24 = 0x18
    double _progress;	// 32 = 0x20
    unsigned long long _processingStatus;	// 40 = 0x28
    NSTimer *_statusTimer;	// 48 = 0x30
}

+ (_Bool)hasSubstantialProcessingRemainingUsingMinAssetCount:(_Bool)arg1 prioritizedProcessedCount:(unsigned long long)arg2 prioritizedTotalAllowedCount:(unsigned long long)arg3 pendingAssetCount:(unsigned long long)arg4 totalAssetCount:(unsigned long long)arg5;	// IMP=0x0000000000390bda
+ (_Bool)hasSubstantialProcessingRemainingUsingMinAssetCount:(_Bool)arg1 pendingAssetCount:(unsigned long long)arg2 totalAssetCount:(unsigned long long)arg3;	// IMP=0x0000000000390bac
- (void).cxx_destruct;	// IMP=0x000000000039090d
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(nonatomic) unsigned long long processingStatus; // @synthesize processingStatus=_processingStatus;
@property(readonly) _Bool processingComplete; // @synthesize processingComplete=_processingComplete;
@property double progress; // @synthesize progress=_progress;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic, getter=isMonitoringProgress) _Bool monitoringProgress; // @synthesize monitoringProgress=_monitoringProgress;
@property(retain, nonatomic) PXPeopleProgressDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_progressComplete:(double)arg1;	// IMP=0x000000000039086d
- (void)_updateStatusForProgress:(double)arg1 processCount:(unsigned long long)arg2;	// IMP=0x000000000039066a
- (void)_scheduleNextUpdate;	// IMP=0x0000000000390533
- (void)updateProgressWithForce:(_Bool)arg1;	// IMP=0x000000000039046a
- (_Bool)hasSubstantialProcessingRemainingUsingMinAssetCount:(_Bool)arg1;	// IMP=0x0000000000390360
@property(readonly) _Bool shouldUseProgressFooter;
@property(readonly) _Bool shouldUseInterstitial;
@property(readonly) _Bool featureUnlocked;
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000390191
- (id)init;	// IMP=0x0000000000390106

@end

