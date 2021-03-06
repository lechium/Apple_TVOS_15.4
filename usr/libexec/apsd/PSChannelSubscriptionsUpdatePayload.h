//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PSChannelSubscriptionsUpdatePayload : PBCodable
{
    NSMutableArray *_appChannelUpdates;	// 8 = 0x8
    NSMutableArray *_subscriptionUpdates;	// 16 = 0x10
}

+ (Class)subscriptionUpdatesType;	// IMP=0x0020000000074c3f
+ (Class)appChannelUpdatesType;	// IMP=0x0010000000074b6d
- (void).cxx_destruct;	// IMP=0x0020000000075d2d
@property(retain, nonatomic) NSMutableArray *subscriptionUpdates; // @synthesize subscriptionUpdates=_subscriptionUpdates;
@property(retain, nonatomic) NSMutableArray *appChannelUpdates; // @synthesize appChannelUpdates=_appChannelUpdates;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000075aa1
- (unsigned long long)hash;	// IMP=0x0010000000075a54
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007598c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000075690
- (void)copyTo:(id)arg1;	// IMP=0x0010000000075530
- (void)writeTo:(id)arg1;	// IMP=0x001000000007531f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000075312
- (id)dictionaryRepresentation;	// IMP=0x0010000000074cff
- (id)description;	// IMP=0x0010000000074c50
- (id)subscriptionUpdatesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000074c22
- (unsigned long long)subscriptionUpdatesCount;	// IMP=0x0010000000074c05
- (void)addSubscriptionUpdates:(id)arg1;	// IMP=0x0010000000074b9b
- (void)clearSubscriptionUpdates;	// IMP=0x0010000000074b7e
- (id)appChannelUpdatesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000074b50
- (unsigned long long)appChannelUpdatesCount;	// IMP=0x0010000000074b33
- (void)addAppChannelUpdates:(id)arg1;	// IMP=0x0010000000074ac9
- (void)clearAppChannelUpdates;	// IMP=0x0010000000074aac

@end

