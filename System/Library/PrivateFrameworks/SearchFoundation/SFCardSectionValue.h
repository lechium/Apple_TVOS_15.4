//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCardSectionValue-Protocol.h>

@class NSData, NSDictionary, NSString, SFActivityIndicatorCardSection, SFAppLinkCardSection, SFAttributionFooterCardSection, SFAudioPlaybackCardSection, SFButtonCardSection, SFCollectionCardSection, SFColorBarCardSection, SFCombinedCardSection, SFCompactRowCardSection, SFDescriptionCardSection, SFDetailedRowCardSection, SFFindMyCardSection, SFFlightCardSection, SFGridCardSection, SFHeroCardSection, SFHorizontalButtonCardSection, SFHorizontalScrollCardSection, SFImagesCardSection, SFInfoCardSection, SFKeyValueDataCardSection, SFLinkPresentationCardSection, SFListenToCardSection, SFMapCardSection, SFMapPlaceCardSection, SFMapsDetailedRowCardSection, SFMediaInfoCardSection, SFMediaPlayerCardSection, SFMediaRemoteControlCardSection, SFMessageCardSection, SFMetaInfoCardSection, SFMiniCardSection, SFNewsCardSection, SFNowPlayingCardSection, SFPersonHeaderCardSection, SFProductCardSection, SFResponseWrapperCardSection, SFRichTitleCardSection, SFRowCardSection, SFScoreboardCardSection, SFSectionHeaderCardSection, SFSelectableGridCardSection, SFSocialMediaPostCardSection, SFSplitCardSection, SFStockChartCardSection, SFStrokeAnimationCardSection, SFSuggestionCardSection, SFTableHeaderRowCardSection, SFTableRowCardSection, SFTextColumnsCardSection, SFTitleCardSection, SFTrackListCardSection, SFVerticalLayoutCardSection, SFWatchListCardSection, SFWatchNowCardSection, SFWebCardSection, SFWorldMapCardSection;

