//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRReceivedCommandAppOptionsProtobuf : PBCodable <NSCopying>
{
    _Bool _launchApplication;	// 8 = 0x8
    struct {
        unsigned int launchApplication:1;
    } _has;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x0000000000035a73
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000359d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003596f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000035943
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000035936
- (id)dictionaryRepresentation;	// IMP=0x00000000000356bc
- (id)description;	// IMP=0x000000000003560d

@end

