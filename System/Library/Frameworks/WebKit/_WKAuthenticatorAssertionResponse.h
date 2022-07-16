//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface _WKAuthenticatorAssertionResponse
{
    NSData *_authenticatorData;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
    NSData *_userHandle;	// 24 = 0x18
}

@property(readonly, nonatomic) NSData *userHandle; // @synthesize userHandle=_userHandle;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *authenticatorData; // @synthesize authenticatorData=_authenticatorData;
- (id)initWithClientDataJSON:(id)arg1 rawId:(id)arg2 extensions:(void *)arg3 authenticatorData:(id)arg4 signature:(id)arg5 userHandle:(id)arg6 attachment:(long long)arg7;	// IMP=0x000000000000292a

@end

