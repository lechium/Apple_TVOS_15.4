//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HALSchemaHALClientEventMetadata, HALSchemaHALContextCollectorFetchContext, HALSchemaHALCrossDeviceCommandExecutionContext, HALSchemaHALForceFetchContext, HALSchemaHALLocalFetchContext, NSData;

@interface HALSchemaHALClientEvent
{
    HALSchemaHALClientEventMetadata *_eventMetadata;	// 8 = 0x8
    HALSchemaHALCrossDeviceCommandExecutionContext *_crossDeviceCommandContext;	// 16 = 0x10
    HALSchemaHALLocalFetchContext *_localFetchContext;	// 24 = 0x18
    HALSchemaHALContextCollectorFetchContext *_contextCollectorFetchContext;	// 32 = 0x20
    HALSchemaHALForceFetchContext *_forceFetchContext;	// 40 = 0x28
    _Bool _hasEventMetadata;	// 48 = 0x30
    _Bool _hasCrossDeviceCommandContext;	// 49 = 0x31
    _Bool _hasLocalFetchContext;	// 50 = 0x32
    _Bool _hasContextCollectorFetchContext;	// 51 = 0x33
    _Bool _hasForceFetchContext;	// 52 = 0x34
    unsigned long long _whichEvent_Type;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000185d0e
@property(nonatomic) _Bool hasForceFetchContext; // @synthesize hasForceFetchContext=_hasForceFetchContext;
@property(nonatomic) _Bool hasContextCollectorFetchContext; // @synthesize hasContextCollectorFetchContext=_hasContextCollectorFetchContext;
@property(nonatomic) _Bool hasLocalFetchContext; // @synthesize hasLocalFetchContext=_hasLocalFetchContext;
@property(nonatomic) _Bool hasCrossDeviceCommandContext; // @synthesize hasCrossDeviceCommandContext=_hasCrossDeviceCommandContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) HALSchemaHALClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000185926
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000185868
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000185423
- (unsigned long long)hash;	// IMP=0x0000000000185380
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000184d77
- (void)writeTo:(id)arg1;	// IMP=0x0000000000184b80
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000183b4e
- (void)deleteForceFetchContext;	// IMP=0x0000000000183b1b
@property(retain, nonatomic) HALSchemaHALForceFetchContext *forceFetchContext; // @synthesize forceFetchContext=_forceFetchContext;
- (void)deleteContextCollectorFetchContext;	// IMP=0x0000000000183a2b
@property(retain, nonatomic) HALSchemaHALContextCollectorFetchContext *contextCollectorFetchContext; // @synthesize contextCollectorFetchContext=_contextCollectorFetchContext;
- (void)deleteLocalFetchContext;	// IMP=0x0000000000183930
@property(retain, nonatomic) HALSchemaHALLocalFetchContext *localFetchContext; // @synthesize localFetchContext=_localFetchContext;
- (void)deleteCrossDeviceCommandContext;	// IMP=0x0000000000183840
@property(retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionContext *crossDeviceCommandContext; // @synthesize crossDeviceCommandContext=_crossDeviceCommandContext;
- (void)deleteEventMetadata;	// IMP=0x0000000000183765
- (id)qualifiedMessageName;	// IMP=0x00000000001836e7
- (int)getAnyEventType;	// IMP=0x00000000001836dc
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032575d
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000325725

@end
