//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRConfigureConnectionMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_groupID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015da5f
- (unsigned long long)hash;	// IMP=0x000000000015da29
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015d98f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015d917
- (void)writeTo:(id)arg1;	// IMP=0x000000000015d8d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015d8cc
- (id)dictionaryRepresentation;	// IMP=0x000000000015d6fe
- (id)description;	// IMP=0x000000000015d64f

@end

