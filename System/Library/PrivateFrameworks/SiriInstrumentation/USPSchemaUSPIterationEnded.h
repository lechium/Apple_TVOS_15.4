//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface USPSchemaUSPIterationEnded
{
}

- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002fca38
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002fc97a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002fc8ac
- (unsigned long long)hash;	// IMP=0x00000000002fc8a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fc85f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fc859
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fc84c
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033d791

@end
