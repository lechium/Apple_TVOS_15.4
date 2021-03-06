//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface TRISystemDimensions : PBCodable <NSCopying>
{
    NSString *_deviceClass;	// 8 = 0x8
    NSString *_osBuild;	// 16 = 0x10
    int _targetedPopulation;	// 24 = 0x18
    NSMutableArray *_userKeyboardEnabledInputModeIdentifiers;	// 32 = 0x20
    NSString *_userSettingsBcp47DeviceLocale;	// 40 = 0x28
    NSString *_userSettingsLanguageCode;	// 48 = 0x30
    NSString *_userSettingsRegionCode;	// 56 = 0x38
    NSString *_versionTag;	// 64 = 0x40
    _Bool _isBetaUser;	// 72 = 0x48
    _Bool _isInternalBuild;	// 73 = 0x49
    struct {
        unsigned int targetedPopulation:1;
        unsigned int isBetaUser:1;
        unsigned int isInternalBuild:1;
    } _has;	// 76 = 0x4c
}

+ (Class)userKeyboardEnabledInputModeIdentifiersType;	// IMP=0x000000000004fffe
- (void).cxx_destruct;	// IMP=0x00000000000518ac
@property(retain, nonatomic) NSString *userSettingsBcp47DeviceLocale; // @synthesize userSettingsBcp47DeviceLocale=_userSettingsBcp47DeviceLocale;
@property(retain, nonatomic) NSMutableArray *userKeyboardEnabledInputModeIdentifiers; // @synthesize userKeyboardEnabledInputModeIdentifiers=_userKeyboardEnabledInputModeIdentifiers;
@property(retain, nonatomic) NSString *userSettingsRegionCode; // @synthesize userSettingsRegionCode=_userSettingsRegionCode;
@property(retain, nonatomic) NSString *userSettingsLanguageCode; // @synthesize userSettingsLanguageCode=_userSettingsLanguageCode;
@property(retain, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(retain, nonatomic) NSString *versionTag; // @synthesize versionTag=_versionTag;
@property(nonatomic) _Bool isBetaUser; // @synthesize isBetaUser=_isBetaUser;
@property(nonatomic) _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(retain, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000051513
- (unsigned long long)hash;	// IMP=0x00000000000513c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000051146
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050e08
- (void)copyTo:(id)arg1;	// IMP=0x0000000000050c20
- (void)writeTo:(id)arg1;	// IMP=0x00000000000509c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000509b8
- (id)dictionaryRepresentation;	// IMP=0x00000000000502be
- (id)description;	// IMP=0x000000000005020f
- (int)StringAsTargetedPopulation:(id)arg1;	// IMP=0x0000000000050120
- (id)targetedPopulationAsString:(int)arg1;	// IMP=0x0000000000050088
@property(nonatomic) _Bool hasTargetedPopulation;
@property(nonatomic) int targetedPopulation; // @synthesize targetedPopulation=_targetedPopulation;
@property(readonly, nonatomic) _Bool hasUserSettingsBcp47DeviceLocale;
- (id)userKeyboardEnabledInputModeIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004ffe1
- (unsigned long long)userKeyboardEnabledInputModeIdentifiersCount;	// IMP=0x000000000004ffc4
- (void)addUserKeyboardEnabledInputModeIdentifiers:(id)arg1;	// IMP=0x000000000004ff5a
- (void)clearUserKeyboardEnabledInputModeIdentifiers;	// IMP=0x000000000004ff3d
@property(readonly, nonatomic) _Bool hasUserSettingsRegionCode;
@property(readonly, nonatomic) _Bool hasUserSettingsLanguageCode;
@property(readonly, nonatomic) _Bool hasOsBuild;
@property(readonly, nonatomic) _Bool hasVersionTag;
@property(nonatomic) _Bool hasIsBetaUser;
@property(nonatomic) _Bool hasIsInternalBuild;
@property(readonly, nonatomic) _Bool hasDeviceClass;

@end