@interface SFCardSectionValue : NSObject <SFCardSectionValue, NSSecureCoding, NSCopying>
{
    SFAppLinkCardSection *_appLinkCardSection;	// 8 = 0x8
    SFDescriptionCardSection *_descriptionCardSection;	// 16 = 0x10
    SFKeyValueDataCardSection *_keyValueDataCardSection;	// 24 = 0x18
    SFMapCardSection *_mapCardSection;	// 32 = 0x20
    SFMediaInfoCardSection *_mediaInfoCardSection;	// 40 = 0x28
    SFMediaPlayerCardSection *_mediaPlayerCardSection;	// 48 = 0x30
    SFNowPlayingCardSection *_nowPlayingCardSection;	// 56 = 0x38
    SFRichTitleCardSection *_richTitleCardSection;	// 64 = 0x40
    SFRowCardSection *_rowCardSection;	// 72 = 0x48
    SFScoreboardCardSection *_scoreboardCardSection;	// 80 = 0x50
    SFSocialMediaPostCardSection *_socialMediaPostCardSection;	// 88 = 0x58
    SFStockChartCardSection *_stockChartCardSection;	// 96 = 0x60
    SFTableHeaderRowCardSection *_tableHeaderRowCardSection;	// 104 = 0x68
    SFTableRowCardSection *_tableRowCardSection;	// 112 = 0x70
    SFTextColumnsCardSection *_textColumnsCardSection;	// 120 = 0x78
    SFTitleCardSection *_titleCardSection;	// 128 = 0x80
    SFTrackListCardSection *_trackListCardSection;	// 136 = 0x88
    SFAudioPlaybackCardSection *_audioPlaybackCardSection;	// 144 = 0x90
    SFFlightCardSection *_flightCardSection;	// 152 = 0x98
    SFActivityIndicatorCardSection *_activityIndicatorCardSection;	// 160 = 0xa0
    SFWebCardSection *_webCardSection;	// 168 = 0xa8
    SFMessageCardSection *_messageCardSection;	// 176 = 0xb0
    SFDetailedRowCardSection *_detailedRowCardSection;	// 184 = 0xb8
    SFImagesCardSection *_imagesCardSection;	// 192 = 0xc0
    SFSuggestionCardSection *_suggestionCardSection;	// 200 = 0xc8
    SFSelectableGridCardSection *_selectableGridCardSection;	// 208 = 0xd0
    SFSectionHeaderCardSection *_sectionHeaderCardSection;	// 216 = 0xd8
    SFMetaInfoCardSection *_metaInfoCardSection;	// 224 = 0xe0
    SFWatchListCardSection *_watchListCardSection;	// 232 = 0xe8
    SFMapsDetailedRowCardSection *_mapsDetailedRowCardSection;	// 240 = 0xf0
    SFButtonCardSection *_buttonCardSection;	// 248 = 0xf8
    SFHorizontalButtonCardSection *_horizontalButtonCardSection;	// 256 = 0x100
    SFVerticalLayoutCardSection *_verticalLayoutCardSection;	// 264 = 0x108
    SFProductCardSection *_productCardSection;	// 272 = 0x110
    SFHorizontalScrollCardSection *_horizontalScrollCardSection;	// 280 = 0x118
    SFMediaRemoteControlCardSection *_mediaRemoteControlCardSection;	// 288 = 0x120
    SFMapPlaceCardSection *_mapPlaceCardSection;	// 296 = 0x128
    SFCompactRowCardSection *_compactRowCardSection;	// 304 = 0x130
    SFWorldMapCardSection *_worldMapCardSection;	// 312 = 0x138
    SFAttributionFooterCardSection *_attributionFooterCardSection;	// 320 = 0x140
    SFGridCardSection *_gridCardSection;	// 328 = 0x148
    SFPersonHeaderCardSection *_personHeaderCardSection;	// 336 = 0x150
    SFColorBarCardSection *_colorBarCardSection;	// 344 = 0x158
    SFSplitCardSection *_splitCardSection;	// 352 = 0x160
    SFLinkPresentationCardSection *_linkPresentationCardSection;	// 360 = 0x168
    SFFindMyCardSection *_findMyCardSection;	// 368 = 0x170
    SFHeroCardSection *_heroCardSection;	// 376 = 0x178
    SFNewsCardSection *_newsCardSection;	// 384 = 0x180
    SFMiniCardSection *_miniCardSection;	// 392 = 0x188
    SFInfoCardSection *_infoCardSection;	// 400 = 0x190
    SFCollectionCardSection *_collectionCardSection;	// 408 = 0x198
    SFCombinedCardSection *_combinedCardSection;	// 416 = 0x1a0
    SFResponseWrapperCardSection *_responseWrapperCardSection;	// 424 = 0x1a8
    SFListenToCardSection *_listenToCardSection;	// 432 = 0x1b0
    SFWatchNowCardSection *_watchNowCardSection;	// 440 = 0x1b8
    SFStrokeAnimationCardSection *_strokeAnimationCardSection;	// 448 = 0x1c0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008228
- (void).cxx_destruct;	// IMP=0x0000000000009175
@property(retain, nonatomic) SFStrokeAnimationCardSection *strokeAnimationCardSection; // @synthesize strokeAnimationCardSection=_strokeAnimationCardSection;
@property(retain, nonatomic) SFWatchNowCardSection *watchNowCardSection; // @synthesize watchNowCardSection=_watchNowCardSection;
@property(retain, nonatomic) SFListenToCardSection *listenToCardSection; // @synthesize listenToCardSection=_listenToCardSection;
@property(retain, nonatomic) SFResponseWrapperCardSection *responseWrapperCardSection; // @synthesize responseWrapperCardSection=_responseWrapperCardSection;
@property(retain, nonatomic) SFCombinedCardSection *combinedCardSection; // @synthesize combinedCardSection=_combinedCardSection;
@property(retain, nonatomic) SFCollectionCardSection *collectionCardSection; // @synthesize collectionCardSection=_collectionCardSection;
@property(retain, nonatomic) SFInfoCardSection *infoCardSection; // @synthesize infoCardSection=_infoCardSection;
@property(retain, nonatomic) SFMiniCardSection *miniCardSection; // @synthesize miniCardSection=_miniCardSection;
@property(retain, nonatomic) SFNewsCardSection *newsCardSection; // @synthesize newsCardSection=_newsCardSection;
@property(retain, nonatomic) SFHeroCardSection *heroCardSection; // @synthesize heroCardSection=_heroCardSection;
@property(retain, nonatomic) SFFindMyCardSection *findMyCardSection; // @synthesize findMyCardSection=_findMyCardSection;
@property(retain, nonatomic) SFLinkPresentationCardSection *linkPresentationCardSection; // @synthesize linkPresentationCardSection=_linkPresentationCardSection;
@property(retain, nonatomic) SFSplitCardSection *splitCardSection; // @synthesize splitCardSection=_splitCardSection;
@property(retain, nonatomic) SFColorBarCardSection *colorBarCardSection; // @synthesize colorBarCardSection=_colorBarCardSection;
@property(retain, nonatomic) SFPersonHeaderCardSection *personHeaderCardSection; // @synthesize personHeaderCardSection=_personHeaderCardSection;
@property(retain, nonatomic) SFGridCardSection *gridCardSection; // @synthesize gridCardSection=_gridCardSection;
@property(retain, nonatomic) SFAttributionFooterCardSection *attributionFooterCardSection; // @synthesize attributionFooterCardSection=_attributionFooterCardSection;
@property(retain, nonatomic) SFWorldMapCardSection *worldMapCardSection; // @synthesize worldMapCardSection=_worldMapCardSection;
@property(retain, nonatomic) SFCompactRowCardSection *compactRowCardSection; // @synthesize compactRowCardSection=_compactRowCardSection;
@property(retain, nonatomic) SFMapPlaceCardSection *mapPlaceCardSection; // @synthesize mapPlaceCardSection=_mapPlaceCardSection;
@property(retain, nonatomic) SFMediaRemoteControlCardSection *mediaRemoteControlCardSection; // @synthesize mediaRemoteControlCardSection=_mediaRemoteControlCardSection;
@property(retain, nonatomic) SFHorizontalScrollCardSection *horizontalScrollCardSection; // @synthesize horizontalScrollCardSection=_horizontalScrollCardSection;
@property(retain, nonatomic) SFProductCardSection *productCardSection; // @synthesize productCardSection=_productCardSection;
@property(retain, nonatomic) SFVerticalLayoutCardSection *verticalLayoutCardSection; // @synthesize verticalLayoutCardSection=_verticalLayoutCardSection;
@property(retain, nonatomic) SFHorizontalButtonCardSection *horizontalButtonCardSection; // @synthesize horizontalButtonCardSection=_horizontalButtonCardSection;
@property(retain, nonatomic) SFButtonCardSection *buttonCardSection; // @synthesize buttonCardSection=_buttonCardSection;
@property(retain, nonatomic) SFMapsDetailedRowCardSection *mapsDetailedRowCardSection; // @synthesize mapsDetailedRowCardSection=_mapsDetailedRowCardSection;
@property(retain, nonatomic) SFWatchListCardSection *watchListCardSection; // @synthesize watchListCardSection=_watchListCardSection;
@property(retain, nonatomic) SFMetaInfoCardSection *metaInfoCardSection; // @synthesize metaInfoCardSection=_metaInfoCardSection;
@property(retain, nonatomic) SFSectionHeaderCardSection *sectionHeaderCardSection; // @synthesize sectionHeaderCardSection=_sectionHeaderCardSection;
@property(retain, nonatomic) SFSelectableGridCardSection *selectableGridCardSection; // @synthesize selectableGridCardSection=_selectableGridCardSection;
@property(retain, nonatomic) SFSuggestionCardSection *suggestionCardSection; // @synthesize suggestionCardSection=_suggestionCardSection;
@property(retain, nonatomic) SFImagesCardSection *imagesCardSection; // @synthesize imagesCardSection=_imagesCardSection;
@property(retain, nonatomic) SFDetailedRowCardSection *detailedRowCardSection; // @synthesize detailedRowCardSection=_detailedRowCardSection;
@property(retain, nonatomic) SFMessageCardSection *messageCardSection; // @synthesize messageCardSection=_messageCardSection;
@property(retain, nonatomic) SFWebCardSection *webCardSection; // @synthesize webCardSection=_webCardSection;
@property(retain, nonatomic) SFActivityIndicatorCardSection *activityIndicatorCardSection; // @synthesize activityIndicatorCardSection=_activityIndicatorCardSection;
@property(retain, nonatomic) SFFlightCardSection *flightCardSection; // @synthesize flightCardSection=_flightCardSection;
@property(retain, nonatomic) SFAudioPlaybackCardSection *audioPlaybackCardSection; // @synthesize audioPlaybackCardSection=_audioPlaybackCardSection;
@property(retain, nonatomic) SFTrackListCardSection *trackListCardSection; // @synthesize trackListCardSection=_trackListCardSection;
@property(retain, nonatomic) SFTitleCardSection *titleCardSection; // @synthesize titleCardSection=_titleCardSection;
@property(retain, nonatomic) SFTextColumnsCardSection *textColumnsCardSection; // @synthesize textColumnsCardSection=_textColumnsCardSection;
@property(retain, nonatomic) SFTableRowCardSection *tableRowCardSection; // @synthesize tableRowCardSection=_tableRowCardSection;
@property(retain, nonatomic) SFTableHeaderRowCardSection *tableHeaderRowCardSection; // @synthesize tableHeaderRowCardSection=_tableHeaderRowCardSection;
@property(retain, nonatomic) SFStockChartCardSection *stockChartCardSection; // @synthesize stockChartCardSection=_stockChartCardSection;
@property(retain, nonatomic) SFSocialMediaPostCardSection *socialMediaPostCardSection; // @synthesize socialMediaPostCardSection=_socialMediaPostCardSection;
@property(retain, nonatomic) SFScoreboardCardSection *scoreboardCardSection; // @synthesize scoreboardCardSection=_scoreboardCardSection;
@property(retain, nonatomic) SFRowCardSection *rowCardSection; // @synthesize rowCardSection=_rowCardSection;
@property(retain, nonatomic) SFRichTitleCardSection *richTitleCardSection; // @synthesize richTitleCardSection=_richTitleCardSection;
@property(retain, nonatomic) SFNowPlayingCardSection *nowPlayingCardSection; // @synthesize nowPlayingCardSection=_nowPlayingCardSection;
@property(retain, nonatomic) SFMediaPlayerCardSection *mediaPlayerCardSection; // @synthesize mediaPlayerCardSection=_mediaPlayerCardSection;
@property(retain, nonatomic) SFMediaInfoCardSection *mediaInfoCardSection; // @synthesize mediaInfoCardSection=_mediaInfoCardSection;
@property(retain, nonatomic) SFMapCardSection *mapCardSection; // @synthesize mapCardSection=_mapCardSection;
@property(retain, nonatomic) SFKeyValueDataCardSection *keyValueDataCardSection; // @synthesize keyValueDataCardSection=_keyValueDataCardSection;
@property(retain, nonatomic) SFDescriptionCardSection *descriptionCardSection; // @synthesize descriptionCardSection=_descriptionCardSection;
@property(retain, nonatomic) SFAppLinkCardSection *appLinkCardSection; // @synthesize appLinkCardSection=_appLinkCardSection;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008431
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000082e2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008230
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001ba205

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

