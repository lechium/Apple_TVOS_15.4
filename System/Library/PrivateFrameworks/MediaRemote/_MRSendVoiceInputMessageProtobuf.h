//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRAudioDataBlockProtobuf;

__attribute__((visibility("hidden")))
@interface _MRSendVoiceInputMessageProtobuf : PBCodable <NSCopying>
{
    _MRAudioDataBlockProtobuf *_dataBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000025078d
- (unsigned long long)hash;	// IMP=0x0000000000250757
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002506bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000250645
- (void)writeTo:(id)arg1;	// IMP=0x0000000000250607
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002505fa
- (id)dictionaryRepresentation;	// IMP=0x00000000002503b6
- (id)description;	// IMP=0x0000000000250307

@end

