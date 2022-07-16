//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSData, NSLocale, NSNumber, NSString;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying>
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    _Bool _shouldUpdateUniqueDeviceIdentifier;	// 12 = 0xc
    _Bool _shouldUpdateServerFriendlyDescription;	// 13 = 0xd
    _Bool _shouldUpdateColor;	// 14 = 0xe
    _Bool _shouldUpdateEnclosureColor;	// 15 = 0xf
    _Bool _shouldUpdateCoverGlassColor;	// 16 = 0x10
    _Bool _shouldUpdateHousingColor;	// 17 = 0x11
    _Bool _shouldUpdateBackingColor;	// 18 = 0x12
    _Bool _shouldUpdateLocale;	// 19 = 0x13
    _Bool _shouldUpdateROMAddress;	// 20 = 0x14
    _Bool _shouldUpdateMLBSerialNumber;	// 21 = 0x15
    _Bool _shouldUpdateModelNumber;	// 22 = 0x16
    _Bool _shouldUpdateProvisioningDeviceIdentifier;	// 23 = 0x17
    NSString *_uniqueDeviceIdentifier;	// 24 = 0x18
    NSString *_serverFriendlyDescription;	// 32 = 0x20
    NSString *_color;	// 40 = 0x28
    NSString *_enclosureColor;	// 48 = 0x30
    NSNumber *_coverGlassColor;	// 56 = 0x38
    NSNumber *_housingColor;	// 64 = 0x40
    NSNumber *_backingColor;	// 72 = 0x48
    NSLocale *_locale;	// 80 = 0x50
    NSString *_ROMAddress;	// 88 = 0x58
    NSString *_MLBSerialNumber;	// 96 = 0x60
    NSString *_modelNumber;	// 104 = 0x68
    NSString *_provisioningDeviceIdentifier;	// 112 = 0x70
    unsigned long long _linkType;	// 120 = 0x78
}

+ (long long)_currentDeviceAuthenticationMode;	// IMP=0x0000000000055f96
+ (long long)currentDeviceAuthenticationMode;	// IMP=0x0000000000055f84
+ (long long)currentDeviceAuthenticationModeForAuthContext:(id)arg1;	// IMP=0x0000000000055eee
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;	// IMP=0x0000000000055dba
+ (id)_buildNumber;	// IMP=0x0000000000055967
+ (id)_osVersion;	// IMP=0x0000000000055928
+ (id)_osName;	// IMP=0x00000000000558e9
+ (id)_systemVersionDictionary;	// IMP=0x000000000005589b
+ (id)_hardwareModel;	// IMP=0x000000000005588e
+ (id)deviceWithSerializedData:(id)arg1;	// IMP=0x0000000000053afe
+ (id)systemContainerCacheURL;	// IMP=0x0000000000053a4b
+ (id)systemContainerURL;	// IMP=0x000000000005394a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000053942
+ (id)activeIDSPeerDevice;	// IMP=0x00000000000538ff
+ (id)currentDevice;	// IMP=0x000000000005386f
- (void).cxx_destruct;	// IMP=0x0000000000055fba
@property(setter=setLinkType:) unsigned long long linkType; // @synthesize linkType=_linkType;
- (id)_volumeGroupUUID;	// IMP=0x0000000000055f9e
@property(readonly) NSString *phoneNumber;
@property(readonly) _Bool isMultiUserMode;
@property(readonly) _Bool isInternalBuild;
@property(readonly) NSString *integratedCircuitCardIdentifier;
@property(readonly) NSString *mobileEquipmentIdentifier;
@property(readonly) _Bool isFaceIDCapable;
@property(readonly) _Bool isBiometricAuthCapable;
@property(readonly) _Bool isProtectedWithPasscode;
@property(readonly) _Bool isInCircle;
@property(readonly) _Bool isUnlocked;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *internationalMobileEquipmentIdentity2;
@property(readonly) NSString *internationalMobileEquipmentIdentity;
@property(readonly) NSString *userFullName;
@property(readonly) NSString *localUserUUID;
@property(readonly) NSString *userChosenName;
@property(copy, nonatomic) NSString *serverFriendlyDescription; // @synthesize serverFriendlyDescription=_serverFriendlyDescription;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *MLBSerialNumber; // @synthesize MLBSerialNumber=_MLBSerialNumber;
@property(copy, nonatomic) NSString *ROMAddress; // @synthesize ROMAddress=_ROMAddress;
@property(copy, nonatomic) NSString *provisioningDeviceIdentifier; // @synthesize provisioningDeviceIdentifier=_provisioningDeviceIdentifier;
@property(copy, nonatomic) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property(copy, nonatomic) NSNumber *backingColor; // @synthesize backingColor=_backingColor;
@property(copy, nonatomic) NSNumber *housingColor; // @synthesize housingColor=_housingColor;
@property(copy, nonatomic) NSNumber *coverGlassColor; // @synthesize coverGlassColor=_coverGlassColor;
@property(copy, nonatomic) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
- (void)_setShouldUpdateToValue:(_Bool)arg1;	// IMP=0x00000000000545ec
- (id)description;	// IMP=0x0000000000054560
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054290
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000053f9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000053c89
@property(readonly) NSData *serializedData;
- (id)init;	// IMP=0x0000000000053aa9

@end
