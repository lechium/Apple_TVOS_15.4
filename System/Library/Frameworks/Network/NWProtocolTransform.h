//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NWEndpoint;
@protocol OS_nw_protocol_transform;

@interface NWProtocolTransform : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_protocol_transform> *_internalTransform;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006c200
@property(retain) NSObject<OS_nw_protocol_transform> *internalTransform; // @synthesize internalTransform=_internalTransform;
@property(nonatomic) _Bool disablePathFallback;
@property(nonatomic) int dataMode;
- (void)setFastOpenForceEnable:(_Bool)arg1;	// IMP=0x000000000006c090
- (_Bool)fastOpenForceEnable;	// IMP=0x000000000006c050
@property(nonatomic) _Bool tfoNoCookie;
@property(nonatomic) _Bool tfo;
@property(nonatomic) int multipathService;
@property(nonatomic) _Bool noProxy;
@property(nonatomic) _Bool prohibitDirect;
@property(nonatomic) unsigned long long fallbackMode;
@property(copy, nonatomic) NWEndpoint *replacementEndpoint;
- (void)appendProtocol:(id)arg1 atLevel:(int)arg2;	// IMP=0x000000000006bbe0
- (void)clearProtocolsAtLevel:(int)arg1;	// IMP=0x000000000006bba0
- (void)disableProtocol:(struct nw_protocol_identifier *)arg1;	// IMP=0x000000000006bb60
- (unsigned long long)hash;	// IMP=0x000000000006bb20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ba50
- (id)privateDescription;	// IMP=0x000000000006ba20
- (id)description;	// IMP=0x000000000006ba00
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;	// IMP=0x000000000006b810
- (id)initWithCTransform:(id)arg1;	// IMP=0x000000000006b3b0
- (id)init;	// IMP=0x000000000006af50

@end

