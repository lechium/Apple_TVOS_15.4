//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CKCDPError : PBCodable <NSCopying>
{
    int _auxiliaryCode;	// 8 = 0x8
    NSString *_auxiliaryDomain;	// 16 = 0x10
    NSMutableArray *_auxiliaryUserInfos;	// 24 = 0x18
    int _code;	// 32 = 0x20
    NSString *_message;	// 40 = 0x28
    int _targetPartition;	// 48 = 0x30
    struct {
        unsigned int auxiliaryCode:1;
        unsigned int code:1;
        unsigned int targetPartition:1;
    } _has;	// 52 = 0x34
}

+ (Class)auxiliaryUserInfoType;	// IMP=0x00000000002969f8
- (void).cxx_destruct;	// IMP=0x0000000000297dc0
@property(nonatomic) int targetPartition; // @synthesize targetPartition=_targetPartition;
@property(retain, nonatomic) NSMutableArray *auxiliaryUserInfos; // @synthesize auxiliaryUserInfos=_auxiliaryUserInfos;
@property(nonatomic) int auxiliaryCode; // @synthesize auxiliaryCode=_auxiliaryCode;
@property(retain, nonatomic) NSString *auxiliaryDomain; // @synthesize auxiliaryDomain=_auxiliaryDomain;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000297b1c
- (unsigned long long)hash;	// IMP=0x0000000000297a2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002978a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000297627
- (void)copyTo:(id)arg1;	// IMP=0x00000000002974c4
- (void)writeTo:(id)arg1;	// IMP=0x00000000002972e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002972d4
- (id)dictionaryRepresentation;	// IMP=0x0000000000296b03
- (id)description;	// IMP=0x0000000000296a54
@property(nonatomic) _Bool hasTargetPartition;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002969db
- (unsigned long long)auxiliaryUserInfosCount;	// IMP=0x00000000002969be
- (void)addAuxiliaryUserInfo:(id)arg1;	// IMP=0x0000000000296954
- (void)clearAuxiliaryUserInfos;	// IMP=0x0000000000296937
@property(nonatomic) _Bool hasAuxiliaryCode;
@property(readonly, nonatomic) _Bool hasAuxiliaryDomain;
@property(readonly, nonatomic) _Bool hasMessage;
- (int)StringAsCode:(id)arg1;	// IMP=0x0000000000296814
- (id)codeAsString:(int)arg1;	// IMP=0x0000000000296793
@property(nonatomic) _Bool hasCode;
@property(nonatomic) int code; // @synthesize code=_code;

@end
