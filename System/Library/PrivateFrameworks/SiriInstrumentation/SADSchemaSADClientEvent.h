//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SADSchemaSADAvailableAssetDailyStatus, SADSchemaSADImmediateDownloadTriggered, SADSchemaSADUODAssetsPrepared;

@interface SADSchemaSADClientEvent
{
    SADSchemaSADUODAssetsPrepared *_uodAssetsPrepared;	// 8 = 0x8
    SADSchemaSADAvailableAssetDailyStatus *_availableAssetDailyStatus;	// 16 = 0x10
    SADSchemaSADImmediateDownloadTriggered *_immediateDownloadTriggered;	// 24 = 0x18
    _Bool _hasUodAssetsPrepared;	// 32 = 0x20
    _Bool _hasAvailableAssetDailyStatus;	// 33 = 0x21
    _Bool _hasImmediateDownloadTriggered;	// 34 = 0x22
    unsigned long long _whichEvent_Type;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002be534
@property(nonatomic) _Bool hasImmediateDownloadTriggered; // @synthesize hasImmediateDownloadTriggered=_hasImmediateDownloadTriggered;
@property(nonatomic) _Bool hasAvailableAssetDailyStatus; // @synthesize hasAvailableAssetDailyStatus=_hasAvailableAssetDailyStatus;
@property(nonatomic) _Bool hasUodAssetsPrepared; // @synthesize hasUodAssetsPrepared=_hasUodAssetsPrepared;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002be2b8
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002be1fa
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002bdf15
- (unsigned long long)hash;	// IMP=0x00000000002bdea8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bdacf
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bd990
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bd18d
- (void)deleteImmediateDownloadTriggered;	// IMP=0x00000000002bd15a
@property(retain, nonatomic) SADSchemaSADImmediateDownloadTriggered *immediateDownloadTriggered; // @synthesize immediateDownloadTriggered=_immediateDownloadTriggered;
- (void)deleteAvailableAssetDailyStatus;	// IMP=0x00000000002bd07c
@property(retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus; // @synthesize availableAssetDailyStatus=_availableAssetDailyStatus;
- (void)deleteUodAssetsPrepared;	// IMP=0x00000000002bcf9e
@property(retain, nonatomic) SADSchemaSADUODAssetsPrepared *uodAssetsPrepared; // @synthesize uodAssetsPrepared=_uodAssetsPrepared;
- (id)qualifiedMessageName;	// IMP=0x00000000002bceac
- (int)getAnyEventType;	// IMP=0x00000000002bcea1
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003393a3
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033936b

@end

