//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SAAISongTag, SAMPPlaybackButton, SAUIAppPunchOut;

@interface SAAISongTagSnippet
{
}

+ (id)songTagSnippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000990d
+ (id)songTagSnippet;	// IMP=0x00000000000098fb
@property(retain, nonatomic) SAAISongTag *songTag;
@property(retain, nonatomic) SAUIAppPunchOut *songDetailsPunchOut;
@property(retain, nonatomic) SAUIAppPunchOut *purchaseSongPunchOut;
@property(retain, nonatomic) SAMPPlaybackButton *playbackButton;
@property(retain, nonatomic) SAUIAppPunchOut *attributionPunchOut;
- (id)encodedClassName;	// IMP=0x00000000000098ee
- (id)groupIdentifier;	// IMP=0x00000000000098da

@end

