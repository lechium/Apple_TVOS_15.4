//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_lastViolationTimestamp;	// 16 = 0x10
    HAPTLVUnsignedNumberValue *_lastResetTimestamp;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000046a093
- (void).cxx_destruct;	// IMP=0x000000000046a060
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lastResetTimestamp; // @synthesize lastResetTimestamp=_lastResetTimestamp;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lastViolationTimestamp; // @synthesize lastViolationTimestamp=_lastViolationTimestamp;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000469c64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000469bac
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004697ec
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000469349
- (id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3;	// IMP=0x0000000000469292
- (id)init;	// IMP=0x0000000000469263

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

