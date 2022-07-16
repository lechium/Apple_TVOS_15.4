//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreML/CKCodeOperationMessageMutation-Protocol.h>
#import <CoreML/NSCopying-Protocol.h>

@class ModelKeyServerAPIFetchKeyResult, ModelKeyServerAPIResultError, NSString;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIFetchKeyResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>
{
    ModelKeyServerAPIResultError *_error;	// 8 = 0x8
    int _result;	// 16 = 0x10
    ModelKeyServerAPIFetchKeyResult *_success;	// 24 = 0x18
    struct {
        unsigned int result:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007ffef
@property(retain, nonatomic) ModelKeyServerAPIResultError *error; // @synthesize error=_error;
@property(retain, nonatomic) ModelKeyServerAPIFetchKeyResult *success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007ff1c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007fda7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007fce6
- (void)copyTo:(id)arg1;	// IMP=0x000000000007fc63
- (void)writeTo:(id)arg1;	// IMP=0x000000000007fc06
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007f956
- (id)dictionaryRepresentation;	// IMP=0x000000000007f7f4
@property(readonly, copy) NSString *description;
- (void)clearOneofValuesForResult;	// IMP=0x000000000007f6e5
- (int)StringAsResult:(id)arg1;	// IMP=0x000000000007f653
- (id)resultAsString:(int)arg1;	// IMP=0x000000000007f5ed
@property(nonatomic) _Bool hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

