//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import "TVNPRoutingRoutesCollectionViewLayoutDelegate-Protocol.h"

@class NSArray, NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSString, TVNPGroupableRoutingController, TVNPOutputDeviceRoute, UICollectionViewDiffableDataSource, UITapGestureRecognizer;
@protocol TVSMAirPodsModuleHeadsetsCollectionViewControllerDelegate;

@interface TVSMAirPodsModuleHeadsetsCollectionViewController : UICollectionViewController <TVNPRoutingRoutesCollectionViewLayoutDelegate>
{
    NSDiffableDataSourceSnapshot *_currentSnapshot;	// 8 = 0x8
    NSArray *_routes;	// 16 = 0x10
    TVNPOutputDeviceRoute *_focusedRoute;	// 24 = 0x18
    id <TVSMAirPodsModuleHeadsetsCollectionViewControllerDelegate> _delegate;	// 32 = 0x20
    UICollectionViewDiffableDataSource *_headsetsDataSource;	// 40 = 0x28
    TVNPGroupableRoutingController *_routingController;	// 48 = 0x30
    NSDictionary *_routesByUID;	// 56 = 0x38
    TVNPOutputDeviceRoute *_routeForVolume;	// 64 = 0x40
    NSMutableDictionary *_volumeHUDAssertionsByUID;	// 72 = 0x48
    UITapGestureRecognizer *_menuRecognizer;	// 80 = 0x50
    UITapGestureRecognizer *_selectRecognizer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000a110
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) NSMutableDictionary *volumeHUDAssertionsByUID; // @synthesize volumeHUDAssertionsByUID=_volumeHUDAssertionsByUID;
@property(retain, nonatomic) TVNPOutputDeviceRoute *routeForVolume; // @synthesize routeForVolume=_routeForVolume;
@property(retain, nonatomic) NSDictionary *routesByUID; // @synthesize routesByUID=_routesByUID;
@property(retain, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *headsetsDataSource; // @synthesize headsetsDataSource=_headsetsDataSource;
@property(nonatomic) __weak id <TVSMAirPodsModuleHeadsetsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVNPOutputDeviceRoute *focusedRoute; // @synthesize focusedRoute=_focusedRoute;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
- (void)_relinquishVolumeHUDAssertionForRouteWithUID:(id)arg1;	// IMP=0x0000000000009cf0
- (void)_acquireVolumeHUDAssertionForRouteWithUID:(id)arg1;	// IMP=0x0000000000009b80
- (id)indexPathForVolumeSliderInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x0000000000009a20
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000009850
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000009680
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x00000000000095e0
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000009230
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000008fe0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000008e00
- (void)handleVolumeDown;	// IMP=0x00000000000087d0
- (void)handleVolumeUp;	// IMP=0x0000000000008120
- (void)_adjustVolume;	// IMP=0x0000000000008060
- (void)handleEndVolumeControl:(id)arg1;	// IMP=0x0000000000007d40
- (void)_handleTapSelect:(id)arg1;	// IMP=0x0000000000007cf0
- (void)_handleLongPressSelect:(id)arg1;	// IMP=0x0000000000007c80
- (void)updateSnapshot;	// IMP=0x00000000000076f0
- (void)dealloc;	// IMP=0x0000000000007610
- (void)viewDidLoad;	// IMP=0x0000000000006d00
- (id)initWithCollectionViewLayout:(id)arg1 routeController:(id)arg2;	// IMP=0x0000000000006b40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

