//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, RBSProcessMonitor;

@interface DAPriorityManager : NSObject
{
    int _currentPriority;	// 8 = 0x8
    NSMapTable *_clientsToPriorityRequests;	// 16 = 0x10
    RBSProcessMonitor *_processMonitor;	// 24 = 0x18
    NSMutableDictionary *_cachedAppState;	// 32 = 0x20
    long long _foregroundDataclasses;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x00000000000405f9
+ (void)vendPriorityManagers;	// IMP=0x00000000000405ec
- (void).cxx_destruct;	// IMP=0x0000000000041e6d
@property(nonatomic) long long foregroundDataclasses; // @synthesize foregroundDataclasses=_foregroundDataclasses;
@property(retain, nonatomic) NSMutableDictionary *cachedAppState; // @synthesize cachedAppState=_cachedAppState;
@property(retain, nonatomic) RBSProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(readonly, nonatomic) int currentPriority; // @synthesize currentPriority=_currentPriority;
@property(retain, nonatomic) NSMapTable *clientsToPriorityRequests; // @synthesize clientsToPriorityRequests=_clientsToPriorityRequests;
- (void)bumpDataclassesToUIPriority:(long long)arg1;	// IMP=0x0000000000041ba8
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;	// IMP=0x00000000000417b7
- (void)_setNewPriority;	// IMP=0x00000000000416ea
- (int)_recalculatePriority;	// IMP=0x0000000000041554
- (id)stateString;	// IMP=0x00000000000412b0
- (void)_setForegroundDataclasses:(long long)arg1;	// IMP=0x00000000000412a6
- (void)setupProcessStateMonitor;	// IMP=0x0000000000040d30
- (void)dealloc;	// IMP=0x0000000000040ca3
- (id)init;	// IMP=0x0000000000040a5d
- (void)_updateForegroundDataclasses;	// IMP=0x00000000000408d8
- (void)appWithBundleID:(id)arg1 isNowRunningAndVisible:(_Bool)arg2;	// IMP=0x000000000004075b
- (id)appIDsToDataclasses;	// IMP=0x0000000000040664

@end

