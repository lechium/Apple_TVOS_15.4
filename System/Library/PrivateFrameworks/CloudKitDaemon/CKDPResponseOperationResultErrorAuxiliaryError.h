//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying>
{
    int _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSMutableArray *_userInfos;	// 24 = 0x18
    CDStruct_9ab06576 _has;	// 32 = 0x20
}

+ (Class)userInfoType;	// IMP=0x00000000000f11bf
- (void).cxx_destruct;	// IMP=0x00000000000f1fa8
@property(retain, nonatomic) NSMutableArray *userInfos; // @synthesize userInfos=_userInfos;
@property(nonatomic) int code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f1db6
- (unsigned long long)hash;	// IMP=0x00000000000f1d43
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f1c4e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f1a4b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f1941
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f17cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f17c0
- (id)dictionaryRepresentation;	// IMP=0x00000000000f127f
- (id)description;	// IMP=0x00000000000f11d0
- (id)userInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f11a2
- (unsigned long long)userInfosCount;	// IMP=0x00000000000f1185
- (void)addUserInfo:(id)arg1;	// IMP=0x00000000000f111b
- (void)clearUserInfos;	// IMP=0x00000000000f10fe
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;

@end

