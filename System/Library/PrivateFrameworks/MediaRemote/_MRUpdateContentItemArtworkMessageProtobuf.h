//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

__attribute__((visibility("hidden")))
@interface _MRUpdateContentItemArtworkMessageProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_contentItems;	// 8 = 0x8
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ef70a
- (unsigned long long)hash;	// IMP=0x00000000000ef671
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ef5a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ef3cc
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ef252
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ef245
- (id)dictionaryRepresentation;	// IMP=0x00000000000eedb8
- (id)description;	// IMP=0x00000000000eed09

@end

