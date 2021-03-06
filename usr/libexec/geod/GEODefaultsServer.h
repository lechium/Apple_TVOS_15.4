//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOXPCActivity, NSMapTable, NSString, geo_isolater;

@interface GEODefaultsServer : GEOServer
{
    GEOXPCActivity *_activity;	// 16 = 0x10
    unsigned long long _stateCaptureHandle;	// 24 = 0x18
    geo_isolater *_peersIsolater;	// 32 = 0x20
    NSMapTable *_peerHelpers;	// 40 = 0x28
}

+ (id)_acceptableKeys;	// IMP=0x002000000002d838
+ (unsigned long long)launchMode;	// IMP=0x00100000000158ea
+ (id)identifier;	// IMP=0x00100000000158dd
- (void).cxx_destruct;	// IMP=0x0010000000030948
- (void)removeChangeListenerForWithMessage:(id)arg1;	// IMP=0x001000000003061a
- (void)addChangeListenerForWithMessage:(id)arg1;	// IMP=0x00100000000303ca
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x0010000000030311
- (void)peerDidConnect:(id)arg1;	// IMP=0x0010000000030216
- (void)setExpiringKeyWithRequest:(id)arg1;	// IMP=0x001000000003016d
- (void)getAllExpiringKeysWithRequest:(id)arg1;	// IMP=0x00100000000300aa
- (void)getAllValuesFromConfigStoreWithMessage:(id)arg1;	// IMP=0x001000000002ff9d
- (void)setValueForKeyInXPCConfigStoreWithMessage:(id)arg1;	// IMP=0x001000000002fbb2
- (void)setValueForKeyInConfigStoreWithMessage:(id)arg1;	// IMP=0x001000000002f642
- (void)getValueForKeyFromXPCConfigStoreWithMessage:(id)arg1;	// IMP=0x001000000002f44f
- (void)getValueForKeyFromConfigStoreWithMessage:(id)arg1;	// IMP=0x001000000002f25c
- (void)setDefaultWithMessage:(id)arg1;	// IMP=0x001000000002ee0a
- (void)_notifyListenersOfKeysChange:(id)arg1 source:(long long)arg2 postInternalNotification:(_Bool)arg3 triggerWatchSync:(_Bool)arg4;	// IMP=0x001000000002ea13
- (void)_notifyChangedKeys:(id)arg1 source:(long long)arg2 postInternalNotification:(_Bool)arg3 triggerWatchSync:(_Bool)arg4;	// IMP=0x001000000002e893
- (void)_expiringKeysChanged:(id)arg1;	// IMP=0x001000000002e567
- (void)_configKeysChanged:(id)arg1;	// IMP=0x001000000002e392
- (void)_experimentChanged:(id)arg1;	// IMP=0x001000000002e372
- (void)_networkDefaultsChanged:(id)arg1;	// IMP=0x001000000002e352
- (void)resetAllDefaultsWithMessage:(id)arg1;	// IMP=0x001000000002e310
- (void)updateNetworkDefaultsWithMessage:(id)arg1;	// IMP=0x001000000002e126
- (void)_validatePeer:(id)arg1 canSetKey:(id)arg2 callingSetterIfAcceptable:(CDUnknownBlockType)arg3;	// IMP=0x001000000002de69
- (void)_registerXPCActivityTimer;	// IMP=0x001000000002dcdc
- (void)dealloc;	// IMP=0x001000000002dc4a
- (id)init;	// IMP=0x001000000002d8a8
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000158f5
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x001000000003098a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

