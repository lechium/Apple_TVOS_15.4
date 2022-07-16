//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNContact, CNQuickAction, CNQuickActionsManager, NSArray, NSDictionary, UIAlertController, UICollectionView, UICollectionViewFlowLayout;
@protocol CNQuickActionsViewDelegate;

@interface CNQuickActionsView : UIView
{
    _Bool _sortsWithDuet;	// 8 = 0x8
    _Bool _useDuetIfAvailable;	// 9 = 0x9
    _Bool _showTitles;	// 10 = 0xa
    _Bool _showBackgroundPlatters;	// 11 = 0xb
    CNContact *_contact;	// 16 = 0x10
    NSArray *_categories;	// 24 = 0x18
    NSDictionary *_titleTextAttributes;	// 32 = 0x20
    id <CNQuickActionsViewDelegate> _delegate;	// 40 = 0x28
    NSArray *_actions;	// 48 = 0x30
    UICollectionViewFlowLayout *_collectionLayout;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    UIAlertController *_alertController;	// 72 = 0x48
    CNQuickAction *_performingAction;	// 80 = 0x50
    CNQuickActionsManager *_actionsManager;	// 88 = 0x58
    struct CGSize _cachedContentSize;	// 96 = 0x60
}

+ (id)actionsManagerForContact:(id)arg1;	// IMP=0x0000000000090611
+ (id)defaultCategories;	// IMP=0x000000000009057d
+ (_Bool)hasActionsForContact:(id)arg1;	// IMP=0x0000000000090564
+ (id)descriptorForRequiredKeys;	// IMP=0x000000000009046e
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000000090466
- (void).cxx_destruct;	// IMP=0x0000000000091e5b
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(retain, nonatomic) CNQuickAction *performingAction; // @synthesize performingAction=_performingAction;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) struct CGSize cachedContentSize; // @synthesize cachedContentSize=_cachedContentSize;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak id <CNQuickActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showBackgroundPlatters; // @synthesize showBackgroundPlatters=_showBackgroundPlatters;
@property(nonatomic) _Bool showTitles; // @synthesize showTitles=_showTitles;
@property(nonatomic) _Bool useDuetIfAvailable; // @synthesize useDuetIfAvailable=_useDuetIfAvailable;
@property(copy, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(nonatomic) _Bool sortsWithDuet; // @synthesize sortsWithDuet=_sortsWithDuet;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x0000000000091b8c
- (void)performAction:(id)arg1;	// IMP=0x0000000000091b86
- (void)showDisambiguationControllerWithDataSource:(id)arg1 actionType:(id)arg2 onController:(id)arg3 sourceView:(id)arg4;	// IMP=0x000000000009189c
- (_Bool)quickActionButton:(id)arg1 performAction:(id)arg2;	// IMP=0x0000000000091894
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009171f
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000916db
- (void)actionsManager:(id)arg1 actionDidPerform:(id)arg2;	// IMP=0x0000000000091631
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;	// IMP=0x000000000009158e
@property(readonly, nonatomic) double maximumWidth;
- (double)_widthForButtonCount:(long long)arg1 itemSize:(struct CGSize *)arg2;	// IMP=0x0000000000091264
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000091252
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000091205
- (void)updateContentSize;	// IMP=0x0000000000091104
- (void)reloadData;	// IMP=0x00000000000910b7
- (void)_updateActions;	// IMP=0x0000000000090cbc
@property(nonatomic) double interspace;
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000090a15
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000906ed

@end
