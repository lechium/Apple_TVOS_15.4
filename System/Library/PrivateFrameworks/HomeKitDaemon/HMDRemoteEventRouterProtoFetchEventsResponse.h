//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoFetchEventsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_changedEvents;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008958da
- (unsigned long long)hash;	// IMP=0x00000000008958bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000895823
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000895686
- (void)writeTo:(id)arg1;	// IMP=0x0000000000895556
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008953bd
- (id)dictionaryRepresentation;	// IMP=0x000000000089518a
- (id)description;	// IMP=0x00000000008950db

@end

