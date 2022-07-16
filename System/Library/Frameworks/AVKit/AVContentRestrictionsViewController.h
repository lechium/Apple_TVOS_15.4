//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVObservationController, AVPlayer;

__attribute__((visibility("hidden")))
@interface AVContentRestrictionsViewController : UIViewController
{
    _Bool _requestingAccess;	// 8 = 0x8
    _Bool _contentConcealed;	// 9 = 0x9
    id _requestToken;	// 16 = 0x10
    AVPlayer *_blockedPlayer;	// 24 = 0x18
    double _requestedRateForBlockedPlayer;	// 32 = 0x20
    AVObservationController *_kvo;	// 40 = 0x28
}

+ (id)keyPathsForValuesAffectingRequestingAccess;	// IMP=0x00000000000edc2c
+ (_Bool)shouldAutomaticallyValidateForThisClient;	// IMP=0x00000000000edc15
- (void).cxx_destruct;	// IMP=0x00000000000ed27f
@property(readonly, nonatomic) AVObservationController *kvo; // @synthesize kvo=_kvo;
@property(nonatomic) double requestedRateForBlockedPlayer; // @synthesize requestedRateForBlockedPlayer=_requestedRateForBlockedPlayer;
@property(retain, nonatomic) AVPlayer *blockedPlayer; // @synthesize blockedPlayer=_blockedPlayer;
@property(retain, nonatomic) id requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic, getter=isContentConcealed) _Bool contentConcealed; // @synthesize contentConcealed=_contentConcealed;
- (void)validateCurrentItemForPlayer:(id)arg1;	// IMP=0x00000000000ed101
- (void)_cancelPlaybackForPlayerItem:(id)arg1;	// IMP=0x00000000000ed084
- (void)validateMediaContentRating:(id)arg1 allowInteraction:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eced6
- (void)viewDidLoad;	// IMP=0x00000000000ece4d
- (void)loadView;	// IMP=0x00000000000ecb93
- (id)backdropColor;	// IMP=0x00000000000ecaf4
- (_Bool)_shouldShowDiagnosticAids;	// IMP=0x00000000000eca6b
@property(readonly, nonatomic, getter=isRequestingAccess) _Bool requestingAccess;
- (void)dealloc;	// IMP=0x00000000000ec7b5
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000ec765
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ec715

@end

