//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying>
{
    unsigned int _enabledResidentsDeviceCapabilities;	// 8 = 0x8
    NSMutableArray *_homeKitCameraSettings;	// 16 = 0x10
    NSMutableArray *_homeKitCameraUserSettings;	// 24 = 0x18
    _Bool _isFaceClassificationEnabled;	// 32 = 0x20
    _Bool _isOwner;	// 33 = 0x21
    struct {
        unsigned int enabledResidentsDeviceCapabilities:1;
        unsigned int isFaceClassificationEnabled:1;
        unsigned int isOwner:1;
    } _has;	// 36 = 0x24
}

+ (Class)homeKitCameraSettingsType;	// IMP=0x0000000000762d35
+ (Class)homeKitCameraUserSettingsType;	// IMP=0x0000000000762d24
- (void).cxx_destruct;	// IMP=0x0000000000762920
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) _Bool isFaceClassificationEnabled; // @synthesize isFaceClassificationEnabled=_isFaceClassificationEnabled;
@property(nonatomic) unsigned int enabledResidentsDeviceCapabilities; // @synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities;
@property(retain, nonatomic) NSMutableArray *homeKitCameraSettings; // @synthesize homeKitCameraSettings=_homeKitCameraSettings;
@property(retain, nonatomic) NSMutableArray *homeKitCameraUserSettings; // @synthesize homeKitCameraUserSettings=_homeKitCameraUserSettings;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000076260b
- (unsigned long long)hash;	// IMP=0x0000000000762555
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007623ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000762091
- (void)copyTo:(id)arg1;	// IMP=0x0000000000761ed9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000761c5a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000761c4d
- (id)dictionaryRepresentation;	// IMP=0x0000000000761732
- (id)description;	// IMP=0x0000000000761683
@property(nonatomic) _Bool hasIsOwner;
@property(nonatomic) _Bool hasIsFaceClassificationEnabled;
@property(nonatomic) _Bool hasEnabledResidentsDeviceCapabilities;
- (id)homeKitCameraSettingsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000076158d
- (unsigned long long)homeKitCameraSettingsCount;	// IMP=0x0000000000761570
- (void)addHomeKitCameraSettings:(id)arg1;	// IMP=0x0000000000761506
- (void)clearHomeKitCameraSettings;	// IMP=0x00000000007614e9
- (id)homeKitCameraUserSettingsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007614cc
- (unsigned long long)homeKitCameraUserSettingsCount;	// IMP=0x00000000007614af
- (void)addHomeKitCameraUserSettings:(id)arg1;	// IMP=0x0000000000761445
- (void)clearHomeKitCameraUserSettings;	// IMP=0x0000000000761428

@end

