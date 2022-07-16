//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import "PBSBulletinServiceDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString, PBSAssertion, PBSBulletin, TVNPRoutingDestination, UICollectionViewDiffableDataSource;
@protocol OS_dispatch_queue, TVNPRoutingController, TVNPRoutingDestinationsCollectionViewControllerDelegate;

@interface TVNPRoutingDestinationsCollectionViewController : UICollectionViewController <PBSBulletinServiceDelegate>
{
    _Bool _volumeEditingInProgress;	// 8 = 0x8
    _Bool _shouldFocusInitialIndex;	// 9 = 0x9
    _Bool _observingChanges;	// 10 = 0xa
    _Bool _shouldIgnoreChanges;	// 11 = 0xb
    _Bool _initiatedByPicker;	// 12 = 0xc
    NSObject<TVNPRoutingController> *_routingController;	// 16 = 0x10
    id <TVNPRoutingDestinationsCollectionViewControllerDelegate> _viewControllerDelegate;	// 24 = 0x18
    PBSAssertion *_volumeAssertion;	// 32 = 0x20
    unsigned long long _initialFocusIndex;	// 40 = 0x28
    TVNPRoutingDestination *_destinationForVolume;	// 48 = 0x30
    PBSBulletin *_volumeBulletin;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_volumeUpdateQueue;	// 64 = 0x40
    TVNPRoutingDestination *_connectingRoutingDestination;	// 72 = 0x48
    CDUnknownBlockType _initialUIDProvider;	// 80 = 0x50
    UICollectionViewDiffableDataSource *_destinationsDataSource;	// 88 = 0x58
    NSDictionary *_destinationsByIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000019920
@property(retain, nonatomic) NSDictionary *destinationsByIdentifier; // @synthesize destinationsByIdentifier=_destinationsByIdentifier;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *destinationsDataSource; // @synthesize destinationsDataSource=_destinationsDataSource;
@property(copy, nonatomic) CDUnknownBlockType initialUIDProvider; // @synthesize initialUIDProvider=_initialUIDProvider;
@property(retain, nonatomic) TVNPRoutingDestination *connectingRoutingDestination; // @synthesize connectingRoutingDestination=_connectingRoutingDestination;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeUpdateQueue; // @synthesize volumeUpdateQueue=_volumeUpdateQueue;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(retain, nonatomic) TVNPRoutingDestination *destinationForVolume; // @synthesize destinationForVolume=_destinationForVolume;
@property(readonly, nonatomic) _Bool initiatedByPicker; // @synthesize initiatedByPicker=_initiatedByPicker;
@property(readonly, nonatomic) _Bool shouldIgnoreChanges; // @synthesize shouldIgnoreChanges=_shouldIgnoreChanges;
@property(nonatomic) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(readonly, nonatomic) unsigned long long initialFocusIndex; // @synthesize initialFocusIndex=_initialFocusIndex;
@property(readonly, nonatomic) _Bool shouldFocusInitialIndex; // @synthesize shouldFocusInitialIndex=_shouldFocusInitialIndex;
@property(readonly, nonatomic) PBSAssertion *volumeAssertion; // @synthesize volumeAssertion=_volumeAssertion;
@property(nonatomic) _Bool volumeEditingInProgress; // @synthesize volumeEditingInProgress=_volumeEditingInProgress;
@property(nonatomic) __weak id <TVNPRoutingDestinationsCollectionViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
@property(readonly, nonatomic) NSObject<TVNPRoutingController> *routingController; // @synthesize routingController=_routingController;
- (id)_indexPathForCurrentDestination;	// IMP=0x00000000000193f0
- (void)_presentVolumeBulletinForDestination:(id)arg1;	// IMP=0x0000000000019250
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00000000000190e0
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000019070
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000187d0
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000183b0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000017e70
- (_Bool)_ignoreVolumeChangesWhilePendingSelection;	// IMP=0x0000000000017bf0
- (void)_showConnectionFailedAlertControllerForRoutingDestination:(id)arg1;	// IMP=0x0000000000017940
- (void)updateCollectionViewWithDestinations:(id)arg1;	// IMP=0x0000000000017240
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000016b00
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000016a50
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000016920
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000016290
- (void)viewDidLoad;	// IMP=0x0000000000015cf0
- (void)dealloc;	// IMP=0x0000000000015c20
- (id)initWithCollectionViewLayout:(id)arg1 routingController:(id)arg2 options:(id)arg3 initialUIDProvider:(CDUnknownBlockType)arg4;	// IMP=0x00000000000159a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
