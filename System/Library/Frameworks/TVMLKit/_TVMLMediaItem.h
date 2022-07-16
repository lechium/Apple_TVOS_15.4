//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TVPMediaItem, _TVSecureKeyLoading;

@interface _TVMLMediaItem
{
    id <_TVSecureKeyLoading> _secureKeyLoader;	// 8 = 0x8
    id <TVPMediaItem> _tvpObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000055257
@property(readonly, nonatomic) id <TVPMediaItem> tvpObject; // @synthesize tvpObject=_tvpObject;
- (id)secureKeyLoader;	// IMP=0x0000000000055235
- (id)_tvpObject;	// IMP=0x0000000000055223
- (void)setExternalServiceIdentifier:(id)arg1;	// IMP=0x0000000000055185
- (void)setExternalProfileIdentifier:(id)arg1;	// IMP=0x00000000000550e7
- (void)setExternalIdentifier:(id)arg1;	// IMP=0x0000000000055049
- (void)setPlaybackProgress:(id)arg1;	// IMP=0x0000000000054fab
- (void)setContentProposalAutomaticAcceptanceInterval:(double)arg1;	// IMP=0x0000000000054f00
- (void)setContentProposalPresentationTime:(double)arg1;	// IMP=0x0000000000054e55
- (void)setContentRating:(id)arg1;	// IMP=0x0000000000054db7
- (void)setHighlightGroups:(id)arg1;	// IMP=0x0000000000054471
- (void)setInterstitials:(id)arg1;	// IMP=0x00000000000540f8
- (void)setResumeTime:(double)arg1;	// IMP=0x000000000005404d
- (void)setContainsExplicitContent:(_Bool)arg1;	// IMP=0x0000000000053fa2
- (void)setArtworkImageURL:(id)arg1;	// IMP=0x0000000000053ee2
- (void)setContentRatingRanking:(id)arg1;	// IMP=0x0000000000053e44
- (void)setContentRatingDomain:(id)arg1;	// IMP=0x0000000000053c96
- (void)setItemDescription:(id)arg1;	// IMP=0x0000000000053bf8
- (void)setSubtitle:(id)arg1;	// IMP=0x0000000000053b5a
- (void)setTitle:(id)arg1;	// IMP=0x0000000000053abc
- (void)setUrl:(id)arg1;	// IMP=0x0000000000053a28
- (void)setSecureKeyLoader:(id)arg1;	// IMP=0x000000000005393b
- (id)init;	// IMP=0x00000000000538de

@end

