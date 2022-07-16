//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSIndexSet, NSMutableIndexSet, PXStoryModel;

@interface PXStoryBufferingController
{
    unsigned long long _activatedTime;	// 8 = 0x8
    CDStruct_2e59876b _overallBufferingDuration;	// 16 = 0x10
    CDStruct_2e59876b _lastNoncriticalBufferingDurationStore;	// 32 = 0x20
    CDStruct_2e59876b _lastCriticalBufferingDurationStore;	// 48 = 0x30
    CDStruct_2e59876b *_bufferingDurationsPerReason;	// 64 = 0x40
    _Bool _isActive;	// 72 = 0x48
    _Bool _isBuffering;	// 73 = 0x49
    PXStoryModel *_model;	// 80 = 0x50
    CDUnknownBlockType _onBufferingEnd;	// 88 = 0x58
    long long _overallReadinessStatus;	// 96 = 0x60
    NSMutableIndexSet *_bufferingReasonsStore;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006121ba
@property(readonly, nonatomic) NSMutableIndexSet *bufferingReasonsStore; // @synthesize bufferingReasonsStore=_bufferingReasonsStore;
@property(nonatomic) long long overallReadinessStatus; // @synthesize overallReadinessStatus=_overallReadinessStatus;
@property(copy, nonatomic) CDUnknownBlockType onBufferingEnd; // @synthesize onBufferingEnd=_onBufferingEnd;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak PXStoryModel *model; // @synthesize model=_model;
- (void)_accountForReason:(long long)arg1 status:(long long)arg2;	// IMP=0x0000000000611874
- (void)_updateModelProperties;	// IMP=0x00000000006117f6
- (void)_invalidateModelProperties;	// IMP=0x00000000006117b2
- (void)_updateOverallReadinessStatus;	// IMP=0x00000000006114d8
- (void)_invalidateOverallReadinessStatus;	// IMP=0x0000000000611494
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x0000000000611417
@property(readonly, nonatomic) NSDictionary *totalBufferingTimeIntervalsPerReason;
@property(readonly, nonatomic) NSIndexSet *bufferingReasons;
@property(readonly, nonatomic) double lastCriticalBufferingDuration;
@property(readonly, nonatomic) double lastNoncriticalBufferingDuration;
@property(readonly, nonatomic) double totalBufferingTimeInterval;
- (void)setIsActive:(_Bool)arg1;	// IMP=0x0000000000610fa4
- (void)configureUpdater:(id)arg1;	// IMP=0x0000000000610f22
- (void)dealloc;	// IMP=0x0000000000610ee1
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000610dc5
- (id)initWithObservableModel:(id)arg1;	// IMP=0x0000000000610d42

@end

