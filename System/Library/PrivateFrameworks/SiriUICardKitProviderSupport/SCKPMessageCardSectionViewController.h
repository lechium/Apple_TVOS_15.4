//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SiriUICardKitProviderSupport/AVAudioPlayerDelegate-Protocol.h>
#import <SiriUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>
#import <SiriUICardKitProviderSupport/SCKPMessageCardSectionViewDelegate-Protocol.h>

@class AVAudioPlayer, INInteraction, NSString, SCKPMessageCardSectionView, SFMessageCardSection;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMessageCardSectionViewController : UIViewController <SCKPMessageCardSectionViewDelegate, AVAudioPlayerDelegate, CRKCardSectionViewControlling>
{
    id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;	// 8 = 0x8
    SFMessageCardSection *_cardSection;	// 16 = 0x10
    INInteraction *_interaction;	// 24 = 0x18
    AVAudioPlayer *_player;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x00000000000039a7
- (void).cxx_destruct;	// IMP=0x0000000000004fba
@property(readonly) AVAudioPlayer *player; // @synthesize player=_player;
@property(readonly) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(readonly) SFMessageCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate;
- (void)_asrUpdated:(id)arg1;	// IMP=0x0000000000004c47
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000004ab2
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x0000000000004a04
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000000004971
- (void)pauseAudioPlayback;	// IMP=0x0000000000004917
- (void)beginAudioPlayback;	// IMP=0x00000000000047bf
- (void)setupPlaybackSessionOptions;	// IMP=0x000000000000470d
- (void)createAudioPlayer;	// IMP=0x000000000000461f
- (void)messageCardSectionAttachmentTapped:(id)arg1;	// IMP=0x0000000000004557
- (void)messageCardSectionPlayButtonTapped:(id)arg1;	// IMP=0x00000000000044b7
- (void)messageCardSectionSendButtonTapped:(id)arg1;	// IMP=0x0000000000004148
- (void)messageContentUpdatedAndInitiatedByNewRequest:(_Bool)arg1;	// IMP=0x0000000000003d8d
- (void)messageCardSectionContentUpdated:(id)arg1;	// IMP=0x0000000000003d79
- (void)messageCardSectionViewFinishedEditing:(id)arg1;	// IMP=0x0000000000003c87
- (void)messageCardSectionViewBeganEditing:(id)arg1;	// IMP=0x0000000000003ad7
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003abe
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000003ab6
- (void)loadView;	// IMP=0x0000000000003a7d
- (id)initWithMessageCardSection:(id)arg1 interaction:(id)arg2;	// IMP=0x00000000000039db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) SCKPMessageCardSectionView *view; // @dynamic view;

@end
