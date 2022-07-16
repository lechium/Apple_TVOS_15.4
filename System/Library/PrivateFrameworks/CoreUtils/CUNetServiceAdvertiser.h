//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBonjourAdvertiser, CUNANPublisher, NSDictionary, NSMutableDictionary, NSSet, NSString, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface CUNetServiceAdvertiser : NSObject
{
    _Bool _activated;	// 8 = 0x8
    CUBonjourAdvertiser *_awdlBonjourAdvertiser;	// 16 = 0x10
    NSMutableDictionary *_bleDevices;	// 24 = 0x18
    SFDeviceDiscovery *_bleDiscovery;	// 32 = 0x20
    unsigned long long _bleDiscoveryFlags;	// 40 = 0x28
    CUBonjourAdvertiser *_infraBonjourAdvertiser;	// 48 = 0x30
    _Bool _invalidateCalled;	// 56 = 0x38
    _Bool _invalidateDone;	// 57 = 0x39
    CUNANPublisher *_nanPublisher;	// 64 = 0x40
    struct LogCategory *_ucat;	// 72 = 0x48
    _Bool _updatePending;	// 80 = 0x50
    _Bool _blePeerFilterChanged;	// 81 = 0x51
    _Bool _portChanged;	// 82 = 0x52
    _Bool _serviceInfoChanged;	// 83 = 0x53
    _Bool _serviceTypeChanged;	// 84 = 0x54
    int _awdlControl;	// 88 = 0x58
    int _infraControl;	// 92 = 0x5c
    int _nanControl;	// 96 = 0x60
    int _port;	// 100 = 0x64
    NSSet *_blePeerFilter;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
    CDUnknownBlockType _invalidationHandler;	// 120 = 0x78
    NSString *_label;	// 128 = 0x80
    NSDictionary *_serviceInfo;	// 136 = 0x88
    NSString *_serviceType;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000007c1cb
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(nonatomic) int port; // @synthesize port=_port;
@property(nonatomic) int nanControl; // @synthesize nanControl=_nanControl;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) int infraControl; // @synthesize infraControl=_infraControl;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSSet *blePeerFilter; // @synthesize blePeerFilter=_blePeerFilter;
@property(nonatomic) int awdlControl; // @synthesize awdlControl=_awdlControl;
- (void)_nanAdvertiserEnsureStopped;	// IMP=0x000000000007c0ac
- (void)_nanAdvertiserEnsureStarted;	// IMP=0x000000000007be8f
- (void)_infraBonjourAdvertiserEnsureStopped;	// IMP=0x000000000007bdf9
- (void)_infraBonjourAdvertiserEnsureStarted;	// IMP=0x000000000007bc13
- (void)_bleTriggerDeviceLost:(id)arg1;	// IMP=0x000000000007bb24
- (void)_bleTriggerDeviceFound:(id)arg1;	// IMP=0x000000000007ba09
- (void)_bleTriggerEnsureStopped;	// IMP=0x000000000007b982
- (void)_bleTriggerEnsureStarted;	// IMP=0x000000000007b797
- (void)_awdlBonjourAdvertiserEnsureStopped;	// IMP=0x000000000007b701
- (void)_awdlBonjourAdvertiserEnsureStarted;	// IMP=0x000000000007b503
- (void)_updateLocked;	// IMP=0x000000000007b48c
- (void)_invalidated;	// IMP=0x000000000007b3df
- (void)_invalidate;	// IMP=0x000000000007b33e
- (void)invalidate;	// IMP=0x000000000007b2f3
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b22f
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b09e
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007afed
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000007aa92
- (id)description;	// IMP=0x000000000007aa7b
- (void)dealloc;	// IMP=0x000000000007aa2e
- (id)init;	// IMP=0x000000000007a9b3

@end
