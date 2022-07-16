//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class CNContactStore, CNFavorites, DNDSAuxiliaryStateMonitor, NSMutableArray, NSString;
@protocol DNDSEventBehaviorResolverDataSource, DNDSModeRepository, OS_dispatch_queue;

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <DNDSModeRepository> _modeRepository;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    DNDSAuxiliaryStateMonitor *_auxiliaryStateMonitor;	// 32 = 0x20
    CNFavorites *_favorites;	// 40 = 0x28
    NSMutableArray *_resolutionRecord;	// 48 = 0x30
    id <DNDSEventBehaviorResolverDataSource> _dataSource;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000011e74
@property(nonatomic) __weak id <DNDSEventBehaviorResolverDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_queue_shouldAdjustEventBehaviorForMirroring;	// IMP=0x0000000000011dd7
- (id)_queue_firstContactForPredicate:(id)arg1;	// IMP=0x0000000000011c59
- (_Bool)_queue_isBreakthroughAllowedForSender:(id)arg1 eventType:(unsigned long long)arg2 clientDetails:(id)arg3 date:(id)arg4 reason:(out unsigned long long *)arg5;	// IMP=0x0000000000011b3f
- (_Bool)_queue_isBreakthroughAllowedForConfiguration:(id)arg1 application:(id)arg2 sender:(id)arg3 urgency:(unsigned long long)arg4 eventType:(unsigned long long)arg5 threadIdentifier:(id)arg6 notifyAnyway:(_Bool)arg7 reason:(out unsigned long long *)arg8;	// IMP=0x00000000000102b2
- (_Bool)_queue_eventSourceIsEmergencyContact:(id)arg1;	// IMP=0x000000000000feb6
- (_Bool)_queue_eventSourceIsRepeat:(id)arg1 clientDetails:(id)arg2 date:(id)arg3;	// IMP=0x000000000000fba1
- (_Bool)_queue_eventSourceIsContact:(id)arg1 inGroupWithIdentifier:(id)arg2;	// IMP=0x000000000000f5aa
- (_Bool)_queue_eventSourceIsContact:(id)arg1;	// IMP=0x000000000000f300
- (_Bool)_queue_eventSourceIsFavorite:(id)arg1;	// IMP=0x000000000000ef00
- (unsigned long long)_queue_resolveOutcomeForEventSender:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 reason:(out unsigned long long *)arg4;	// IMP=0x000000000000ebc7
- (id)_queue_resolutionForModeWithConfiguration:(id)arg1 eventDetails:(id)arg2 clientDetails:(id)arg3 activeModeUUID:(id)arg4 date:(id)arg5 error:(id *)arg6;	// IMP=0x000000000000e7de
- (id)_legacyModeConfigurationForModeConfiguration:(id)arg1;	// IMP=0x000000000000e68f
- (id)_activeModeConfigurationForBehavior:(unsigned long long)arg1;	// IMP=0x000000000000e5d4
- (id)_queue_adjustEventBehaviorResolutionForAuxiliaryState:(id)arg1;	// IMP=0x000000000000e311
- (id)_queue_resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000dd7e
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(_Bool)arg2;	// IMP=0x000000000000d9d6
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (id)resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000d6aa
- (void)dealloc;	// IMP=0x000000000000d674
- (id)initWithModeRepository:(id)arg1 contactStore:(id)arg2 auxiliaryStateMonitor:(id)arg3;	// IMP=0x000000000000d534
- (id)resolutionForConfiguration:(id)arg1 eventDetails:(id)arg2 clientDetails:(id)arg3 date:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000011ed1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

