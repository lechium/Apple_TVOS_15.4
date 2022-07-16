//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSData, NSString, NWPBAgentClass;

@interface NWPBAgent : PBCodable <NSCopying>
{
    NWPBAgentClass *_agentClass;	// 8 = 0x8
    NSData *_agentData;	// 16 = 0x10
    NSString *_agentDescription;	// 24 = 0x18
    NSString *_agentIdentifier;	// 32 = 0x20
    _Bool _active;	// 40 = 0x28
    _Bool _networkProvider;	// 41 = 0x29
    _Bool _nexusProvider;	// 42 = 0x2a
    _Bool _userActivated;	// 43 = 0x2b
    _Bool _voluntary;	// 44 = 0x2c
    struct {
        unsigned int active:1;
        unsigned int networkProvider:1;
        unsigned int nexusProvider:1;
        unsigned int userActivated:1;
        unsigned int voluntary:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001ad20
@property(retain, nonatomic) NSData *agentData; // @synthesize agentData=_agentData;
@property(nonatomic) _Bool nexusProvider; // @synthesize nexusProvider=_nexusProvider;
@property(nonatomic) _Bool networkProvider; // @synthesize networkProvider=_networkProvider;
@property(nonatomic) _Bool voluntary; // @synthesize voluntary=_voluntary;
@property(nonatomic) _Bool userActivated; // @synthesize userActivated=_userActivated;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *agentDescription; // @synthesize agentDescription=_agentDescription;
@property(retain, nonatomic) NSString *agentIdentifier; // @synthesize agentIdentifier=_agentIdentifier;
@property(retain, nonatomic) NWPBAgentClass *agentClass; // @synthesize agentClass=_agentClass;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001aa50
- (unsigned long long)hash;	// IMP=0x000000000001a910
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a6d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a520
- (void)copyTo:(id)arg1;	// IMP=0x000000000001a3c0
- (void)writeTo:(id)arg1;	// IMP=0x000000000001a250
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001a240
- (id)dictionaryRepresentation;	// IMP=0x0000000000019f40
- (id)description;	// IMP=0x0000000000019e90
@property(readonly, nonatomic) _Bool hasAgentData;
@property(nonatomic) _Bool hasNexusProvider;
@property(nonatomic) _Bool hasNetworkProvider;
@property(nonatomic) _Bool hasVoluntary;
@property(nonatomic) _Bool hasUserActivated;
@property(nonatomic) _Bool hasActive;
@property(readonly, nonatomic) _Bool hasAgentDescription;
@property(readonly, nonatomic) _Bool hasAgentIdentifier;
@property(readonly, nonatomic) _Bool hasAgentClass;

@end

