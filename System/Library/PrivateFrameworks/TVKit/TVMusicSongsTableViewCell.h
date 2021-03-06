//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIView;

@interface TVMusicSongsTableViewCell
{
    _Bool _playable;	// 8 = 0x8
    _Bool _showsTrackNumber;	// 9 = 0x9
    UIView *_accessoryViewForFocus;	// 16 = 0x10
    unsigned long long _trackNumber;	// 24 = 0x18
    UILabel *_trackNumberLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005642
@property(retain, nonatomic) UILabel *trackNumberLabel; // @synthesize trackNumberLabel=_trackNumberLabel;
@property(nonatomic) unsigned long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) _Bool showsTrackNumber; // @synthesize showsTrackNumber=_showsTrackNumber;
@property(nonatomic) _Bool playable; // @synthesize playable=_playable;
@property(retain, nonatomic) UIView *accessoryViewForFocus; // @synthesize accessoryViewForFocus=_accessoryViewForFocus;
- (id)_trackNumberLabel;	// IMP=0x0000000000005463
- (void)_updateTrackNumberLabel;	// IMP=0x0000000000005306
- (void)layoutSubviews;	// IMP=0x00000000000050a8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000005039
- (void)_updateColorsWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2;	// IMP=0x0000000000004f2a
- (id)_detailTextLabelColor;	// IMP=0x0000000000004ea0
- (id)_textLabelColor;	// IMP=0x0000000000004e16
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000004d6c

@end

