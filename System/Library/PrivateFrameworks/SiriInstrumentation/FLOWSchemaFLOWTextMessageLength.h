//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWTextMessageLength
{
    unsigned int _messageCharLength;	// 8 = 0x8
    unsigned int _messageWordLength;	// 12 = 0xc
    struct {
        unsigned int messageCharLength:1;
        unsigned int messageWordLength:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int messageWordLength; // @synthesize messageWordLength=_messageWordLength;
@property(nonatomic) unsigned int messageCharLength; // @synthesize messageCharLength=_messageCharLength;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000165250
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000165192
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000164ff5
- (unsigned long long)hash;	// IMP=0x0000000000164fb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000164ec2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000164e51
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000164e44
- (void)deleteMessageWordLength;	// IMP=0x0000000000164e1a
@property(nonatomic) _Bool hasMessageWordLength;
- (void)deleteMessageCharLength;	// IMP=0x0000000000164da7
@property(nonatomic) _Bool hasMessageCharLength;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003242d2

@end

