//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSData, NSString;

@interface CTBinarySMS : NSObject
{
    int _portAddressingScheme;	// 8 = 0x8
    int _srcPort;	// 12 = 0xc
    int _dstPort;	// 16 = 0x10
    int _smsType;	// 20 = 0x14
    NSData *_payload;	// 24 = 0x18
    NSString *_destinationAddress;	// 32 = 0x20
    NSString *_smscAddress;	// 40 = 0x28
    CTXPCServiceSubscriptionContext *_context;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009f8d1
@property(nonatomic) int smsType; // @synthesize smsType=_smsType;
@property(copy, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *smscAddress; // @synthesize smscAddress=_smscAddress;
@property(copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int dstPort; // @synthesize dstPort=_dstPort;
@property(nonatomic) int srcPort; // @synthesize srcPort=_srcPort;
@property(nonatomic) int portAddressingScheme; // @synthesize portAddressingScheme=_portAddressingScheme;
- (_Bool)isValid;	// IMP=0x000000000009f7c3
- (id)init;	// IMP=0x000000000009f704

@end

