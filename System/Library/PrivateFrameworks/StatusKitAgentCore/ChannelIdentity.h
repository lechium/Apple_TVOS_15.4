//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <StatusKitAgentCore/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ChannelIdentity : PBCodable <NSCopying>
{
    NSData *_channelId;	// 8 = 0x8
    int _channelOwnershipType;	// 16 = 0x10
    NSData *_channelToken;	// 24 = 0x18
    NSString *_channelTopic;	// 32 = 0x20
    CDStruct_cada917b _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000020556
@property(retain, nonatomic) NSData *channelToken; // @synthesize channelToken=_channelToken;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *channelTopic; // @synthesize channelTopic=_channelTopic;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000020444
- (unsigned long long)hash;	// IMP=0x00000000000203ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020282
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002019e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000200fb
- (void)writeTo:(id)arg1;	// IMP=0x000000000002005d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000020050
- (id)dictionaryRepresentation;	// IMP=0x000000000001fcdd
- (id)description;	// IMP=0x000000000001fc2e
- (int)StringAsChannelOwnershipType:(id)arg1;	// IMP=0x000000000001fc0f
- (id)channelOwnershipTypeAsString:(int)arg1;	// IMP=0x000000000001fbcb
@property(nonatomic) _Bool hasChannelOwnershipType;
@property(nonatomic) int channelOwnershipType; // @synthesize channelOwnershipType=_channelOwnershipType;
@property(readonly, nonatomic) _Bool hasChannelToken;
@property(readonly, nonatomic) _Bool hasChannelId;
@property(readonly, nonatomic) _Bool hasChannelTopic;

@end
