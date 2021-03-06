//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface INCExtensionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_extensions;	// 16 = 0x10
    NSMutableDictionary *_killTimers;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000000000058b9
+ (void)initialize;	// IMP=0x0000000000005891
- (void).cxx_destruct;	// IMP=0x0000000000004dcb
- (void)_manageExtension:(id)arg1 requestIdentifier:(id)arg2;	// IMP=0x0000000000004d03
- (void)_killExtensionWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000004b70
- (void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000004a67
- (_Bool)isExtensionLoadedForExtensionBundleIdentifier:(id)arg1;	// IMP=0x0000000000004a27
- (void)killExtension:(id)arg1 requestIdentifier:(id)arg2 afterTimeout:(double)arg3;	// IMP=0x0000000000004960
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000045f0
- (id)init;	// IMP=0x0000000000004516

@end

