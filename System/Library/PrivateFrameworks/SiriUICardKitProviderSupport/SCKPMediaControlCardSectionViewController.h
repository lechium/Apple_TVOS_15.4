//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SiriUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>

@class AFSecurityConnection, NSString, SCKPMediaControlCardSectionView, SFMediaRemoteControlCardSection;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling>
{
    AFSecurityConnection *_assistantSecurityConnection;	// 8 = 0x8
    UIViewController *_mediaPlatterViewController;	// 16 = 0x10
    id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;	// 24 = 0x18
    SFMediaRemoteControlCardSection *_cardSection;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000000003057
- (void).cxx_destruct;	// IMP=0x00000000000038ae
@property(readonly) SFMediaRemoteControlCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate;
- (void)_updateActiveSystemEndpointForRouteUID:(id)arg1;	// IMP=0x000000000000376b
- (id)_nowPlayingViewControllerWithRouteUID:(id)arg1;	// IMP=0x0000000000003763
- (void)_updatePlatterForRouteUID:(id)arg1;	// IMP=0x00000000000035a0
- (void)_updatePlatterForHashedRouteUID:(id)arg1;	// IMP=0x00000000000031e7
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000031df
- (void)loadView;	// IMP=0x00000000000030f9
- (id)initWithMediaRemoteControlCardSection:(id)arg1;	// IMP=0x000000000000308b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) SCKPMediaControlCardSectionView *view; // @dynamic view;

@end

