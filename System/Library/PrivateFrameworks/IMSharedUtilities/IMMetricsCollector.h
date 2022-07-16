//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject
{
    NSObject<OS_dispatch_queue> *_metricsQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000006da80
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
- (id)_stringForSpamType:(unsigned long long)arg1;	// IMP=0x000000000006e458
- (void)trackSpamEvent:(unsigned long long)arg1 withDictionary:(id)arg2;	// IMP=0x000000000006e3ce
- (void)trackSpamEvent:(unsigned long long)arg1;	// IMP=0x000000000006e3ba
- (void)metricAttachmentValidation:(_Bool)arg1 attachmentSize:(id)arg2 operationalErrorDomain:(id)arg3 operationalErrorCode:(id)arg4 validationErrorDomain:(id)arg5 validationErrorCode:(id)arg6;	// IMP=0x000000000006e272
- (void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;	// IMP=0x000000000006e03b
- (void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;	// IMP=0x000000000006e00d
- (_Bool)trackEvent:(id)arg1 withDictionary:(id)arg2;	// IMP=0x000000000006df3e
- (_Bool)trackEvent:(id)arg1 withCount:(id)arg2;	// IMP=0x000000000006de6f
- (void)_trackEvent:(id)arg1 withDictionary:(id)arg2;	// IMP=0x000000000006de69
- (void)_trackEvent:(id)arg1 withCount:(id)arg2;	// IMP=0x000000000006de63
- (_Bool)trackEvent:(id)arg1 withStatistic:(id)arg2;	// IMP=0x000000000006dce1
- (void)_trackEvent:(id)arg1 withStatistic:(id)arg2;	// IMP=0x000000000006dcdb
- (_Bool)trackEvent:(id)arg1;	// IMP=0x000000000006dbd7
- (void)_trackEvent:(id)arg1;	// IMP=0x000000000006dbd1
- (void *)_ADClientSetValueForScalarKeyApiInit;	// IMP=0x000000000006dba5
- (void *)_ADClientPushValueForDistributionKeyApiInit;	// IMP=0x000000000006db79
- (void *)_ADClientAddValueForScalarKeyApiInit;	// IMP=0x000000000006db4d
- (void)dealloc;	// IMP=0x000000000006db13
- (id)init;	// IMP=0x000000000006dac5

@end
