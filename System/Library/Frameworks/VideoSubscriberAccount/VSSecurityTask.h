//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSSecurityTask : NSObject
{
    unsigned long long _kind;	// 8 = 0x8
    CDStruct_4c969caf _auditToken;	// 16 = 0x10
    CDUnknownFunctionPointerType _createWithAuditToken;	// 48 = 0x30
    CDUnknownFunctionPointerType _createFromSelf;	// 56 = 0x38
    CDUnknownFunctionPointerType _copyValueForEntitlement;	// 64 = 0x40
    CDUnknownFunctionPointerType _copySigningIdentifier;	// 72 = 0x48
    struct __SecTask *_taskRef;	// 80 = 0x50
}

+ (void)setSecurityTaskForCurrentConnection:(id)arg1;	// IMP=0x00000000000509b2
+ (id)securityTaskForCurrentConnection;	// IMP=0x00000000000508f6
+ (id)securityTaskWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00000000000508a6
+ (id)currentSecurityTask;	// IMP=0x000000000005086f
@property(readonly, copy, nonatomic) NSString *signingIdentifier;
- (_Bool)shouldAllowAccessToSubscriberIdentifierHashModifier:(id)arg1;	// IMP=0x0000000000050d9b
- (_Bool)shouldAllowAccessForBooleanEntitlement:(id)arg1;	// IMP=0x0000000000050c82
- (_Bool)getValue:(id *)arg1 forEntitlement:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000050b87
- (struct __SecTask *)_taskRef;	// IMP=0x0000000000050b14
- (CDUnknownFunctionPointerType)_copySigningIdentifier;	// IMP=0x0000000000050afa
- (id)init;	// IMP=0x0000000000050ab8
- (void)dealloc;	// IMP=0x0000000000050a79
- (id)initWithCreateFromSelfProc:(CDUnknownFunctionPointerType)arg1 copyValueForEntitlementProc:(CDUnknownFunctionPointerType)arg2;	// IMP=0x0000000000050a29
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 createWithAuditTokenProc:(CDUnknownFunctionPointerType)arg2 copyValueForEntitlementProc:(CDUnknownFunctionPointerType)arg3;	// IMP=0x00000000000509c6

@end

