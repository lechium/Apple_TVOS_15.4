//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/ISSingleton-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton>
{
    long long _biometricStyle;	// 8 = 0x8
    unsigned long long _daemonLaunchCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_guid;	// 32 = 0x20
    double _lastFreeSpaceRequest;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000000003438
+ (void)setSharedInstance:(id)arg1;	// IMP=0x00000000000033ef
- (int)_deviceClass;	// IMP=0x00000000000040c8
- (id)supportedOfferDeviceForDevices:(id)arg1;	// IMP=0x0000000000003f3a
- (void)resetLocationAndPrivacy;	// IMP=0x0000000000003dfc
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003ba2
- (_Bool)takePowerAssertion:(id)arg1;	// IMP=0x0000000000003a50
@property(readonly) NSString *systemName;
@property(readonly) NSString *serialNumber;
- (_Bool)releasePowerAssertion:(id)arg1;	// IMP=0x000000000000386b
@property(readonly) NSString *hardwareName;
@property(readonly) NSString *guid;
@property(readonly) NSString *deviceName;
- (long long)deviceBiometricStyle;	// IMP=0x00000000000035e7
- (id)copyProtocolConditionalContext;	// IMP=0x000000000000354a
- (_Bool)checkCapabilities:(id)arg1 withMismatches:(id *)arg2;	// IMP=0x0000000000003493
- (void)dealloc;	// IMP=0x0000000000003390
- (id)init;	// IMP=0x000000000000332c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
