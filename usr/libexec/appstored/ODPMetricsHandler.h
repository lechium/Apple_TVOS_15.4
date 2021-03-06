//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSEngagement, NSDictionary, NSString;

@interface ODPMetricsHandler
{
    NSString *_logKey;	// 8 = 0x8
    AMSEngagement *_engagement;	// 16 = 0x10
    NSDictionary *_powerMetrics;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001e7b43
@property(retain, nonatomic) NSDictionary *powerMetrics; // @synthesize powerMetrics=_powerMetrics;
@property(retain, nonatomic) AMSEngagement *engagement; // @synthesize engagement=_engagement;
- (id)_launchEventsSinceDate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001e6e55
- (id)_externalEventsWithPostedState:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000001e6bae
- (void)_enqueueEventsWithAMSEngagment:(id)arg1;	// IMP=0x00000000001e67cb
- (id)_createEventWithDictionary:(id)arg1 bundleID:(id)arg2 metadata:(id)arg3;	// IMP=0x00100000001e62bd
- (id)_crashEventsSinceDate:(id)arg1;	// IMP=0x00100000001e626e
- (id)_appEventsWithWithPostedState:(_Bool)arg1;	// IMP=0x00100000001e5f5e
- (id)_allEventsWithPostedState:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000001e5ab8
- (id)_createAggregateEventWithEvents:(id)arg1 topic:(id)arg2 eventType:(unsigned char)arg3;	// IMP=0x00100000001e5961
- (id)_aggregateEvents:(id)arg1 showPosted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001e5248
- (id)topic;	// IMP=0x00100000001e523b
- (_Bool)shouldCollectMetrics;	// IMP=0x00100000001e5233
- (void)resetMetrics;	// IMP=0x00100000001e4ca1
- (void)recordSupplementalAppMetricsEvents;	// IMP=0x00100000001e46e6
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x00100000001e3f26
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x00100000001e364c
- (void)postMetrics;	// IMP=0x00100000001e3506
- (id)logKey;	// IMP=0x00100000001e346f
- (id)getAppEventsWithError:(id *)arg1;	// IMP=0x00100000001e3455
- (id)deviceID;	// IMP=0x00100000001e32c4

@end

