//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection, VSIdentityProvider, VSOptional;

@interface VSDeveloperIdentityProviderChangeOperation
{
    VSIdentityProvider *_identityProvider;	// 8 = 0x8
    long long _changeKind;	// 16 = 0x10
    VSOptional *_result;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000007ab0
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(nonatomic) long long changeKind; // @synthesize changeKind=_changeKind;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void)executionDidBegin;	// IMP=0x00000000000076f3
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007670
- (void)dealloc;	// IMP=0x0000000000007627
- (id)init;	// IMP=0x000000000000753e

@end
