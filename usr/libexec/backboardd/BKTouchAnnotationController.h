//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchAnnotationController : NSObject
{
    _Bool _shouldVisualizeTouches;	// 8 = 0x8
    _Bool _shouldVisualizeHitTestRegions;	// 9 = 0x9
    BKDisplayAnnotationController *_displayAnnotationController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)workQueue;	// IMP=0x002000000001b92e
- (void).cxx_destruct;	// IMP=0x002000000001ae37
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) BKDisplayAnnotationController *displayAnnotationController; // @synthesize displayAnnotationController=_displayAnnotationController;
- (void)_queue_touchWasSoftCanceled:(unsigned int)arg1;	// IMP=0x001000000001ac09
- (void)_queue_touchWasHardCanceled:(unsigned int)arg1;	// IMP=0x001000000001ab4d
- (void)_queue_setCenter:(struct CGPoint)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x001000000001a9f7
- (id)_keyPathForTouchIdentifier:(unsigned int)arg1;	// IMP=0x001000000001a9d3
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x001000000001a95a
- (id)_stringDescribingContextID:(unsigned int)arg1 clientPort:(unsigned int)arg2;	// IMP=0x001000000001a840
- (id)_stringDescribingPID:(int)arg1;	// IMP=0x001000000001a72b
- (id)_stringByRemovingPrefix:(id)arg1 fromString:(id)arg2;	// IMP=0x001000000001a670
- (void)_queue_annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x001000000001a3b9
- (void)_queue_annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x001000000001a39e
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x001000000001a313
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x001000000001a30d
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x001000000001a307
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x001000000001a2b9
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x001000000001a264
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x001000000001a216
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 upAtPoint:(struct CGPoint)arg3;	// IMP=0x001000000001a1c8
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x001000000001a170
- (void)touchDidDetach:(unsigned int)arg1;	// IMP=0x001000000001a122
- (void)touch:(unsigned int)arg1 didHitTestToContextID:(unsigned int)arg2 clientPort:(unsigned int)arg3 hostingChainIndex:(long long)arg4;	// IMP=0x001000000001a0c9
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 downAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x001000000001a06d
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x0010000000019fa0
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x0010000000019ee0
- (void)annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x0010000000019e49
@property _Bool shouldVisualizeHitTestRegions;
@property _Bool shouldVisualizeTouches;
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x0010000000019bba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
