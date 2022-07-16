//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemGestureArbiter, PBSystemGestureTable;
@protocol BSInvalidatable, PBSystemGestureDescriptorDataSource, PBSystemGestureRecognizerManager;

@interface PBSystemGestureManager : NSObject
{
    id <PBSystemGestureRecognizerManager> _gestureRecognizerManager;	// 8 = 0x8
    PBSystemGestureTable *_table;	// 16 = 0x10
    PBSystemGestureArbiter *_arbiter;	// 24 = 0x18
    id <BSInvalidatable> _stateCaptureHandle;	// 32 = 0x20
    id <PBSystemGestureDescriptorDataSource> _dataSource;	// 40 = 0x28
}

+ (id)_gestureRecognizerForDescriptor:(id)arg1;	// IMP=0x00200000000f1070
+ (id)sharedInstance;	// IMP=0x00100000000eddc0
+ (id)dependencyDescription;	// IMP=0x00100000000edcb0
- (void).cxx_destruct;	// IMP=0x00200000000f1280
@property(readonly, nonatomic) id <PBSystemGestureDescriptorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(readonly, nonatomic) PBSystemGestureArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(readonly, nonatomic) PBSystemGestureTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) id <PBSystemGestureRecognizerManager> gestureRecognizerManager; // @synthesize gestureRecognizerManager=_gestureRecognizerManager;
- (_Bool)_prepareGestureRecognizerMatchingDescriptor:(id)arg1;	// IMP=0x00100000000f0de0
- (_Bool)_prepareGestureRecognizersMatchingDescriptors:(id)arg1;	// IMP=0x00100000000f0b10
- (id)_systemGestureDescriptorForSystemGestureType:(unsigned long long)arg1;	// IMP=0x00100000000f0a70
- (void)_systemGestureRecognizerStateChanged:(id)arg1;	// IMP=0x00100000000f0130
- (void)removeHandle:(id)arg1 forSystemGestureDescriptor:(id)arg2 withReason:(id)arg3;	// IMP=0x00100000000efa80
- (void)deactivateHandle:(id)arg1;	// IMP=0x00100000000ef4b0
- (void)activateHandle:(id)arg1;	// IMP=0x00100000000eeed0
- (void)cancelGestureRecognizersWithPressType:(long long)arg1 forReason:(id)arg2;	// IMP=0x00100000000eeb30
- (id)stateDump;	// IMP=0x00100000000eeb00
- (id)windowForSystemGestures;	// IMP=0x00100000000eead0
- (id)newHandleForSystemGesture:(unsigned long long)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ee430
- (void)dealloc;	// IMP=0x00100000000ee2b0
- (id)init;	// IMP=0x00100000000ee220
- (id)initWithSystemGestureRecognizerManager:(id)arg1;	// IMP=0x00100000000ee190
- (id)initWithSystemGestureRecognizerManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x00100000000edeb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
