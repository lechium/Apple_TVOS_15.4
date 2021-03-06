//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@interface ICStoreURLResponseAuthenticationProvider <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015f133
- (void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000015fa00
- (void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000015f3e2
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000015f366
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000015f13b

@end

