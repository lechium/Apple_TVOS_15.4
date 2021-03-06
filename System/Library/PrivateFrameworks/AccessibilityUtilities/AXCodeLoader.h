//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXImageMonitorObserver-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol AXImageMonitor, OS_dispatch_queue, OS_dispatch_source;

@interface AXCodeLoader : NSObject <AXImageMonitorObserver>
{
    id <AXImageMonitor> _imageMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_loadAccessibilityCodeItemsSource;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dyldImageActivityCoalesceTimer;	// 32 = 0x20
    long long _monitoredLoadTriggeringImageCountSinceLastLoad;	// 40 = 0x28
    NSMutableSet *_trackedCodeItems;	// 48 = 0x30
    NSMutableSet *_accessibilityCodeItems;	// 56 = 0x38
    NSMutableDictionary *_codeItemsByNameType;	// 64 = 0x40
    CDUnknownBlockType _beginTrackingCompletion;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_beginTrackingCompletionQueue;	// 80 = 0x50
    _Bool _initialLoadHasOccurred;	// 88 = 0x58
    _Bool _initialLoadHasFinished;	// 89 = 0x59
    NSString *_currentPlatformKey;	// 96 = 0x60
    _Bool _shouldAutoloadAccessibilityCodeItems;	// 104 = 0x68
    long long _trackingMode;	// 112 = 0x70
    CDUnknownBlockType _shouldLoadAccessibilityCodeItemBlock;	// 120 = 0x78
    CDUnknownBlockType _didLoadAccessibilityCodeItemBlock;	// 128 = 0x80
    CDUnknownBlockType _loadEventWillOccurBlock;	// 136 = 0x88
    CDUnknownBlockType _loadEventDidOccurBlock;	// 144 = 0x90
}

+ (id)defaultLoader;	// IMP=0x000000000003fd72
- (void).cxx_destruct;	// IMP=0x00000000000439e2
@property(copy, nonatomic) CDUnknownBlockType loadEventDidOccurBlock; // @synthesize loadEventDidOccurBlock=_loadEventDidOccurBlock;
@property(copy, nonatomic) CDUnknownBlockType loadEventWillOccurBlock; // @synthesize loadEventWillOccurBlock=_loadEventWillOccurBlock;
@property(copy, nonatomic) CDUnknownBlockType didLoadAccessibilityCodeItemBlock; // @synthesize didLoadAccessibilityCodeItemBlock=_didLoadAccessibilityCodeItemBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldLoadAccessibilityCodeItemBlock; // @synthesize shouldLoadAccessibilityCodeItemBlock=_shouldLoadAccessibilityCodeItemBlock;
@property(nonatomic) _Bool shouldAutoloadAccessibilityCodeItems; // @synthesize shouldAutoloadAccessibilityCodeItems=_shouldAutoloadAccessibilityCodeItems;
@property(nonatomic) long long trackingMode; // @synthesize trackingMode=_trackingMode;
- (void)iterateInitialImageListForImageMonitor:(id)arg1;	// IMP=0x000000000004386a
- (void)imageMonitor:(id)arg1 didAddImage:(id)arg2;	// IMP=0x00000000000437ce
- (void)queryAccessibilityBundleIsLoadedWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043523
- (void)_loadAccessibilityCodeItems;	// IMP=0x0000000000042a91
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)arg1;	// IMP=0x00000000000423cd
- (id)_accessibilityBundleMapURLs;	// IMP=0x0000000000042118
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;	// IMP=0x000000000004207a
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)arg1;	// IMP=0x0000000000041f43
- (id)_accessibilityCodeItemMatchingName:(id)arg1 type:(long long)arg2 path:(id)arg3;	// IMP=0x0000000000041bea
- (id)_platformKeyForPlatform:(unsigned int)arg1;	// IMP=0x0000000000041bbe
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;	// IMP=0x0000000000041a65
- (void)_initializeCodeItemMappings;	// IMP=0x0000000000041797
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;	// IMP=0x0000000000041645
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;	// IMP=0x00000000000414bf
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;	// IMP=0x00000000000413c7
- (void)_cancelDyldImageActivityTimer;	// IMP=0x00000000000413a2
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)arg1;	// IMP=0x00000000000411ed
- (void)setAccessibilityCodeItemsNeedLoaded;	// IMP=0x00000000000411da
- (id)codeItemForBundle:(id)arg1;	// IMP=0x0000000000040e94
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(_Bool)arg1;	// IMP=0x0000000000040d6f
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(_Bool)arg1;	// IMP=0x0000000000040c1f
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(_Bool)arg1;	// IMP=0x000000000004090f
- (void)_addTrackedCodeItem:(id)arg1;	// IMP=0x0000000000040688
- (void)endTrackingLoadedCodeItemsWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;	// IMP=0x00000000000404cc
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)arg1 completion:(CDUnknownBlockType)arg2 targetQueue:(id)arg3;	// IMP=0x00000000000402e6
@property(readonly, nonatomic) _Bool isInitialLoadFinished;
@property(readonly, nonatomic) _Bool isTrackingLoadedCodeItems;
- (CDUnknownBlockType)_validLoadEventDidOccurBlock;	// IMP=0x000000000004021b
- (CDUnknownBlockType)_validLoadEventWillOccurBlock;	// IMP=0x000000000004016c
- (CDUnknownBlockType)_validDidLoadAccessibilityCodeItemBlock;	// IMP=0x00000000000400b8
- (CDUnknownBlockType)_validShouldLoadAccessibilityCodeItemBlock;	// IMP=0x0000000000040007
- (id)init;	// IMP=0x000000000003ffc5
- (id)initWithImageMonitor:(id)arg1;	// IMP=0x000000000003fe18
- (id)rogueAccessibilityCodeItems;	// IMP=0x000000000004462d
- (id)trackedCodeItems;	// IMP=0x000000000004453a
- (void)logLoaderState;	// IMP=0x0000000000043e89
- (id)_stateDescForItem:(id)arg1;	// IMP=0x0000000000043d82
- (id)accessibilityCodeItemDefinitions;	// IMP=0x0000000000043c7e
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;	// IMP=0x0000000000043c10
- (id)recomputedCodeItemsForAllFrameworks;	// IMP=0x0000000000043a97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

