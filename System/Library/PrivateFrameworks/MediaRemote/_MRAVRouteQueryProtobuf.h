//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRAVRouteQueryProtobuf : PBCodable <NSCopying>
{
    NSString *_routeUID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003c700
- (unsigned long long)hash;	// IMP=0x000000000003c6ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c630
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c5b8
- (void)writeTo:(id)arg1;	// IMP=0x000000000003c57a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003c56d
- (id)dictionaryRepresentation;	// IMP=0x000000000003c39f
- (id)description;	// IMP=0x000000000003c2f0

@end
