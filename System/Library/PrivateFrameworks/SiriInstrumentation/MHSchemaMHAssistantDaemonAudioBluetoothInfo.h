//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioBluetoothInfo
{
    int _state;	// 8 = 0x8
    CDStruct_5accba53 _has;	// 12 = 0xc
}

@property(nonatomic) int state; // @synthesize state=_state;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001bec81
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001bebc3
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001bea99
- (unsigned long long)hash;	// IMP=0x00000000001bea6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001be9c9
- (void)writeTo:(id)arg1;	// IMP=0x00000000001be99e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001be7c6
- (void)deleteState;	// IMP=0x00000000001be79c
@property(nonatomic) _Bool hasState;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032967a

@end
