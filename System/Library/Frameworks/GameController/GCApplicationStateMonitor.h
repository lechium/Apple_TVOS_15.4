//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCFrontmostApplicationObserverDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GCApplicationStateMonitor : NSObject <GCFrontmostApplicationObserverDelegate>
{
    BKSApplicationStateMonitor *_bksStateMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMapTable *_pidToObservers;	// 24 = 0x18
    NSMapTable *_observerToPIDs;	// 32 = 0x20
    NSMutableDictionary *_pidToBundleIdentifier;	// 40 = 0x28
    int _frontmostApplication;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000015953
- (void).cxx_destruct;	// IMP=0x0000000000017b35
@property(nonatomic) int frontmostApplication; // @synthesize frontmostApplication=_frontmostApplication;
- (void)dealloc;	// IMP=0x0000000000017ae1
- (void)onFrontmostApplicationChanged:(int)arg1;	// IMP=0x0000000000017698
- (void)updateInterestedBundleIDs;	// IMP=0x00000000000171df
- (void)removeObserver:(id)arg1 forProcessIdentifier:(int)arg2;	// IMP=0x0000000000016c2d
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000168f9
- (void)addObserver:(id)arg1 forProcessIdentifier:(int)arg2;	// IMP=0x0000000000015fa5
- (void)initializeStateMonitor;	// IMP=0x0000000000015aec
- (void)initializeForegroundMonitor;	// IMP=0x0000000000015ae6
- (id)init;	// IMP=0x00000000000159fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

