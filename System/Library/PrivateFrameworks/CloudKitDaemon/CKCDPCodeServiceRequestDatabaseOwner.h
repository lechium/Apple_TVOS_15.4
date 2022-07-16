//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying>
{
    unsigned long long _numericValue;	// 8 = 0x8
    NSString *_stringValue;	// 16 = 0x10
    struct {
        unsigned int numericValue:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ea2fc
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) unsigned long long numericValue; // @synthesize numericValue=_numericValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002ea262
- (unsigned long long)hash;	// IMP=0x00000000002ea218
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ea153
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ea0c2
- (void)copyTo:(id)arg1;	// IMP=0x00000000002ea05e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e9ff9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e9fec
- (id)dictionaryRepresentation;	// IMP=0x00000000002e9d15
- (id)description;	// IMP=0x00000000002e9c66
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasNumericValue;

@end
