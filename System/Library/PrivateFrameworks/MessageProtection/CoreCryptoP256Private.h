//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageProtection/P256PrivateKeyProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol>
{
    struct ccec_full_ctx *_full_key;	// 8 = 0x8
}

+ (id)generate;	// IMP=0x000000000000860f
@property struct ccec_full_ctx *full_key; // @synthesize full_key=_full_key;
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008a5f
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008a1c
- (id)keychainData;	// IMP=0x00000000000089c8
- (void)dealloc;	// IMP=0x0000000000008989
- (id)publicKey;	// IMP=0x00000000000088dd
- (id)keyAgreement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000086d9
- (id)initWithKey:(struct ccec_full_ctx *)arg1;	// IMP=0x00000000000085d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

