//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOCountryConfigurationServerProxy-Protocol.h>

@class NSString;
@protocol GEOCancellable, OS_dispatch_queue, OS_dispatch_source, _GEOCountryConfigurationServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <_GEOCountryConfigurationServerProxyDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;	// 32 = 0x20
    id _countryCodeOverrideChangeListener;	// 40 = 0x28
    id <GEOCancellable> _geoIPLookupTask;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006e78ee
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e7815
- (void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e6dcc
- (void)_determineGeoIPCountryCode:(CDUnknownBlockType)arg1;	// IMP=0x00000000006e68f8
- (void)_determineCurrentCountryCode:(CDUnknownBlockType)arg1;	// IMP=0x00000000006e6844
- (void)_scheduleUpdate;	// IMP=0x00000000006e66e1
- (void)_reachabilityChanged:(id)arg1;	// IMP=0x00000000006e648f
- (void)dealloc;	// IMP=0x00000000006e6403
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x00000000006e6126

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
