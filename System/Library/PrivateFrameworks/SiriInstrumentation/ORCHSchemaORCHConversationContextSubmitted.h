//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHConversationContextSubmitted
{
    _Bool _contextUpdateReceived;	// 8 = 0x8
    _Bool _contextUpdateError;	// 9 = 0x9
    struct {
        unsigned int contextUpdateReceived:1;
        unsigned int contextUpdateError:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool contextUpdateError; // @synthesize contextUpdateError=_contextUpdateError;
@property(nonatomic) _Bool contextUpdateReceived; // @synthesize contextUpdateReceived=_contextUpdateReceived;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002728bf
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000272801
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000272662
- (unsigned long long)hash;	// IMP=0x000000000027261c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027252d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002724ba
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002724ad
- (void)deleteContextUpdateError;	// IMP=0x0000000000272483
@property(nonatomic) _Bool hasContextUpdateError;
- (void)deleteContextUpdateReceived;	// IMP=0x0000000000272410
@property(nonatomic) _Bool hasContextUpdateReceived;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000333ac5

@end

