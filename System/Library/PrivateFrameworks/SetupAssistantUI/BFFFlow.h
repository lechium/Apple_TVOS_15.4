//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistantUI/BFFFlowItem-Protocol.h>
#import <SetupAssistantUI/BFFFlowItemDelegate-Protocol.h>
#import <SetupAssistantUI/BFFNavigationControllerDelegate-Protocol.h>

@class BFFFlowStarter, BFFNavigationController, NSArray, NSMutableArray, NSString, UIViewController;
@protocol BFFFlowDelegate, BFFFlowItem, BFFFlowItemDelegate, BFFNavigationFlowDelegate;

@interface BFFFlow : NSObject <BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem>
{
    BFFNavigationController *_navigationController;	// 8 = 0x8
    id <BFFNavigationFlowDelegate> _navigationFlowDelegate;	// 16 = 0x10
    id <BFFFlowItemDelegate> _flowItemDelegate;	// 24 = 0x18
    id <BFFFlowDelegate> _delegate;	// 32 = 0x20
    BFFFlowStarter *_starter;	// 40 = 0x28
    NSArray *_classList;	// 48 = 0x30
    NSMutableArray *_controllers;	// 56 = 0x38
    CDUnknownBlockType _injector;	// 64 = 0x40
    UIViewController<BFFFlowItem> *_firstController;	// 72 = 0x48
}

+ (id)internalSkipKey;	// IMP=0x000000000000e99e
+ (id)cloudConfigSkipKey;	// IMP=0x000000000000e996
- (void).cxx_destruct;	// IMP=0x000000000000f211
@property(retain, nonatomic) UIViewController<BFFFlowItem> *firstController; // @synthesize firstController=_firstController;
@property(readonly, copy, nonatomic) CDUnknownBlockType injector; // @synthesize injector=_injector;
@property(retain, nonatomic) NSMutableArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) NSArray *classList; // @synthesize classList=_classList;
@property(readonly, nonatomic) __weak BFFFlowStarter *starter; // @synthesize starter=_starter;
@property(nonatomic) __weak id <BFFFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <BFFFlowItemDelegate> flowItemDelegate; // @synthesize flowItemDelegate=_flowItemDelegate;
@property(readonly, nonatomic) __weak id <BFFNavigationFlowDelegate> navigationFlowDelegate; // @synthesize navigationFlowDelegate=_navigationFlowDelegate;
@property(readonly, nonatomic) __weak BFFNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000eeaf
- (void)removeViewControllersOnNextPush:(id)arg1;	// IMP=0x000000000000ee3d
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x000000000000eda5
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000ed17
- (void)pushFlowItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000ec9f
- (id)popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000ec2c
- (id)popToBuddyControllerWithClass:(Class)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000ebc8
- (_Bool)isFlowItemOnTop:(id)arg1;	// IMP=0x000000000000eb51
- (_Bool)controllerNeedsToRunForClass:(Class)arg1;	// IMP=0x000000000000eafe
- (void)flowItemCancelled:(id)arg1;	// IMP=0x000000000000eaf8
- (void)flowItemDone:(id)arg1;	// IMP=0x000000000000eae4
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;	// IMP=0x000000000000ea6a
- (void)flowItemDone:(id)arg1 nextItem:(id)arg2;	// IMP=0x000000000000e9a6
- (id)_viewControllerForBuddyController:(id)arg1;	// IMP=0x000000000000e916
- (void)configureFlowItem:(id)arg1;	// IMP=0x000000000000e783
- (id)createFlowItem:(Class)arg1;	// IMP=0x000000000000e660
- (id)controllerFollowingControllerClass:(Class)arg1 requestedNext:(Class)arg2;	// IMP=0x000000000000e4af
- (id)firstItem;	// IMP=0x000000000000e11f
- (id)precedingItemsClasses;	// IMP=0x000000000000e117
- (id)precedingItems;	// IMP=0x000000000000de56
- (void)startFlowAnimated:(_Bool)arg1;	// IMP=0x000000000000dc1f
- (void)dealloc;	// IMP=0x000000000000dbc2
- (id)initWithNavigationController:(id)arg1 flowDelegate:(id)arg2 flowStarter:(id)arg3 dependencyInjector:(CDUnknownBlockType)arg4;	// IMP=0x000000000000da88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

