//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class FPSandboxingURLWrapper, NSURL;

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding>
{
    _Bool _hasActiveAccessAssertion;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    long long _allowedAccess;	// 24 = 0x18
    FPSandboxingURLWrapper *_sandboxExtensionWrapper;	// 32 = 0x20
    long long _underlyingSandboxAssertionHandle;	// 40 = 0x28
}

+ (id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;	// IMP=0x0000000000030815
+ (id)uniquedSecurityScopedResources:(id)arg1;	// IMP=0x0000000000030471
+ (id)_sandboxExtensionClassForAllowedAccess:(long long)arg1;	// IMP=0x0000000000030430
+ (_Bool)_isValidURLForIssuingSandboxExtension:(id)arg1;	// IMP=0x0000000000030315
+ (id)readwriteSandboxExtensionClassString;	// IMP=0x00000000000301f0
+ (id)readonlySandboxExtensionClassString;	// IMP=0x00000000000301cd
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002fe1e
+ (id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2;	// IMP=0x000000000002fcc4
+ (id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2;	// IMP=0x000000000002fc4b
+ (id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;	// IMP=0x000000000002fc39
+ (id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2;	// IMP=0x000000000002fb18
- (void).cxx_destruct;	// IMP=0x0000000000030c22
@property(nonatomic) long long underlyingSandboxAssertionHandle; // @synthesize underlyingSandboxAssertionHandle=_underlyingSandboxAssertionHandle;
@property(nonatomic) _Bool hasActiveAccessAssertion; // @synthesize hasActiveAccessAssertion=_hasActiveAccessAssertion;
@property(retain, nonatomic) FPSandboxingURLWrapper *sandboxExtensionWrapper; // @synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper;
@property(nonatomic) long long allowedAccess; // @synthesize allowedAccess=_allowedAccess;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)_isEqualAccessToSecurityScopedResource:(id)arg1;	// IMP=0x0000000000030213
- (void)stopAccessing;	// IMP=0x0000000000030165
- (_Bool)startAccessing;	// IMP=0x00000000000300ea
- (id)description;	// IMP=0x000000000002ffd6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002fefe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002fe26
@property(readonly, nonatomic) _Bool isContentManaged;
- (id)initWithAbsoluteURL:(id)arg1 sandboxExtensionWrapper:(id)arg2 allowedAccess:(long long)arg3;	// IMP=0x000000000002fd59

@end

