//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying>
{
    NSMutableArray *_topics;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008913d3
- (unsigned long long)hash;	// IMP=0x00000000008913b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000089131c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000089117f
- (void)writeTo:(id)arg1;	// IMP=0x000000000089104f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000891042
- (id)dictionaryRepresentation;	// IMP=0x0000000000890e0f
- (id)description;	// IMP=0x0000000000890d60

@end
