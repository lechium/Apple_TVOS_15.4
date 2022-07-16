//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface SISchemaEngagedAccessoryContext
{
    SISchemaUUID *_accessoryId;	// 8 = 0x8
    int _homeKitAccessoryType;	// 16 = 0x10
    NSString *_accessoryBrand;	// 24 = 0x18
    NSString *_accessoryModel;	// 32 = 0x20
    _Bool _isAudioPlaybackCapable;	// 40 = 0x28
    _Bool _isThirdPartyMusicEnabled;	// 41 = 0x29
    struct {
        unsigned int homeKitAccessoryType:1;
        unsigned int isAudioPlaybackCapable:1;
        unsigned int isThirdPartyMusicEnabled:1;
    } _has;	// 44 = 0x2c
    _Bool _hasAccessoryId;	// 48 = 0x30
    _Bool _hasAccessoryBrand;	// 49 = 0x31
    _Bool _hasAccessoryModel;	// 50 = 0x32
}

- (void).cxx_destruct;	// IMP=0x0000000000133af2
@property(nonatomic) _Bool hasAccessoryModel; // @synthesize hasAccessoryModel=_hasAccessoryModel;
@property(nonatomic) _Bool hasAccessoryBrand; // @synthesize hasAccessoryBrand=_hasAccessoryBrand;
@property(nonatomic) _Bool hasAccessoryId; // @synthesize hasAccessoryId=_hasAccessoryId;
@property(nonatomic) _Bool isThirdPartyMusicEnabled; // @synthesize isThirdPartyMusicEnabled=_isThirdPartyMusicEnabled;
@property(nonatomic) _Bool isAudioPlaybackCapable; // @synthesize isAudioPlaybackCapable=_isAudioPlaybackCapable;
@property(copy, nonatomic) NSString *accessoryModel; // @synthesize accessoryModel=_accessoryModel;
@property(copy, nonatomic) NSString *accessoryBrand; // @synthesize accessoryBrand=_accessoryBrand;
@property(nonatomic) int homeKitAccessoryType; // @synthesize homeKitAccessoryType=_homeKitAccessoryType;
@property(retain, nonatomic) SISchemaUUID *accessoryId; // @synthesize accessoryId=_accessoryId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001336fa
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000013363c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000013308f
- (unsigned long long)hash;	// IMP=0x0000000000132fa3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000132b1d
- (void)writeTo:(id)arg1;	// IMP=0x00000000001329ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013299f
- (void)deleteIsThirdPartyMusicEnabled;	// IMP=0x0000000000132975
@property(nonatomic) _Bool hasIsThirdPartyMusicEnabled;
- (void)deleteIsAudioPlaybackCapable;	// IMP=0x0000000000132900
@property(nonatomic) _Bool hasIsAudioPlaybackCapable;
- (void)deleteAccessoryModel;	// IMP=0x00000000001328a3
- (void)deleteAccessoryBrand;	// IMP=0x000000000013287a
- (void)deleteHomeKitAccessoryType;	// IMP=0x000000000013283b
@property(nonatomic) _Bool hasHomeKitAccessoryType;
- (void)deleteAccessoryId;	// IMP=0x00000000001327e2
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000321174
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032113c

@end

