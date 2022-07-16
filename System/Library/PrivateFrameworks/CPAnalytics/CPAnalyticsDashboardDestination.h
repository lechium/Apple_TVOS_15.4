//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDestination-Protocol.h>

@class CPAnalytics, NSArray, NSString;

@interface CPAnalyticsDashboardDestination : NSObject <CPAnalyticsDestination>
{
    CPAnalytics *_cpAnalyticsInstance;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004cbb
@property(readonly, nonatomic) __weak CPAnalytics *cpAnalyticsInstance; // @synthesize cpAnalyticsInstance=_cpAnalyticsInstance;
- (void)reportMalformedEvent:(id)arg1 malformationDescriptionWithFormat:(id)arg2;	// IMP=0x0000000000004b08
- (id)buildCoreAnalyticsEventPayloadWithProperties:(id)arg1 fromSourceEvent:(id)arg2 intoTargetEventPayload:(id)arg3;	// IMP=0x0000000000004892
- (void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:(id)arg1 fromSourceEvent:(id)arg2 payload:(id)arg3;	// IMP=0x00000000000047c0
- (_Bool)isMediaEvent:(id)arg1;	// IMP=0x000000000000476e
@property(readonly, nonatomic) NSArray *allErrorProperties;
@property(readonly, nonatomic) NSArray *allMediaProperties;
@property(readonly, nonatomic) NSArray *allStandardProperties;
- (void)updateWithConfig:(id)arg1;	// IMP=0x00000000000044d2
- (void)processEvent:(id)arg1;	// IMP=0x00000000000044c0
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;	// IMP=0x000000000000445c
- (id)init;	// IMP=0x0000000000004453

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool disabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

