//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol XAMAuthorizationProvider;

__attribute__((visibility("hidden")))
@interface XAMWriter : NSObject
{
    CDUnknownBlockType _writerConnectionFactory;	// 8 = 0x8
    id <XAMAuthorizationProvider> _authorizationProvider;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000001997
+ (void)resetSharedWriter;	// IMP=0x000000000000194f
- (void).cxx_destruct;	// IMP=0x0000000000003340
@property(readonly) id <XAMAuthorizationProvider> authorizationProvider; // @synthesize authorizationProvider=_authorizationProvider;
@property(readonly) CDUnknownBlockType writerConnectionFactory; // @synthesize writerConnectionFactory=_writerConnectionFactory;
- (_Bool)removeNoAuthenticationRequiredCookieWithError:(id *)arg1;	// IMP=0x00000000000031f8
- (_Bool)createNoAuthenticationRequiredCookieWithError:(id *)arg1;	// IMP=0x00000000000030d8
- (_Bool)enableAutomationModeWithError:(id *)arg1;	// IMP=0x0000000000002dab
- (_Bool)disableAutomationModeWithError:(id *)arg1;	// IMP=0x0000000000002c8b
- (_Bool)_usingSyncProxy:(CDUnknownBlockType)arg1 withError:(id *)arg2;	// IMP=0x0000000000002962
- (void)removeNoAuthenticationRequiredCookieWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000294b
- (void)createNoAuthenticationRequiredCookieWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002931
- (void)_usingAsyncProxyEnablePasswordlessAutomation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002628
- (void)_enableAutomationModeWithProxy:(id)arg1 authorization:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002437
- (void)_authenticateAndEnableAutomationModeWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000022c6
- (void)_enableAutomationModeWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001ff2
- (void)_setAutomationModeEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001bcd
- (void)enableAutomationModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001bb3
- (void)disableAutomationModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001b9c
- (id)initWithWriterConnectionFactory:(CDUnknownBlockType)arg1 authorizationProvider:(id)arg2;	// IMP=0x0000000000001afb

@end

