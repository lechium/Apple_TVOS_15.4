//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PSRootController, PSSpecifier, _TtC12GameCenterUI18BootstrapPresenter, _TtC12GameCenterUI22PlayerProfilePresenter;

@interface _TtC12GameCenterUI27PlayerProfileViewController
{
    MISSING_TYPE *bootstrapPresenter;	// 96 = 0x60
    MISSING_TYPE *statePresenter;	// 104 = 0x68
    MISSING_TYPE *compositionalLayout;	// 112 = 0x70
    MISSING_TYPE *diffableDataSource;	// 120 = 0x78
    MISSING_TYPE *components;	// 128 = 0x80
    MISSING_TYPE *clippingLayer;	// 136 = 0x88
    MISSING_TYPE *startTime;	// 144 = 0x90
    MISSING_TYPE *friendSuggestionsSectionFocusGuide;	// 160 = 0xa0
    MISSING_TYPE *_rootController;	// 168 = 0xa8
    MISSING_TYPE *_specifier;	// 176 = 0xb0
}

+ (void)showProfileFor:(id)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000184040
- (void).cxx_destruct;	// IMP=0x0000000000187f10
@property(nonatomic, retain) PSSpecifier *_specifier; // @synthesize _specifier;
@property(nonatomic, retain) PSRootController *_rootController; // @synthesize _rootController;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000187380
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000186ff0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000186bf0
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000186880
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000186510
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000001862e0
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000184d10
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000184cd0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000184b90
- (void)viewDidLoad;	// IMP=0x00000000001847f0
@property(nonatomic, readonly) _TtC12GameCenterUI22PlayerProfilePresenter *dataPresenter;
@property(nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter; // @synthesize bootstrapPresenter;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000184540
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000184400

@end

