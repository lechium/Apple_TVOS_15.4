//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MTSchemaMTError
{
    NSString *_errorDomain;	// 8 = 0x8
    NSString *_errorMessage;	// 16 = 0x10
    int _errorCode;	// 24 = 0x18
    CDStruct_70a7dc3e _has;	// 28 = 0x1c
    _Bool _hasErrorDomain;	// 32 = 0x20
    _Bool _hasErrorMessage;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x00000000002276cb
@property(nonatomic) _Bool hasErrorMessage; // @synthesize hasErrorMessage=_hasErrorMessage;
@property(nonatomic) _Bool hasErrorDomain; // @synthesize hasErrorDomain=_hasErrorDomain;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000022747f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002273c1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002271be
- (unsigned long long)hash;	// IMP=0x0000000000227149
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000226e4c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000226d78
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000226d6b
- (void)deleteErrorCode;	// IMP=0x0000000000226d41
@property(nonatomic) _Bool hasErrorCode;
- (void)deleteErrorMessage;	// IMP=0x0000000000226ce8
- (void)deleteErrorDomain;	// IMP=0x0000000000226cbf
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032f6fc

@end

