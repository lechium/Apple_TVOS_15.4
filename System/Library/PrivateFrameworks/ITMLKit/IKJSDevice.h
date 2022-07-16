//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDevice-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSDeviceProxy-Protocol.h>

@class NSString;
@protocol IKAppDeviceConfig;

@interface IKJSDevice <NSObject, IKJSDevice, _IKJSDeviceProxy>
{
    id _networkPropertiesChangedToken;	// 8 = 0x8
    id <IKAppDeviceConfig> _deviceConfig;	// 16 = 0x10
}

+ (id)getMobileGestaltString:(struct __CFString *)arg1;	// IMP=0x00000000000a1464
- (void).cxx_destruct;	// IMP=0x00000000000a14fd
@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
- (id)osBuildNumber;	// IMP=0x00000000000a1443
- (id)capacity:(id)arg1;	// IMP=0x00000000000a1332
- (_Bool)isSeedBuild;	// IMP=0x00000000000a132a
- (_Bool)isInRetailDemoMode;	// IMP=0x00000000000a1311
- (double)lastNetworkChangedTime;	// IMP=0x00000000000a12ba
- (id)networkType;	// IMP=0x00000000000a1263
- (_Bool)runningAnInternalBuild;	// IMP=0x00000000000a124a
- (_Bool)isInAirplaneMode;	// IMP=0x00000000000a11ff
@property(readonly, nonatomic) _Bool isNetworkReachable;
- (id)pixelRatio;	// IMP=0x00000000000a1140
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *appVersion;
- (_Bool)isAdvertisingTrackingEnabled;	// IMP=0x00000000000a0d58
- (id)advertisingIdentifier;	// IMP=0x00000000000a0cd7
@property(readonly, nonatomic) NSString *vendorIdentifier;
- (id)vendorID;	// IMP=0x00000000000a0c44
- (void)dealloc;	// IMP=0x00000000000a0bc7
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;	// IMP=0x00000000000a0839
- (id)asPrivateIKJSDevice;	// IMP=0x00000000000a0806

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

