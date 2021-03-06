//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXMutableGadgetProvider-Protocol.h>

@class NSArray, NSString, PXGadgetNavigationHelper;
@protocol PXGadgetDelegate, PXGadgetProviderDelegate, PXGadgetTransition;

@interface PXGadgetProvider : NSObject <PXMutableGadgetProvider, PXGadgetDelegate>
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _invalidGadgets;	// 9 = 0x9
    NSString *_identifier;	// 16 = 0x10
    id <PXGadgetProviderDelegate> _delegate;	// 24 = 0x18
    id <PXGadgetDelegate> _nextGadgetResponder;	// 32 = 0x20
    NSArray *_gadgets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006911a
@property(nonatomic) _Bool invalidGadgets; // @synthesize invalidGadgets=_invalidGadgets;
@property(nonatomic) _Bool isPerformingChanges; // @synthesize isPerformingChanges=_isPerformingChanges;
@property(copy) NSArray *gadgets; // @synthesize gadgets=_gadgets;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder; // @synthesize nextGadgetResponder=_nextGadgetResponder;
@property(nonatomic) __weak id <PXGadgetProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property(readonly, nonatomic) id <PXGadgetTransition> gadgetTransition;
- (void)dismissGadgetViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068f4f
- (void)presentGadgetViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068ec3
- (_Bool)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000068e09
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;	// IMP=0x0000000000068cc2
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068bc2
- (id)gadgetViewControllerHostingGadget:(id)arg1;	// IMP=0x0000000000068ac6
- (void)_updateIfNeeded;	// IMP=0x00000000000689d7
- (void)removeAllGadgets;	// IMP=0x0000000000068610
- (void)removeGadgetsAtIndexes:(id)arg1;	// IMP=0x000000000006831f
- (void)removeGadgets:(id)arg1;	// IMP=0x0000000000067dca
- (void)insertGadgets:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000006775f
- (void)addGadgets:(id)arg1;	// IMP=0x00000000000671f9
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000006715c
- (void)generateGadgets;	// IMP=0x00000000000670b5
- (unsigned long long)estimatedNumberOfGadgets;	// IMP=0x000000000006700e
- (void)pauseLoadingRemainingData;	// IMP=0x0000000000067008
- (void)startLoadingRemainingData;	// IMP=0x0000000000067002
- (void)loadDataForGadgets;	// IMP=0x0000000000066ffc
- (void)loadDataForPriority;	// IMP=0x0000000000066ff6
@property(readonly, nonatomic) _Bool supportsDynamicRanking;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000066eee
- (id)init;	// IMP=0x0000000000066e6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

