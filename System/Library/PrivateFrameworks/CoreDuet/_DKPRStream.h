//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSString, _DKPRValueType;

@interface _DKPRStream : PBCodable <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    _DKPRValueType *_type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004d457
- (unsigned long long)hash;	// IMP=0x000000000004d3d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d310
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d272
- (void)writeTo:(id)arg1;	// IMP=0x000000000004d1d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004d1ca
- (id)dictionaryRepresentation;	// IMP=0x000000000004cf30
- (id)description;	// IMP=0x000000000004ce81

@end
