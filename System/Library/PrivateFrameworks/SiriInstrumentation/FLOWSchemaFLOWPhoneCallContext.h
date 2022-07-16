//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FLOWSchemaFLOWPhoneCallEmergencyContext, NSArray, NSData;

@interface FLOWSchemaFLOWPhoneCallContext
{
    int _phoneCallType;	// 8 = 0x8
    NSArray *_recipientTypes;	// 16 = 0x10
    int _phoneCallAppType;	// 24 = 0x18
    FLOWSchemaFLOWPhoneCallEmergencyContext *_emergencyContext;	// 32 = 0x20
    NSArray *_personTypes;	// 40 = 0x28
    _Bool _isThirdPartyFaceTime;	// 48 = 0x30
    int _searchCallHistoryIntent;	// 52 = 0x34
    struct {
        unsigned int phoneCallType:1;
        unsigned int phoneCallAppType:1;
        unsigned int isThirdPartyFaceTime:1;
        unsigned int searchCallHistoryIntent:1;
    } _has;	// 56 = 0x38
    _Bool _hasEmergencyContext;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000156e7a
@property(nonatomic) _Bool hasEmergencyContext; // @synthesize hasEmergencyContext=_hasEmergencyContext;
@property(nonatomic) int searchCallHistoryIntent; // @synthesize searchCallHistoryIntent=_searchCallHistoryIntent;
@property(nonatomic) _Bool isThirdPartyFaceTime; // @synthesize isThirdPartyFaceTime=_isThirdPartyFaceTime;
@property(copy, nonatomic) NSArray *personTypes; // @synthesize personTypes=_personTypes;
@property(retain, nonatomic) FLOWSchemaFLOWPhoneCallEmergencyContext *emergencyContext; // @synthesize emergencyContext=_emergencyContext;
@property(nonatomic) int phoneCallAppType; // @synthesize phoneCallAppType=_phoneCallAppType;
@property(copy, nonatomic) NSArray *recipientTypes; // @synthesize recipientTypes=_recipientTypes;
@property(nonatomic) int phoneCallType; // @synthesize phoneCallType=_phoneCallType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001567b2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001566f4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000156308
- (unsigned long long)hash;	// IMP=0x00000000001561f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000155d2f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001559df
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000155807
- (void)deleteSearchCallHistoryIntent;	// IMP=0x00000000001557dd
@property(nonatomic) _Bool hasSearchCallHistoryIntent;
- (void)deleteIsThirdPartyFaceTime;	// IMP=0x0000000000155768
@property(nonatomic) _Bool hasIsThirdPartyFaceTime;
- (int)personTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001556ce
- (unsigned long long)personTypeCount;	// IMP=0x00000000001556b1
- (void)addPersonType:(int)arg1;	// IMP=0x000000000015561b
- (void)deletePersonType;	// IMP=0x0000000000155609
- (void)clearPersonType;	// IMP=0x00000000001555ec
- (void)deleteEmergencyContext;	// IMP=0x00000000001555d8
- (void)deletePhoneCallAppType;	// IMP=0x0000000000155599
@property(nonatomic) _Bool hasPhoneCallAppType;
- (int)recipientTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000155501
- (unsigned long long)recipientTypeCount;	// IMP=0x00000000001554e4
- (void)addRecipientType:(int)arg1;	// IMP=0x000000000015544e
- (void)deleteRecipientType;	// IMP=0x000000000015543c
- (void)clearRecipientType;	// IMP=0x000000000015541f
- (void)deletePhoneCallType;	// IMP=0x00000000001553f5
@property(nonatomic) _Bool hasPhoneCallType;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003232a3
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032326b

@end
