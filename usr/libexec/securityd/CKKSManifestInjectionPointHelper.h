//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SFECKeyPair;

__attribute__((visibility("hidden")))
@interface CKKSManifestInjectionPointHelper : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    _SFECKeyPair *_keyPair;	// 16 = 0x10
}

+ (void)setIgnoreChanges:(_Bool)arg1;	// IMP=0x0020000000122e30
+ (_Bool)ignoreChanges;	// IMP=0x0010000000122e24
+ (void)registerEgoPeerID:(id)arg1 keyPair:(id)arg2;	// IMP=0x0010000000122da7
+ (void)registerHelper:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000122d1c
- (void).cxx_destruct;	// IMP=0x0020000000122b0c
- (id)peerID;	// IMP=0x0010000000122afe
- (id)keyPair;	// IMP=0x0010000000122af0
- (void)performWithPeerVerifyingKeys:(CDUnknownBlockType)arg1;	// IMP=0x00100000001227da
- (void)performWithEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x001000000012270a
- (void)performWithSigningKey:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122573
- (id)description;	// IMP=0x00100000001224ed
- (id)initWithPeerID:(id)arg1 keyPair:(id)arg2 isEgoPeer:(_Bool)arg3;	// IMP=0x001000000012241b

@end

