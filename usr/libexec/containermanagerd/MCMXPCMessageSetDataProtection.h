//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCMXPCMessageSetDataProtection
{
    _Bool _thirdParty;	// 8 = 0x8
    _Bool _retryIfLocked;	// 9 = 0x9
    int _dataProtectionClass;	// 12 = 0xc
}

@property(readonly, nonatomic) _Bool retryIfLocked; // @synthesize retryIfLocked=_retryIfLocked;
@property(readonly, nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, nonatomic, getter=isThirdParty) _Bool thirdParty; // @synthesize thirdParty=_thirdParty;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x001000000000bf56

@end
