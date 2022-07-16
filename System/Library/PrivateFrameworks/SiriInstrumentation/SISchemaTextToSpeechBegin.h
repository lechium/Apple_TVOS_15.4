//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaHardwareInterfaceIdentifier;

@interface SISchemaTextToSpeechBegin
{
    NSString *_aceID;	// 8 = 0x8
    int _audioOutputRoute;	// 16 = 0x10
    SISchemaHardwareInterfaceIdentifier *_hardwareInterfaceVendorID;	// 24 = 0x18
    struct {
        unsigned int audioOutputRoute:1;
    } _has;	// 32 = 0x20
    _Bool _hasAceID;	// 36 = 0x24
    _Bool _hasHardwareInterfaceVendorID;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000002e2c22
@property(nonatomic) _Bool hasHardwareInterfaceVendorID; // @synthesize hasHardwareInterfaceVendorID=_hasHardwareInterfaceVendorID;
@property(nonatomic) _Bool hasAceID; // @synthesize hasAceID=_hasAceID;
@property(retain, nonatomic) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID; // @synthesize hardwareInterfaceVendorID=_hardwareInterfaceVendorID;
@property(nonatomic) int audioOutputRoute; // @synthesize audioOutputRoute=_audioOutputRoute;
@property(copy, nonatomic) NSString *aceID; // @synthesize aceID=_aceID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e29ca
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e290c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e266e
- (unsigned long long)hash;	// IMP=0x00000000002e25fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e22fb
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e220d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e2200
- (void)deleteHardwareInterfaceVendorID;	// IMP=0x00000000002e21ec
- (void)deleteAudioOutputRoute;	// IMP=0x00000000002e21ad
@property(nonatomic) _Bool hasAudioOutputRoute;
- (void)deleteAceID;	// IMP=0x00000000002e2154
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033ba61
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033ba29

@end
