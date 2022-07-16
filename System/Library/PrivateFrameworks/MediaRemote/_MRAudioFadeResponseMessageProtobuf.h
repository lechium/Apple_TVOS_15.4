//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRAudioFadeResponseMessageProtobuf : PBCodable <NSCopying>
{
    long long _fadeDuration;	// 8 = 0x8
    struct {
        unsigned int fadeDuration:1;
    } _has;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x0000000000086949
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000868b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086852
- (void)writeTo:(id)arg1;	// IMP=0x0000000000086826
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000086819
- (id)dictionaryRepresentation;	// IMP=0x000000000008659f
- (id)description;	// IMP=0x00000000000864f0

@end

