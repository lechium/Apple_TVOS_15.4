//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16CryptoKitPrivate9TDMServer : NSObject
{
    MISSING_TYPE *oprfServer;	// 8 = 0x8
    MISSING_TYPE *secret;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002aa40
- (_Bool)verifyTokenWithOutput:(id)arg1 TID:(id)arg2 FSR:(id)arg3;	// IMP=0x000000000002a880
- (id)evaluateWithBlindedElement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a6f0
- (id)info;	// IMP=0x000000000002a120
- (id)publicKey;	// IMP=0x000000000002a080
- (id)init;	// IMP=0x0000000000029f30

@end

