//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MRTransactionPacketsProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_packets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000199e3a
- (unsigned long long)hash;	// IMP=0x0000000000199e04
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000199d6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000199bcd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000199a9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000199a90
- (id)dictionaryRepresentation;	// IMP=0x00000000001996aa
- (id)description;	// IMP=0x00000000001995fb

@end

