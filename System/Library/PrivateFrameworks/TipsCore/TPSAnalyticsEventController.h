//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/_TPSXPCExportable-Protocol.h>

@class NSString, TPSAnalyticsDataProvider, TPSDuetDataProvider, _TPSXPCConnection;
@protocol OS_dispatch_queue;

@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable>
{
    TPSDuetDataProvider *_duetDataProvider;	// 8 = 0x8
    TPSAnalyticsDataProvider *_dataProvider;	// 16 = 0x10
    _TPSXPCConnection *_xpcConnection;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000064049
- (void).cxx_destruct;	// IMP=0x0000000000064fca
@property(retain, nonatomic) _TPSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak TPSAnalyticsDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)remoteInterface;	// IMP=0x0000000000064f88
- (id)exportedInterface;	// IMP=0x0000000000064f80
- (void)connectionInterrupted;	// IMP=0x0000000000064f1e
- (void)connectionInvalidated;	// IMP=0x0000000000064ebc
- (void)_destroyXPCConnection;	// IMP=0x0000000000064e56
- (void)sendToCoreAnalytics:(id)arg1 eventName:(id)arg2;	// IMP=0x0000000000064d19
- (void)logAnalyticsEvents:(id)arg1;	// IMP=0x0000000000064acc
- (void)logAnalyticsEvent:(id)arg1;	// IMP=0x000000000006487b
- (void)logAnalyticsEventsFromTipsd:(id)arg1;	// IMP=0x00000000000641da
- (void)logAnalyticsEventFromTipsd:(id)arg1;	// IMP=0x0000000000064130
- (id)duetDataProvider;	// IMP=0x00000000000640f5
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

