//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ANCSchemaANCAudioDevice, NSData, SISchemaUUID;

@interface ANCSchemaANCNotificationReceived
{
    int _announcementCategory;	// 8 = 0x8
    int _targetPlatform;	// 12 = 0xc
    ANCSchemaANCAudioDevice *_connectedAudioDevice;	// 16 = 0x10
    _Bool _isTimeSensitiveAnnouncement;	// 24 = 0x18
    int _appCategory;	// 28 = 0x1c
    SISchemaUUID *_linkId;	// 32 = 0x20
    struct {
        unsigned int announcementCategory:1;
        unsigned int targetPlatform:1;
        unsigned int isTimeSensitiveAnnouncement:1;
        unsigned int appCategory:1;
    } _has;	// 40 = 0x28
    _Bool _hasConnectedAudioDevice;	// 44 = 0x2c
    _Bool _hasLinkId;	// 45 = 0x2d
}

- (void).cxx_destruct;	// IMP=0x00000000000107fb
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(nonatomic) _Bool hasConnectedAudioDevice; // @synthesize hasConnectedAudioDevice=_hasConnectedAudioDevice;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(nonatomic) int appCategory; // @synthesize appCategory=_appCategory;
@property(nonatomic) _Bool isTimeSensitiveAnnouncement; // @synthesize isTimeSensitiveAnnouncement=_isTimeSensitiveAnnouncement;
@property(retain, nonatomic) ANCSchemaANCAudioDevice *connectedAudioDevice; // @synthesize connectedAudioDevice=_connectedAudioDevice;
@property(nonatomic) int targetPlatform; // @synthesize targetPlatform=_targetPlatform;
@property(nonatomic) int announcementCategory; // @synthesize announcementCategory=_announcementCategory;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000010436
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000010378
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000000ff91
- (unsigned long long)hash;	// IMP=0x000000000000feb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fafd
- (void)writeTo:(id)arg1;	// IMP=0x000000000000f989
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000f97c
- (void)deleteLinkId;	// IMP=0x000000000000f968
- (void)deleteAppCategory;	// IMP=0x000000000000f929
@property(nonatomic) _Bool hasAppCategory;
- (void)deleteIsTimeSensitiveAnnouncement;	// IMP=0x000000000000f8b4
@property(nonatomic) _Bool hasIsTimeSensitiveAnnouncement;
- (void)deleteConnectedAudioDevice;	// IMP=0x000000000000f855
- (void)deleteTargetPlatform;	// IMP=0x000000000000f816
@property(nonatomic) _Bool hasTargetPlatform;
- (void)deleteAnnouncementCategory;	// IMP=0x000000000000f7a3
@property(nonatomic) _Bool hasAnnouncementCategory;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030d13e
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030d106

@end

