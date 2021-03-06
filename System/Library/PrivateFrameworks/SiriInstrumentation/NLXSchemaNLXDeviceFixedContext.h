//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaNLXDeviceFixedContext
{
    _Bool _isTestEvent;	// 8 = 0x8
    struct {
        unsigned int isTestEvent:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool isTestEvent; // @synthesize isTestEvent=_isTestEvent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000263def
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000263d31
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000263c01
- (unsigned long long)hash;	// IMP=0x0000000000263bd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000263b31
- (void)writeTo:(id)arg1;	// IMP=0x0000000000263b05
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000263af8
- (void)deleteIsTestEvent;	// IMP=0x0000000000263ace
@property(nonatomic) _Bool hasIsTestEvent;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003328a8

@end

