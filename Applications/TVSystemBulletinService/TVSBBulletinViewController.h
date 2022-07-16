//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, PBSBulletin, PBSOverlayLayoutElementHandle, UIView;
@protocol PBSBulletinPresenterHost;

@interface TVSBBulletinViewController : UIViewController
{
    _Bool _offsetEnabled;	// 8 = 0x8
    id <PBSBulletinPresenterHost> _hostService;	// 16 = 0x10
    PBSBulletin *_bulletin;	// 24 = 0x18
    UIView *_bulletinView;	// 32 = 0x20
    PBSOverlayLayoutElementHandle *_layoutElementHandle;	// 40 = 0x28
    struct CGVector _offset;	// 48 = 0x30
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000021c00
+ (id)_exportedInterface;	// IMP=0x0010000000021be0
+ (id)convertTextToAttributedStringIfNeeded:(id)arg1 imagePointSize:(double)arg2;	// IMP=0x0010000000021050
- (void).cxx_destruct;	// IMP=0x0020000000023fb0
@property(readonly, nonatomic) PBSOverlayLayoutElementHandle *layoutElementHandle; // @synthesize layoutElementHandle=_layoutElementHandle;
@property(nonatomic, getter=isOffsetEnabled) _Bool offsetEnabled; // @synthesize offsetEnabled=_offsetEnabled;
@property(nonatomic) struct CGVector offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIView *bulletinView; // @synthesize bulletinView=_bulletinView;
@property(retain, nonatomic) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) id <PBSBulletinPresenterHost> hostService; // @synthesize hostService=_hostService;
- (void)applyPictureInPictureInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0010000000023b20
- (void)hideBulletinViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023240
- (void)_showBulletinView:(_Bool)arg1;	// IMP=0x0010000000022590
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x0010000000022530
- (void)didEndAnimatingOutBulletinView:(id)arg1;	// IMP=0x00100000000224f0
- (void)didBeginAnimatingOutBulletinView:(id)arg1;	// IMP=0x00100000000223e0
- (void)didEndAnimatingInBulletinView:(id)arg1;	// IMP=0x00100000000223a0
- (void)didBeginAnimatingInBulletinView:(id)arg1;	// IMP=0x00100000000221f0
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x0010000000022180
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x0010000000022120
- (void)prepareWithBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000220a0
- (void)handleMenuButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022050
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021ff0
- (void)bulletinServiceUpdateWithBulletin:(id)arg1;	// IMP=0x0010000000021f40
- (void)bulletinServiceBeginPresentationWithBulletin:(id)arg1;	// IMP=0x0010000000021c20
- (struct CGAffineTransform)adjustedTransformForContentView:(struct CGAffineTransform)arg1;	// IMP=0x0010000000021b50
- (void)_deactivateOffsetTransform;	// IMP=0x00100000000219e0
- (void)_activateOffsetTransform;	// IMP=0x00100000000218a0
- (struct CGAffineTransform)_offsetTransform;	// IMP=0x0010000000021850
@property(readonly, nonatomic) UIView *bulletinContentView;
- (void)dealloc;	// IMP=0x0010000000020de0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000209f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
