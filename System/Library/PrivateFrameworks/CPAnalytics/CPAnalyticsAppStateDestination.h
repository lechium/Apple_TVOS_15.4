//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider-Protocol.h>

@class CPAnalyticsScreenManager, NSArray, NSSet, NSString;

@interface CPAnalyticsAppStateDestination <CPAnalyticsDynamicPropertyProvider>
{
    CPAnalyticsScreenManager *_screenManager;	// 8 = 0x8
    NSSet *_appEventNames;	// 16 = 0x10
    NSArray *_sessionCounters;	// 24 = 0x18
    NSArray *_featureCounters;	// 32 = 0x20
}

+ (_Bool)_isValidSessionEndEvent:(id)arg1;	// IMP=0x0000000000012ced
- (void).cxx_destruct;	// IMP=0x0000000000012b32
@property(retain, nonatomic) NSArray *featureCounters; // @synthesize featureCounters=_featureCounters;
@property(retain, nonatomic) NSArray *sessionCounters; // @synthesize sessionCounters=_sessionCounters;
@property(readonly, nonatomic) NSSet *appEventNames; // @synthesize appEventNames=_appEventNames;
@property(readonly, nonatomic) CPAnalyticsScreenManager *screenManager; // @synthesize screenManager=_screenManager;
- (void)registerSystemProperties:(id)arg1;	// IMP=0x0000000000012aa4
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;	// IMP=0x00000000000129f5
- (id)allStandardProperties;	// IMP=0x00000000000128fe
- (void)_sendDashboardErrorEventForEvent:(id)arg1;	// IMP=0x0000000000012772
- (void)_sendDashboardErrorEventIfNeededForEvent:(id)arg1;	// IMP=0x00000000000126c2
- (void)_sendDashboardMediaEventForEvent:(id)arg1;	// IMP=0x0000000000012564
- (void)_sendDashboardMediaEventIfNeededForEvent:(id)arg1;	// IMP=0x0000000000012517
- (void)_sendDashboardAppEventForEvent:(id)arg1;	// IMP=0x0000000000012405
- (void)_sendDashboardScreenViewEventForEvent:(id)arg1;	// IMP=0x0000000000012362
- (_Bool)_shouldSendSampleWithRate:(unsigned long long)arg1;	// IMP=0x000000000001234e
- (void)_sendFeatureCounts;	// IMP=0x00000000000120d2
- (void)_sendAppSessionEventFromSourceEvent:(id)arg1 payload:(id)arg2;	// IMP=0x000000000001203c
- (id)_computeSessionData:(id)arg1;	// IMP=0x0000000000011cd6
- (void)_updateDependenciesBeforeProcessingEvent:(id)arg1;	// IMP=0x0000000000011c64
- (id)_validateAndParseAppEvents:(id)arg1;	// IMP=0x0000000000011a54
- (void)_resetCounters;	// IMP=0x00000000000117db
- (id)_createCountersFromScreenNames:(id)arg1;	// IMP=0x000000000001145c
- (id)_createCountersFromAppEvents:(id)arg1;	// IMP=0x00000000000111fa
- (id)_createCountersFromConfig:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000010fe3
- (void)processEvent:(id)arg1;	// IMP=0x0000000000010bf1
- (void)updateWithConfig:(id)arg1;	// IMP=0x000000000000fe0d
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;	// IMP=0x000000000000fb7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

