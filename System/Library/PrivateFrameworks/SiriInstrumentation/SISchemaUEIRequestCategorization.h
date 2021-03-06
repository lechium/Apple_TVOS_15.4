//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaUEIRequestCategorization
{
    int _requestType;	// 8 = 0x8
    int _requestStatus;	// 12 = 0xc
    struct {
        unsigned int requestType:1;
        unsigned int requestStatus:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int requestStatus; // @synthesize requestStatus=_requestStatus;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e5906
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e5848
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e5678
- (unsigned long long)hash;	// IMP=0x00000000002e5632
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e5543
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e54d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e54c5
- (void)deleteRequestStatus;	// IMP=0x00000000002e549b
@property(nonatomic) _Bool hasRequestStatus;
- (void)deleteRequestType;	// IMP=0x00000000002e5428
@property(nonatomic) _Bool hasRequestType;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033bed0

@end

