//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKPassGroupView, PKPassView, UIAlertController;
@protocol PKPassDeleteAnimationControllerDelegate;

@interface PKPassDeleteAnimationController : NSObject
{
    UIAlertController *_alertController;	// 8 = 0x8
    id <PKPassDeleteAnimationControllerDelegate> _delegate;	// 16 = 0x10
    PKPassView *_passView;	// 24 = 0x18
    PKPassGroupView *_groupView;	// 32 = 0x20
}

+ (void)performPassbookDeleteWithView:(id)arg1 inSuperview:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c0198
- (void).cxx_destruct;	// IMP=0x00000000000c1928
@property(readonly, retain, nonatomic) PKPassGroupView *groupView; // @synthesize groupView=_groupView;
@property(readonly, retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property(nonatomic) __weak id <PKPassDeleteAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000000c18ab
- (void)_unregisterForEnterBackgroundNotification;	// IMP=0x00000000000c184b
- (void)_registerForEnterBackgroundNotification;	// IMP=0x00000000000c17e4
- (void)_startAnimation;	// IMP=0x00000000000c16bf
- (void)finished:(_Bool)arg1;	// IMP=0x00000000000c1668
- (void)forceDeleteAnimation;	// IMP=0x00000000000c1656
- (void)showInViewController:(id)arg1;	// IMP=0x00000000000c1062
- (void)dealloc;	// IMP=0x00000000000c1024
- (id)initWithPassView:(id)arg1 groupView:(id)arg2;	// IMP=0x00000000000c0f8b

@end

