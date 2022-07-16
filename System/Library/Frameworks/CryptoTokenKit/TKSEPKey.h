//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext, NSDictionary;

@interface TKSEPKey : NSObject
{
    LAContext *_authContext;	// 8 = 0x8
}

+ (_Bool)canUseSEPLocally;	// IMP=0x00000000000120ae
+ (void)setContextErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012095
+ (void)setupKeybagForTesting:(_Bool)arg1;	// IMP=0x000000000001207c
+ (void)setClientToken:(id)arg1;	// IMP=0x0000000000012068
+ (id)clientToken;	// IMP=0x0000000000012057
+ (_Bool)isGibraltar;	// IMP=0x000000000001203e
+ (_Bool)isDaytona;	// IMP=0x0000000000012025
+ (_Bool)hasSEP;	// IMP=0x000000000001200c
- (void).cxx_destruct;	// IMP=0x0000000000014191
@property(retain, nonatomic) LAContext *authContext; // @synthesize authContext=_authContext;
- (id)initWithAttributes:(id)arg1 authContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012dbb
@property(readonly, nonatomic) NSDictionary *attributes;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000012ae3
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012a91
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012a3f
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000129ed
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001299b
- (id)publicKeyWithError:(id *)arg1;	// IMP=0x0000000000012949
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x00000000000128f7
@property(readonly, nonatomic) _Bool systemKey;
@property(readonly, nonatomic) long long keySize;
@property(readonly, nonatomic) id keyType;
@property(readonly, nonatomic) struct __SecAccessControl *accessControl;
@property(readonly, nonatomic) id objectID;
- (id)initLocalWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000126f8
- (id)initLocalWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000012640
- (id)initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000012563
- (id)initWithObjectID:(id)arg1 authContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000122e5
- (id)_initWithAuthContext:(id)arg1;	// IMP=0x000000000001227a

@end

