//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExtensionFoundation/EXExtensionInfoProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EXRunningExtensionInfo : NSObject <EXExtensionInfoProviding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_containerBundleIdentifier;	// 16 = 0x10
    NSString *_containingViewControllerClassName;	// 24 = 0x18
    NSString *_runLoopType;	// 32 = 0x20
}

+ (id)extensionInfoForCurrentProcess;	// IMP=0x00000000000176ae
+ (void)notifyExtensionMainCalled;	// IMP=0x000000000001767d
- (void).cxx_destruct;	// IMP=0x0000000000017a2b
@property(readonly) NSString *runLoopType; // @synthesize runLoopType=_runLoopType;
@property(readonly, nonatomic) NSString *containingViewControllerClassName; // @synthesize containingViewControllerClassName=_containingViewControllerClassName;
@property(readonly, nonatomic) NSString *containerBundleIdentifier; // @synthesize containerBundleIdentifier=_containerBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initForCurrentProcess;	// IMP=0x000000000001771e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

