//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSString, _DKPRValue;

@interface _DKPRMetadataEntry : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    _DKPRValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001532bd
- (unsigned long long)hash;	// IMP=0x000000000015323e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000153176
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001530d8
- (void)writeTo:(id)arg1;	// IMP=0x000000000015303d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000153030
- (id)dictionaryRepresentation;	// IMP=0x0000000000152d96
- (id)description;	// IMP=0x0000000000152ce7

@end

