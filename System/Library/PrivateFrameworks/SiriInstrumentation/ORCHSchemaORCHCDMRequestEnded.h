//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHCDMRequestEnded
{
    int _status;	// 8 = 0x8
    _Bool _delegatedUserDialogAct;	// 12 = 0xc
    struct {
        unsigned int status:1;
        unsigned int delegatedUserDialogAct:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool delegatedUserDialogAct; // @synthesize delegatedUserDialogAct=_delegatedUserDialogAct;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000026b17b
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000026b0bd
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000026af2a
- (unsigned long long)hash;	// IMP=0x000000000026aee4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026adf5
- (void)writeTo:(id)arg1;	// IMP=0x000000000026ad83
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026ad76
- (void)deleteDelegatedUserDialogAct;	// IMP=0x000000000026ad4c
@property(nonatomic) _Bool hasDelegatedUserDialogAct;
- (void)deleteStatus;	// IMP=0x000000000026acd9
@property(nonatomic) _Bool hasStatus;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000333217

@end

