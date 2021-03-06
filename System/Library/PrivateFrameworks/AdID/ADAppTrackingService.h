//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADSingleton.h>

#import <AdID/ADAppTracking_XPC-Protocol.h>
#import <AdID/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface ADAppTrackingService : ADSingleton <NSXPCListenerDelegate, ADAppTracking_XPC>
{
    _Bool _requestInFlight;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000000c067
- (void).cxx_destruct;	// IMP=0x000000000000cbf7
@property(nonatomic) _Bool requestInFlight; // @synthesize requestInFlight=_requestInFlight;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)latestPersonalizedAdsConsentVersion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cb3d
- (void)shouldAppStoreDisplayAdvertisingScreen:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ca43
- (void)shouldDisplayPersonalizedAdsUI:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c932
- (void)getAccountLevelSwitchDisabledReasonWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c869
- (void)setPersonalizedAds:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c65f
- (void)reconcileDataForRecord:(id)arg1;	// IMP=0x000000000000c4ce
- (void)sendPersonalizedAdsAndReconcileDataForRecord:(id)arg1;	// IMP=0x000000000000c3d0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000c193
- (id)init;	// IMP=0x000000000000c0f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

