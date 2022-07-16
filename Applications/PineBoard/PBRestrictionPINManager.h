//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemOverlayController;

@interface PBRestrictionPINManager : NSObject
{
    _Bool _shouldRestoreConferenceRoomDisplay;	// 8 = 0x8
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    CDUnknownBlockType _pinRestrictionResultBlock;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000033380
+ (id)dependencyDescription;	// IMP=0x0010000000033200
- (void).cxx_destruct;	// IMP=0x0020000000033f90
@property(readonly, nonatomic) _Bool shouldRestoreConferenceRoomDisplay; // @synthesize shouldRestoreConferenceRoomDisplay=_shouldRestoreConferenceRoomDisplay;
@property(readonly, nonatomic) CDUnknownBlockType pinRestrictionResultBlock; // @synthesize pinRestrictionResultBlock=_pinRestrictionResultBlock;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)overlayController:(id)arg1 didCancelSession:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000033e50
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0010000000033d90
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000033bd0
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000338d0
- (_Bool)dismiss;	// IMP=0x00100000000337e0
- (void)presentWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000336b0
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x0010000000033470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
