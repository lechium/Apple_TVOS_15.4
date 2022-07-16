//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NWPBEndpoint, NWPBInterface, NWPBParameters;

@interface NWPBPath : PBCodable <NSCopying>
{
    NSMutableArray *_agents;	// 8 = 0x8
    NSString *_clientUUID;	// 16 = 0x10
    NWPBInterface *_delegateInterface;	// 24 = 0x18
    NWPBInterface *_directInterface;	// 32 = 0x20
    NWPBEndpoint *_endpoint;	// 40 = 0x28
    NWPBParameters *_parameters;	// 48 = 0x30
    int _status;	// 56 = 0x38
    _Bool _direct;	// 60 = 0x3c
    _Bool _ipv4;	// 61 = 0x3d
    _Bool _ipv6;	// 62 = 0x3e
    _Bool _local;	// 63 = 0x3f
    struct {
        unsigned int status:1;
        unsigned int direct:1;
        unsigned int ipv4:1;
        unsigned int ipv6:1;
        unsigned int local:1;
    } _has;	// 64 = 0x40
}

+ (Class)agentsType;	// IMP=0x0000000000077550
- (void).cxx_destruct;	// IMP=0x0000000000075d00
@property(nonatomic) _Bool direct; // @synthesize direct=_direct;
@property(nonatomic) _Bool local; // @synthesize local=_local;
@property(nonatomic) _Bool ipv6; // @synthesize ipv6=_ipv6;
@property(nonatomic) _Bool ipv4; // @synthesize ipv4=_ipv4;
@property(retain, nonatomic) NSMutableArray *agents; // @synthesize agents=_agents;
@property(retain, nonatomic) NWPBInterface *delegateInterface; // @synthesize delegateInterface=_delegateInterface;
@property(retain, nonatomic) NWPBInterface *directInterface; // @synthesize directInterface=_directInterface;
@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(retain, nonatomic) NWPBParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NWPBEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000757d0
- (unsigned long long)hash;	// IMP=0x0000000000075650
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000753b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000075060
- (void)copyTo:(id)arg1;	// IMP=0x0000000000074e50
- (void)writeTo:(id)arg1;	// IMP=0x0000000000074b90
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000074b80
- (id)dictionaryRepresentation;	// IMP=0x0000000000074580
- (id)description;	// IMP=0x00000000000744d0
@property(nonatomic) _Bool hasDirect;
@property(nonatomic) _Bool hasLocal;
@property(nonatomic) _Bool hasIpv6;
@property(nonatomic) _Bool hasIpv4;
- (id)agentsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000074330
- (unsigned long long)agentsCount;	// IMP=0x0000000000074310
- (void)addAgents:(id)arg1;	// IMP=0x00000000000742a0
- (void)clearAgents;	// IMP=0x0000000000074280
@property(readonly, nonatomic) _Bool hasDelegateInterface;
@property(readonly, nonatomic) _Bool hasDirectInterface;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000074190
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000074100
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasClientUUID;
@property(readonly, nonatomic) _Bool hasParameters;
@property(readonly, nonatomic) _Bool hasEndpoint;

@end

