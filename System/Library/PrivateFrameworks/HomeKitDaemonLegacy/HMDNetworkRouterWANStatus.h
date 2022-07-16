//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterWANStatus : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_identifier;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_status;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000485a7c
- (void).cxx_destruct;	// IMP=0x0000000000485a54
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *status; // @synthesize status=_status;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000485766
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004856d8
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000485408
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000485009
- (id)initWithIdentifier:(id)arg1 status:(id)arg2;	// IMP=0x0000000000484f70
- (id)init;	// IMP=0x0000000000484f41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

