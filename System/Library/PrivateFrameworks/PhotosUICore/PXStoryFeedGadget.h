//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXProgrammaticNavigationParticipant-Protocol.h>
#import <PhotosUICore/PXStoryFeedGadget-Protocol.h>

@class NSString, PXGadgetSpec, PXProgrammaticNavigationDestination, PXStoryFeedConfiguration, PXStoryFeedViewController, PXStoryFeedViewLayoutSpecManager, UINavigationController;
@protocol PXGadgetDelegate, PXProgrammaticNavigationParticipant;

@interface PXStoryFeedGadget : NSObject <PXProgrammaticNavigationParticipant, PXStoryFeedGadget>
{
    _Bool _didLoadNavigationParticipant;	// 8 = 0x8
    _Bool _hasAppeared;	// 9 = 0x9
    PXStoryFeedViewController *_feedViewController;	// 16 = 0x10
    PXStoryFeedViewLayoutSpecManager *_specManager;	// 24 = 0x18
    id <PXProgrammaticNavigationParticipant> _navigationParticipant;	// 32 = 0x20
    PXGadgetSpec *_gadgetSpec;	// 40 = 0x28
    id <PXGadgetDelegate> _delegate;	// 48 = 0x30
    PXStoryFeedConfiguration *_configuration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000517d2d
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(readonly, nonatomic) PXStoryFeedConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x0000000000517c08
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000517a8b
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0000000000517a07
- (void)userDidSelectAccessoryButton:(id)arg1;	// IMP=0x00000000005179e9
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)contentViewController;	// IMP=0x0000000000517980
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000051788e
- (void)gadgetControllerHasDisappeared;	// IMP=0x00000000005177e7
- (void)gadgetControllerHasAppeared;	// IMP=0x00000000005177d0
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) UINavigationController *navigationController;
- (void)_navigateToFullFeedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000517709
@property(readonly, nonatomic) id <PXProgrammaticNavigationParticipant> navigationParticipant; // @synthesize navigationParticipant=_navigationParticipant;
- (void)_loadSpecManagerIfNeeded;	// IMP=0x0000000000517611
@property(readonly, nonatomic) PXStoryFeedViewLayoutSpecManager *specManager; // @synthesize specManager=_specManager;
- (void)_loadFeedViewControllerIfNeeded;	// IMP=0x0000000000517478
@property(readonly, nonatomic) PXStoryFeedViewController *feedViewController; // @synthesize feedViewController=_feedViewController;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000517345
- (id)init;	// IMP=0x00000000005172cb

// Remaining properties
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end
