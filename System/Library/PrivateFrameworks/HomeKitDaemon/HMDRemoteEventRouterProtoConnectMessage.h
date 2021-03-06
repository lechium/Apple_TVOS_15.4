//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMEProtoEventInfo, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable <NSCopying>
{
    HMEProtoEventInfo *_connectEvent;	// 8 = 0x8
    unsigned int _routerVersion;	// 16 = 0x10
    NSMutableArray *_topicAdditions;	// 24 = 0x18
    NSMutableArray *_topicFilterAdditions;	// 32 = 0x20
    HMEProtoEventInfo *_unregisterEvent;	// 40 = 0x28
    struct {
        unsigned int routerVersion:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000849370
- (unsigned long long)hash;	// IMP=0x00000000008492bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000849159
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000848e2f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000848bc2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000848bb5
- (id)dictionaryRepresentation;	// IMP=0x000000000084886b
- (id)description;	// IMP=0x00000000008487bc

@end

