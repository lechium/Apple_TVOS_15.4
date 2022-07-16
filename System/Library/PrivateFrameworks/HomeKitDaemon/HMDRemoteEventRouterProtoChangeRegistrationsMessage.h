//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>
{
    NSMutableArray *_topicAdditions;	// 8 = 0x8
    NSMutableArray *_topicFilterAdditions;	// 16 = 0x10
    NSMutableArray *_topicFilterRemovals;	// 24 = 0x18
    NSMutableArray *_topicRemovals;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000029c7b0
- (unsigned long long)hash;	// IMP=0x000000000029c72c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029c600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029c12d
- (void)writeTo:(id)arg1;	// IMP=0x000000000029bd70
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029bd63
- (id)dictionaryRepresentation;	// IMP=0x000000000029b921
- (id)description;	// IMP=0x000000000029b872

@end
