//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPFeedbackCommand
{
    long long _presentationStyle;	// 64 = 0x40
    _Bool _active;	// 72 = 0x48
    NSString *_localizedTitle;	// 80 = 0x50
    NSString *_localizedShortTitle;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002379fe
@property(copy, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)newCommandEventWithState:(long long)arg1;	// IMP=0x00000000002378cf
- (id)_mediaRemoteCommandInfoOptions;	// IMP=0x0000000000237788
- (void)setPresentationStyle:(long long)arg1;	// IMP=0x0000000000237763
- (long long)presentationStyle;	// IMP=0x0000000000237752

@end

