//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ANCSchemaANCServerUserResponseEvaluated
{
    int _userResponseCategory;	// 8 = 0x8
    CDStruct_de58dd69 _has;	// 12 = 0xc
}

@property(nonatomic) int userResponseCategory; // @synthesize userResponseCategory=_userResponseCategory;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000012be2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000012b24
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000129fa
- (unsigned long long)hash;	// IMP=0x00000000000129cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001292a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000128ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000128f2
- (void)deleteUserResponseCategory;	// IMP=0x00000000000128c8
@property(nonatomic) _Bool hasUserResponseCategory;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030d687

@end

