//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoEntry : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f7ee1
@property(retain, nonatomic) CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f7e1d
- (unsigned long long)hash;	// IMP=0x00000000000f7dd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f7d08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f7c6a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f7c07
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f7baa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f7b9d
- (id)dictionaryRepresentation;	// IMP=0x00000000000f7905
- (id)description;	// IMP=0x00000000000f7856
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end
