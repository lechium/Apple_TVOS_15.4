//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CNKFaceTimeConstraintsController : NSObject
{
    MISSING_TYPE *shutterButtonState;	// 8 = 0x8
    MISSING_TYPE *participantListState;	// 9 = 0x9
    MISSING_TYPE *shouldForceAllowNextLocalParticipantStateUpdate;	// 10 = 0xa
    MISSING_TYPE *mostRecentLocalParticipantCorner;	// 11 = 0xb
    MISSING_TYPE *localParticipantState;	// 12 = 0xc
    MISSING_TYPE *localParticipantAspectRatio;	// 16 = 0x10
    MISSING_TYPE *inCallControlsState;	// 56 = 0x38
    MISSING_TYPE *inCallConversationBannerState;	// 64 = 0x40
    MISSING_TYPE *participantGridState;	// 65 = 0x41
    MISSING_TYPE *floatingControlsState;	// 66 = 0x42
    MISSING_TYPE *viewStateEffects;	// 72 = 0x48
    MISSING_TYPE *viewControllerLayout;	// 80 = 0x50
    MISSING_TYPE *bannerControlsWidthConstraint;	// 120 = 0x78
    MISSING_TYPE *bannerControlsHeightConstraint;	// 128 = 0x80
    MISSING_TYPE *configurableRosterCellWidthConstraint;	// 136 = 0x88
    MISSING_TYPE *bannerDodgingLayoutGuide;	// 144 = 0x90
    MISSING_TYPE *bannerControlsSize;	// 152 = 0x98
    MISSING_TYPE *configurableRosterCellWidth;	// 176 = 0xb0
    MISSING_TYPE *inCallControlsFramesCache;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000002214d1
- (id)init;	// IMP=0x000000000022149b
- (void)updateConstraintsWith:(id)arg1 controlsViewController:(id)arg2 localParticipantView:(id)arg3 effectsView:(id)arg4 effectsBrowserViewController:(id)arg5;	// IMP=0x0000000000221375
- (void)removeEffectsConstraints;	// IMP=0x000000000022134a
- (void)updateFor:(struct CGRect)arg1 deviceOrientation:(long long)arg2;	// IMP=0x0000000000221106
- (struct CGRect)inCallControlsViewFrameFor:(id)arg1 state:(long long)arg2;	// IMP=0x0000000000221063
- (id)initWithContainingView:(id)arg1 controlsViewController:(id)arg2 inCallControlsState:(long long)arg3 localParticipantView:(id)arg4 deviceOrientation:(long long)arg5;	// IMP=0x0000000000220678
@property(nonatomic) long long inCallControlsState; // @synthesize inCallControlsState;
- (void)setLocalParticipantState:(long long)arg1;	// IMP=0x000000000021cc67
- (long long)localParticipantState;	// IMP=0x000000000021cbdc

// Remaining properties
@property(nonatomic) long long accessibilityLocalParticipantState;

@end

