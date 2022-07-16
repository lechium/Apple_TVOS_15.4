//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKCDPErrorUserInfoValue : PBCodable <NSCopying>
{
    double _doubleValue;	// 8 = 0x8
    long long _int64Value;	// 16 = 0x10
    NSData *_bytesValue;	// 24 = 0x18
    NSString *_stringValue;	// 32 = 0x20
    _Bool _boolValue;	// 40 = 0x28
    CDStruct_f7459c01 _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000254401
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002542c4
- (unsigned long long)hash;	// IMP=0x0000000000254127
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000253fc5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000253ec7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000253e07
- (void)writeTo:(id)arg1;	// IMP=0x0000000000253d39
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000253d2c
- (id)dictionaryRepresentation;	// IMP=0x0000000000253841
- (id)description;	// IMP=0x0000000000253792
@property(readonly, nonatomic) _Bool hasBytesValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasInt64Value;
@property(nonatomic) _Bool hasDoubleValue;

@end

