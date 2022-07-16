//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaConversationTrace
{
    NSData *_previousTurnID;	// 8 = 0x8
    _Bool _hasPreviousTurnID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e5ce6
@property(nonatomic) _Bool hasPreviousTurnID; // @synthesize hasPreviousTurnID=_hasPreviousTurnID;
@property(copy, nonatomic) NSData *previousTurnID; // @synthesize previousTurnID=_previousTurnID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e5bb9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e5afb
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e5974
- (unsigned long long)hash;	// IMP=0x00000000000e5957
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e57d5
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e5768
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e575b
- (void)deletePreviousTurnID;	// IMP=0x00000000000e5747
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031c25c

@end

