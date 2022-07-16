//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDestination, IDSEndpointCapabilities, NSArray, NSData, NSDate, NSString, NSUUID, _IDSDevice;

@interface IDSDevice : NSObject
{
    _IDSDevice *_internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000dde96
- (id)_internal;	// IMP=0x00000000000dddf2
- (void)_setService:(id)arg1;	// IMP=0x00000000000ddd14
- (void)_setAccount:(id)arg1;	// IMP=0x00000000000ddc36
@property(readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
- (void)_addIdentity:(id)arg1;	// IMP=0x00000000000dd6ec
@property(readonly, nonatomic) NSArray *identities;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSDate *lastActivityDate;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) _Bool supportsPhoneCalls;
@property(readonly, nonatomic) _Bool supportsMMSRelay;
@property(readonly, nonatomic) _Bool supportsSMSRelay;
@property(readonly, nonatomic) _Bool supportsApplePay;
@property(readonly, nonatomic) _Bool supportsHandoff;
@property(readonly, nonatomic) _Bool supportsTethering;
@property(readonly, nonatomic) _Bool supportsiCloudPairing;
@property(readonly, nonatomic) NSUUID *stableBluetoothIdentifier;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) IDSDestination *destination;
@property(readonly, nonatomic) _Bool isHSATrusted;
@property(readonly, nonatomic) long long relationship;
@property(readonly, nonatomic) IDSEndpointCapabilities *capabilities;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) _Bool isLocallyPaired;
@property(readonly, nonatomic) _Bool isDefaultPairedDevice;
@property(readonly, nonatomic) _Bool locallyPresent;
@property(readonly, nonatomic) _Bool isCloudConnected;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) CDStruct_2ec95fd7 operatingSystemVersion;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *uniqueIDOverride;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)description;	// IMP=0x00000000000dabac
- (id)compactDescription;	// IMP=0x00000000000daa57
- (id)fullDescription;	// IMP=0x00000000000da902
- (void)dealloc;	// IMP=0x00000000000da79d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000da560
- (id)_initWithDictionary:(id)arg1;	// IMP=0x00000000000da3d6

@end

