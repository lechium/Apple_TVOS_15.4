//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PBAppSwitcherCollectionViewController, PBAppSwitcherDataSource, PBAppSwitcherManager;

@interface PBAppSwitcherViewController : UIViewController
{
    PBAppSwitcherDataSource *_dataSource;	// 8 = 0x8
    PBAppSwitcherCollectionViewController *_collectionViewController;	// 16 = 0x10
    CDUnknownBlockType _transitionCompletion;	// 24 = 0x18
    PBAppSwitcherManager *_appSwitcherManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000271220
@property(readonly, nonatomic) PBAppSwitcherManager *appSwitcherManager; // @synthesize appSwitcherManager=_appSwitcherManager;
@property(copy, nonatomic) CDUnknownBlockType transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;
@property(retain, nonatomic) PBAppSwitcherCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(readonly, nonatomic) PBAppSwitcherDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool acceptsEventFocus;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)invalidateSceneLayoutElements;	// IMP=0x00100000002710a0
- (void)transitionToSwitcherWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000270f60
- (id)preferredFocusEnvironments;	// IMP=0x0010000000270f20
- (void)viewDidLoad;	// IMP=0x0010000000270c90
- (id)initWithDataSource:(id)arg1;	// IMP=0x0010000000270bc0

@end

