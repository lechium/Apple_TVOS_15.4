//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol TVOneupViewDataSource, TVOneupViewDelegate;

@interface _TVOneupView : UIView <UIGestureRecognizerDelegate>
{
    Class _viewClass;	// 8 = 0x8
    Class _supplementaryViewClass;	// 16 = 0x10
    struct {
        unsigned int _respondsToDidFocusItem:1;
        unsigned int _respondsToDidSelectItem:1;
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToTransitioningToMode:1;
        unsigned int _respondsToWillDisplay:1;
        unsigned int _respondsToDidEndDisplaying:1;
    } _delegateFlags;	// 24 = 0x18
    struct CGPoint _firstTouchLocation;	// 32 = 0x20
    struct CGPoint _minCenter;	// 48 = 0x30
    struct CGPoint _maxCenter;	// 64 = 0x40
    NSMutableDictionary *_inUseItemViewsByIndex;	// 80 = 0x50
    _Bool _isPerformingTransitionAnimation;	// 88 = 0x58
    id <TVOneupViewDelegate> _delegate;	// 96 = 0x60
    id <TVOneupViewDataSource> _dataSource;	// 104 = 0x68
    unsigned long long _transition;	// 112 = 0x70
    long long _focusedItemIndex;	// 120 = 0x78
    unsigned long long _allowedModes;	// 128 = 0x80
    unsigned long long _currentMode;	// 136 = 0x88
    UITapGestureRecognizer *_menuGestureRecognizer;	// 144 = 0x90
    unsigned long long _nextEventType;	// 152 = 0x98
    UIView *_currentView;	// 160 = 0xa0
    UIView *_spareView;	// 168 = 0xa8
    UIView *_currentSupplementaryView;	// 176 = 0xb0
    UIView *_spareSupplementaryView;	// 184 = 0xb8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 192 = 0xc0
    UISwipeGestureRecognizer *_upSwipeGesture;	// 200 = 0xc8
    UISwipeGestureRecognizer *_downSwipeGesture;	// 208 = 0xd0
    UISwipeGestureRecognizer *_leftSwipeGesture;	// 216 = 0xd8
    UISwipeGestureRecognizer *_rightSwipeGesture;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000012eb7
@property(nonatomic) _Bool isPerformingTransitionAnimation; // @synthesize isPerformingTransitionAnimation=_isPerformingTransitionAnimation;
@property(nonatomic) __weak UISwipeGestureRecognizer *rightSwipeGesture; // @synthesize rightSwipeGesture=_rightSwipeGesture;
@property(nonatomic) __weak UISwipeGestureRecognizer *leftSwipeGesture; // @synthesize leftSwipeGesture=_leftSwipeGesture;
@property(nonatomic) __weak UISwipeGestureRecognizer *downSwipeGesture; // @synthesize downSwipeGesture=_downSwipeGesture;
@property(nonatomic) __weak UISwipeGestureRecognizer *upSwipeGesture; // @synthesize upSwipeGesture=_upSwipeGesture;
@property(nonatomic) __weak UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *spareSupplementaryView; // @synthesize spareSupplementaryView=_spareSupplementaryView;
@property(retain, nonatomic) UIView *currentSupplementaryView; // @synthesize currentSupplementaryView=_currentSupplementaryView;
@property(retain, nonatomic) UIView *spareView; // @synthesize spareView=_spareView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) unsigned long long nextEventType; // @synthesize nextEventType=_nextEventType;
@property(nonatomic) __weak UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) unsigned long long allowedModes; // @synthesize allowedModes=_allowedModes;
@property(nonatomic) long long focusedItemIndex; // @synthesize focusedItemIndex=_focusedItemIndex;
@property(nonatomic) unsigned long long transition; // @synthesize transition=_transition;
@property(nonatomic) __weak id <TVOneupViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TVOneupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isValidIndex:(long long)arg1;	// IMP=0x0000000000012bca
- (void)_removeAllItemViewsInUseWithIndexMapping:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012a1b
- (void)_removeItemViewInUse:(id)arg1;	// IMP=0x00000000000127a6
- (void)_markItemView:(id)arg1 inUseAtIndex:(long long)arg2;	// IMP=0x000000000001269a
- (void)_performNextEventTransitionIfRequired;	// IMP=0x0000000000012621
- (void)_performPushTransitionToView:(id)arg1 atNewIndex:(long long)arg2;	// IMP=0x0000000000012308
- (void)_transitionToItemAtIndex:(long long)arg1;	// IMP=0x000000000001170e
- (void)_addAllSubviews;	// IMP=0x000000000001165d
- (void)_configureItemView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000113b1
- (void)_transitionToSupplementaryView:(id)arg1 itemView:(id)arg2;	// IMP=0x0000000000011213
- (void)_transitionToFullScreenMode;	// IMP=0x0000000000011050
- (void)_transitionToCaptionMode;	// IMP=0x0000000000010da5
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000010c88
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000010b7c
- (void)_panAction:(id)arg1;	// IMP=0x0000000000010795
- (void)_longPressAction:(id)arg1;	// IMP=0x000000000001078f
- (void)_menuAction:(id)arg1;	// IMP=0x00000000000106e7
- (void)_doubleTapAction:(id)arg1;	// IMP=0x0000000000010512
- (void)_downAction:(id)arg1;	// IMP=0x0000000000010439
- (void)_upAction:(id)arg1;	// IMP=0x0000000000010360
- (void)_rightAction:(id)arg1;	// IMP=0x00000000000101ee
- (void)_leftAction:(id)arg1;	// IMP=0x000000000001007c
- (long long)_indexWithDirection:(unsigned long long)arg1 fromIndex:(long long)arg2 withRecognizer:(id)arg3;	// IMP=0x000000000001000f
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000000000ff9b
- (void)_selectButtonAction:(id)arg1;	// IMP=0x000000000000ff27
- (_Bool)canBecomeFocused;	// IMP=0x000000000000ff1f
- (void)layoutSubviews;	// IMP=0x000000000000fb9e
- (id)dequeueReusableSupplementaryView;	// IMP=0x000000000000fb5d
- (void)registerSupplementaryViewClass:(Class)arg1;	// IMP=0x000000000000fb4c
- (id)dequeueReusableItemView;	// IMP=0x000000000000fac5
- (void)registerItemViewClass:(Class)arg1;	// IMP=0x000000000000fab4
@property(readonly, nonatomic) UIView *focusedItemSupplementaryView;
@property(readonly, nonatomic) UIView *focusedItemView;
- (void)reloadDataWithNewIndexByOldIndexMapping:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f8dc
- (void)reloadData;	// IMP=0x000000000000f8c8
- (void)setAdjustedFocusIndex:(long long)arg1;	// IMP=0x000000000000f8b7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000f172

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
