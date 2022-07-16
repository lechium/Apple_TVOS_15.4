//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHOnDeviceEndpointerContext
{
    _Bool _enabled;	// 8 = 0x8
    CDStruct_513ff01d _has;	// 12 = 0xc
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001fd58b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001fd4cd
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001fd39d
- (unsigned long long)hash;	// IMP=0x00000000001fd372
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fd2cd
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fd2a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fd294
- (void)deleteEnabled;	// IMP=0x00000000001fd26a
@property(nonatomic) _Bool hasEnabled;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032d7db

@end
