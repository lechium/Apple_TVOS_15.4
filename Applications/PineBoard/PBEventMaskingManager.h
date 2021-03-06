//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemOverlayController;

@interface PBEventMaskingManager : NSObject
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000014e370
+ (id)dependencyDescription;	// IMP=0x001000000014e1f0
- (void).cxx_destruct;	// IMP=0x002000000014e940
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000014e870
- (void)dismiss;	// IMP=0x001000000014e790
- (void)present;	// IMP=0x001000000014e6a0
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x001000000014e460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

