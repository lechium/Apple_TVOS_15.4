//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSData, NWPBAddressEndpoint, NWPBHostEndpoint, NWPBInterface, NWPBServiceEndpoint;

@interface NWPBEndpoint : PBCodable <NSCopying>
{
    NWPBAddressEndpoint *_address;	// 8 = 0x8
    NWPBHostEndpoint *_host;	// 16 = 0x10
    NWPBInterface *_interface;	// 24 = 0x18
    NWPBServiceEndpoint *_service;	// 32 = 0x20
    NSData *_txtRecord;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000de30
@property(retain, nonatomic) NSData *txtRecord; // @synthesize txtRecord=_txtRecord;
@property(retain, nonatomic) NWPBInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NWPBServiceEndpoint *service; // @synthesize service=_service;
@property(retain, nonatomic) NWPBHostEndpoint *host; // @synthesize host=_host;
@property(retain, nonatomic) NWPBAddressEndpoint *address; // @synthesize address=_address;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000dbd0
- (unsigned long long)hash;	// IMP=0x000000000000db20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d9c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d8a0
- (void)copyTo:(id)arg1;	// IMP=0x000000000000d7d0
- (void)writeTo:(id)arg1;	// IMP=0x000000000000d710
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000d700
- (id)dictionaryRepresentation;	// IMP=0x000000000000d560
- (id)description;	// IMP=0x000000000000d4b0
@property(readonly, nonatomic) _Bool hasTxtRecord;
@property(readonly, nonatomic) _Bool hasInterface;
@property(readonly, nonatomic) _Bool hasService;
@property(readonly, nonatomic) _Bool hasHost;
@property(readonly, nonatomic) _Bool hasAddress;

@end
