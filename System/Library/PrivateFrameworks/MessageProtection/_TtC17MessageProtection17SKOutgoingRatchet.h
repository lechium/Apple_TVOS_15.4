//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC17MessageProtection17SKOutgoingRatchet : NSObject
{
    MISSING_TYPE *ratchet;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *signingKey;	// 0 = 0x0
    MISSING_TYPE *currentSubscriptionKey;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *currentMessageKey;	// 0 = 0x0
}

+ (id)generate;	// IMP=0x0000000000028710
- (void).cxx_destruct;	// IMP=0x0000000000029be0
- (id)signingKeyIdentifier;	// IMP=0x0000000000029b70
- (id)serializedData;	// IMP=0x0000000000029960
- (id)currentSubscriptionKeys;	// IMP=0x00000000000294e0
- (id)sealMessage:(id)arg1 authenticating:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000029140
- (_Bool)ratchetForward;	// IMP=0x0000000000028aa0
- (id)init;	// IMP=0x00000000000286d0
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000281e0

@end
