//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _DKPRMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_entrys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000119d9a
- (unsigned long long)hash;	// IMP=0x0000000000119d64
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000119cca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000119b2d
- (void)writeTo:(id)arg1;	// IMP=0x00000000001199fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001199f0
- (id)dictionaryRepresentation;	// IMP=0x000000000011960a
- (id)description;	// IMP=0x000000000011955b

@end
