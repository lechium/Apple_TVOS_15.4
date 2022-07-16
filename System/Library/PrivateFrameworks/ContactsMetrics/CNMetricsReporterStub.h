//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsMetrics/CNMetricsReporter-Protocol.h>

@class NSString;

@interface CNMetricsReporterStub : NSObject <CNMetricsReporter>
{
}

- (void)logSimpleEvent:(id)arg1 forApplication:(id)arg2 andLog:(_Bool)arg3;	// IMP=0x00000000000029e8
- (void)sendDictionary:(id)arg1 forEvent:(id)arg2 andLog:(_Bool)arg3;	// IMP=0x00000000000029e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

