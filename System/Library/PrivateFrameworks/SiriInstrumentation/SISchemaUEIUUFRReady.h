//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaUEIUUFRReady
{
    _Bool _exists;	// 8 = 0x8
    NSString *_aceCommandClass;	// 16 = 0x10
    NSString *_aceViewId;	// 24 = 0x18
    int _uufrReadySource;	// 32 = 0x20
    struct {
        unsigned int exists:1;
        unsigned int uufrReadySource:1;
    } _has;	// 36 = 0x24
    _Bool _hasAceCommandClass;	// 40 = 0x28
    _Bool _hasAceViewId;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x00000000002e7d4e
@property(nonatomic) _Bool hasAceViewId; // @synthesize hasAceViewId=_hasAceViewId;
@property(nonatomic) _Bool hasAceCommandClass; // @synthesize hasAceCommandClass=_hasAceCommandClass;
@property(nonatomic) int uufrReadySource; // @synthesize uufrReadySource=_uufrReadySource;
@property(copy, nonatomic) NSString *aceViewId; // @synthesize aceViewId=_aceViewId;
@property(copy, nonatomic) NSString *aceCommandClass; // @synthesize aceCommandClass=_aceCommandClass;
@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e7a8e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e79d0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e7745
- (unsigned long long)hash;	// IMP=0x00000000002e7699
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e7378
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e7285
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e7278
- (void)deleteUufrReadySource;	// IMP=0x00000000002e724e
@property(nonatomic) _Bool hasUufrReadySource;
- (void)deleteAceViewId;	// IMP=0x00000000002e71f1
- (void)deleteAceCommandClass;	// IMP=0x00000000002e71c8
- (void)deleteExists;	// IMP=0x00000000002e7189
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033c109

@end
