//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPProtocolVersion, NSString;

@interface HMDNetworkRouterICMPType : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterIPProtocolVersion *_protocol;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_typeValue;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c0caf
+ (id)typeFromICMPType:(id)arg1;	// IMP=0x00000000004502f9
- (void).cxx_destruct;	// IMP=0x00000000004c0c87
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *typeValue; // @synthesize typeValue=_typeValue;
@property(retain, nonatomic) HMDNetworkRouterIPProtocolVersion *protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c0999
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c090b
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004c063b
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c023c
- (id)initWithProtocol:(id)arg1 typeValue:(id)arg2;	// IMP=0x00000000004c01a3
- (id)init;	// IMP=0x00000000004c0174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

