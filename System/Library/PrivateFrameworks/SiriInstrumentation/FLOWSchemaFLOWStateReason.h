//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWStateReason
{
    int _statusReason;	// 8 = 0x8
    struct {
        unsigned int statusReason:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int statusReason; // @synthesize statusReason=_statusReason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000162df6
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000162d38
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000162795
- (unsigned long long)hash;	// IMP=0x000000000016276a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001626c5
- (void)writeTo:(id)arg1;	// IMP=0x000000000016269a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016268d
- (void)deleteStatusReason;	// IMP=0x0000000000162663
@property(nonatomic) _Bool hasStatusReason;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000323fed

@end

