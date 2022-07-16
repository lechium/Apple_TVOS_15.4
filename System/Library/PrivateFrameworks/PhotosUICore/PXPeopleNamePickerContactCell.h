//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNAvatarView, NSArray, UILabel, UIView;

@interface PXPeopleNamePickerContactCell
{
    CNAvatarView *_contactAvatarView;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UIView *_labelsContainer;	// 40 = 0x28
    NSArray *_constraintsForVisibleSubtitle;	// 48 = 0x30
    NSArray *_constraintsForHiddenSubtitle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000813991
@property(retain, nonatomic) NSArray *constraintsForHiddenSubtitle; // @synthesize constraintsForHiddenSubtitle=_constraintsForHiddenSubtitle;
@property(retain, nonatomic) NSArray *constraintsForVisibleSubtitle; // @synthesize constraintsForVisibleSubtitle=_constraintsForVisibleSubtitle;
@property(nonatomic) __weak UIView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
@property(readonly, nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) __weak CNAvatarView *contactAvatarView; // @synthesize contactAvatarView=_contactAvatarView;
- (void)updateConstraints;	// IMP=0x00000000008137b8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000081327a

@end

