//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC15ConversationKit33ParticipantViewLabelContainerView;

@interface _TtC15ConversationKit19ParticipantInfoView : UIView
{
    MISSING_TYPE *gradientView;	// 8 = 0x8
    MISSING_TYPE *nameLabel;	// 16 = 0x10
    MISSING_TYPE *shutterButton;	// 24 = 0x18
    MISSING_TYPE *expandButton;	// 32 = 0x20
    MISSING_TYPE *localParticipant;	// 40 = 0x28
    MISSING_TYPE *audioMuteButton;	// 48 = 0x30
    MISSING_TYPE *toggleVideoButton;	// 56 = 0x38
    MISSING_TYPE *isExpanded;	// 64 = 0x40
    MISSING_TYPE *isMuted;	// 65 = 0x41
    MISSING_TYPE *videoDisabled;	// 66 = 0x42
    MISSING_TYPE *customCornerRadius;	// 72 = 0x48
    MISSING_TYPE *isMomentsAvailable;	// 80 = 0x50
    MISSING_TYPE *recordingLocalVideo;	// 81 = 0x51
    MISSING_TYPE *delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000008035c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000080329
- (void)buttonTouchCancelledWithSender:(id)arg1;	// IMP=0x000000000008024c
- (void)buttonTouchDownWithSender:(id)arg1;	// IMP=0x00000000000801a8
- (void)didTapToggleVideoButton;	// IMP=0x0000000000080164
- (void)toggleVideoTouchUpWithSender:(id)arg1;	// IMP=0x000000000008009d
- (void)didTapAudioMuteButton;	// IMP=0x0000000000080014
- (void)toggleAudioTouchUpWithSender:(id)arg1;	// IMP=0x000000000007ff4d
- (void)didTapShutterButton;	// IMP=0x000000000007ff17
- (void)didTapExpandButton;	// IMP=0x000000000007fe76
- (void)layoutSubviews;	// IMP=0x000000000007f39b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f0f3
@property(nonatomic) _Bool isMomentsAvailable; // @synthesize isMomentsAvailable;
@property(nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *nameLabel; // @synthesize nameLabel;

@end

