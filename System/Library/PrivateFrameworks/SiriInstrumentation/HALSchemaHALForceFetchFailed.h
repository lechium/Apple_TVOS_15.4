//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HALSchemaHALForceFetchFailed
{
    int _failureReason;	// 8 = 0x8
    CDStruct_ebe11093 _has;	// 12 = 0xc
}

@property(nonatomic) int failureReason; // @synthesize failureReason=_failureReason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000190094
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000018ffd6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000018feac
- (unsigned long long)hash;	// IMP=0x000000000018fe81
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018fddc
- (void)writeTo:(id)arg1;	// IMP=0x000000000018fdb1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018fda4
- (void)deleteFailureReason;	// IMP=0x000000000018fd7a
@property(nonatomic) _Bool hasFailureReason;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003266ee

@end

