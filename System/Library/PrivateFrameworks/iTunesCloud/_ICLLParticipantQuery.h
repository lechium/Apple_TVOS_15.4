//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _ICLLParticipantQuery : PBCodable <NSCopying>
{
    NSMutableArray *_participants;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f9fbf
- (unsigned long long)hash;	// IMP=0x00000000000f9fa2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f9f08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f9d6b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f9c3b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f9c2e
- (id)dictionaryRepresentation;	// IMP=0x00000000000f99fb
- (id)description;	// IMP=0x00000000000f994c

@end

