//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRCreateHostedEndpointResponseProtobuf : PBCodable <NSCopying>
{
    NSString *_groupUID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001f53f
- (unsigned long long)hash;	// IMP=0x000000000001f509
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f46f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f3f7
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f3b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f3ac
- (id)dictionaryRepresentation;	// IMP=0x000000000001f1de
- (id)description;	// IMP=0x000000000001f12f

@end

