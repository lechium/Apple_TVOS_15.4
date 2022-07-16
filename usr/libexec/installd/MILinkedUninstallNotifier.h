//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIContainer, NSArray;
@protocol OS_dispatch_queue;

@interface MILinkedUninstallNotifier : NSObject
{
    NSArray *_removedAppBundleIDs;	// 8 = 0x8
    NSArray *_expectedRemovals;	// 16 = 0x10
    MIContainer *_appBundleContainer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)new;	// IMP=0x004000000004e1cd
- (void).cxx_destruct;	// IMP=0x002000000004ea96
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) MIContainer *appBundleContainer; // @synthesize appBundleContainer=_appBundleContainer;
@property(readonly, nonatomic) NSArray *expectedRemovals; // @synthesize expectedRemovals=_expectedRemovals;
@property(readonly, nonatomic) NSArray *removedAppBundleIDs; // @synthesize removedAppBundleIDs=_removedAppBundleIDs;
- (_Bool)performContainerRemovalWithError:(id *)arg1 diskSpaceCleanupCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e8bb
- (_Bool)performContainerRemovalWithError:(id *)arg1;	// IMP=0x001000000004e8a1
- (_Bool)_removeLinkedContainersWithDeletionOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000004e307
- (id)initWithAppBundleContainerToRemove:(id)arg1 withLinkedContainers:(id)arg2;	// IMP=0x001000000004e230
- (id)init;	// IMP=0x001000000004e16a

@end

