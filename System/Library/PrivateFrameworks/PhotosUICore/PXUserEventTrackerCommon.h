//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXUserEventTrackerCommon : NSObject
{
    id _currentSessionSender;	// 8 = 0x8
    unsigned long long _currentSessionSource;	// 16 = 0x10
    unsigned long long _currentSessionTab;	// 24 = 0x18
    double _currentLogStateStartDate;	// 32 = 0x20
    double _currentLogSubStateStartDate;	// 40 = 0x28
    double _currentLogSubSubStateStartDate;	// 48 = 0x30
    _Bool _applicationIsInForeground;	// 56 = 0x38
    unsigned long long _currentTab;	// 64 = 0x40
    _Bool _enableDetailedDebugLogging;	// 72 = 0x48
    unsigned long long _currentLogState;	// 80 = 0x50
    unsigned long long _currentLogSubState;	// 88 = 0x58
    unsigned long long _currentLogSubSubState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000008d735d
@property(nonatomic) unsigned long long currentLogSubSubState; // @synthesize currentLogSubSubState=_currentLogSubSubState;
@property(nonatomic) unsigned long long currentLogSubState; // @synthesize currentLogSubState=_currentLogSubState;
@property(nonatomic) unsigned long long currentLogState; // @synthesize currentLogState=_currentLogState;
@property(readonly, nonatomic) _Bool enableDetailedDebugLogging; // @synthesize enableDetailedDebugLogging=_enableDetailedDebugLogging;
@property(nonatomic, setter=setCurrentTab:) unsigned long long currentTab; // @synthesize currentTab=_currentTab;
- (id)PXLogSubSubStateDescription:(unsigned long long)arg1;	// IMP=0x00000000008d72a8
- (id)PXLogSubStateDescription:(unsigned long long)arg1;	// IMP=0x00000000008d71fc
- (id)PXLogStateDescription:(unsigned long long)arg1;	// IMP=0x00000000008d7133
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1;	// IMP=0x00000000008d712d
- (void)didFinishViewingMemoriesFeedView;	// IMP=0x00000000008d7127
- (void)willViewMemoriesFeedView;	// IMP=0x00000000008d6f72
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000008d6f29
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000000008d6edd
- (void)logImpressionCountForEventSource:(unsigned long long)arg1;	// IMP=0x00000000008d6ed7
- (void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;	// IMP=0x00000000008d6ed1
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;	// IMP=0x00000000008d6e2a
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;	// IMP=0x00000000008d6d83
- (void)logViewCountForLogSubSubState:(unsigned long long)arg1;	// IMP=0x00000000008d6d7d
- (void)logViewCountForLogSubState:(unsigned long long)arg1;	// IMP=0x00000000008d6d77
- (void)logViewCountForLogState:(unsigned long long)arg1;	// IMP=0x00000000008d6d71
- (_Bool)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;	// IMP=0x00000000008d6d69
- (void)setCurrentLogState:(unsigned long long)arg1 logSubState:(unsigned long long)arg2 logSubSubState:(unsigned long long)arg3 forceLogging:(_Bool)arg4;	// IMP=0x00000000008d6c60
- (void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(_Bool)arg3;	// IMP=0x00000000008d68ad
- (void)eventSourceDidChange:(unsigned long long)arg1 sender:(id)arg2;	// IMP=0x00000000008d684a
- (void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2;	// IMP=0x00000000008d67e7
- (void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2;	// IMP=0x00000000008d6779
- (id)init;	// IMP=0x00000000008d6726

@end

