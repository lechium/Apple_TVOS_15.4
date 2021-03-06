//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWSmsAudioContext
{
    unsigned int _messageDurationMs;	// 8 = 0x8
    struct {
        unsigned int messageDurationMs:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int messageDurationMs; // @synthesize messageDurationMs=_messageDurationMs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000015afd0
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000015af12
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000015ade3
- (unsigned long long)hash;	// IMP=0x000000000015adb9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015ad14
- (void)writeTo:(id)arg1;	// IMP=0x000000000015ace9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015ab11
- (void)deleteMessageDurationMs;	// IMP=0x000000000015aae7
@property(nonatomic) _Bool hasMessageDurationMs;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000323977

@end

