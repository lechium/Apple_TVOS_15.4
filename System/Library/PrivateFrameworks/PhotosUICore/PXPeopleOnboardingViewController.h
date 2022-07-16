//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXPeopleStatusViewDelegate-Protocol.h>

@class NSString, PXPeopleProgressManager, PXPeopleSectionedDataSource, PXPeopleStatusViewController;

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate>
{
    unsigned long long _onboardStatus;	// 8 = 0x8
    PXPeopleProgressManager *_progressManager;	// 16 = 0x10
    PXPeopleStatusViewController *_statusViewController;	// 24 = 0x18
    PXPeopleSectionedDataSource *_peopleDataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001ac33d
@property(retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // @synthesize peopleDataSource=_peopleDataSource;
@property(retain, nonatomic) PXPeopleStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) PXPeopleProgressManager *progressManager; // @synthesize progressManager=_progressManager;
@property(nonatomic) unsigned long long onboardStatus; // @synthesize onboardStatus=_onboardStatus;
- (id)px_navigationDestination;	// IMP=0x00000000001ac240
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ac0f8
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00000000001ac077
- (void)_progressChanged:(id)arg1;	// IMP=0x00000000001ac00f
- (void)_pushToPeopleHome:(id)arg1;	// IMP=0x00000000001abe70
- (id)peopleHomeController;	// IMP=0x00000000001abdc8
- (void)statusViewControllerEnterButtonTapped:(id)arg1;	// IMP=0x00000000001abd7c
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;	// IMP=0x00000000001abb55
- (void)_updateStatusViewForStatus:(unsigned long long)arg1 progress:(double)arg2;	// IMP=0x00000000001ab541
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;	// IMP=0x00000000001ab4c8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001ab48b
- (void)dealloc;	// IMP=0x00000000001ab416
- (void)didReceiveMemoryWarning;	// IMP=0x00000000001ab3e7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001ab37b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001ab30c
- (void)viewDidLoad;	// IMP=0x00000000001aae1b
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;	// IMP=0x00000000001aad5d
- (id)init;	// IMP=0x00000000001aace6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

