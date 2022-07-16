//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPlacesMapControllerAccess-Protocol.h>

@class NSString, PKExtendedTraitCollection, PXPlacesMapController;

@interface PXPlacesMapViewController : UIViewController <PXChangeObserver, PXPlacesMapControllerAccess>
{
    PXPlacesMapController *_mapController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000261487
@property(retain, nonatomic) PXPlacesMapController *mapController; // @synthesize mapController=_mapController;
- (void)sendTraitNotification;	// IMP=0x0000000000261175
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000261163
@property(readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000261085
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000026101b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000260fb1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000260f47
- (void)viewDidLoad;	// IMP=0x0000000000260ec7
- (void)loadView;	// IMP=0x0000000000260d03
- (void)dealloc;	// IMP=0x0000000000260c93
- (void)_commonInit;	// IMP=0x0000000000260c55
- (id)init;	// IMP=0x0000000000260c09
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000260bbd
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000260b71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
