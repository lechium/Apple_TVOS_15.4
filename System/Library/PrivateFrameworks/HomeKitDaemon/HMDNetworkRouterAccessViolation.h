//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_lastViolationTimestamp;	// 16 = 0x10
    HAPTLVUnsignedNumberValue *_lastResetTimestamp;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b909b
- (void).cxx_destruct;	// IMP=0x00000000004b9068
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lastResetTimestamp; // @synthesize lastResetTimestamp=_lastResetTimestamp;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lastViolationTimestamp; // @synthesize lastViolationTimestamp=_lastViolationTimestamp;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b8c6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b8bb4
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004b87f4
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b8351
- (id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3;	// IMP=0x00000000004b829a
- (id)init;	// IMP=0x00000000004b826b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

