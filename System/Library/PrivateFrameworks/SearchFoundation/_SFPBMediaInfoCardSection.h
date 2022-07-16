//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaInfoCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaItem, _SFPBRichText;

@interface _SFPBMediaInfoCardSection : PBCodable <_SFPBMediaInfoCardSection, NSSecureCoding>
{
    _Bool _canBeHidden;	// 8 = 0x8
    _Bool _hasTopPadding;	// 9 = 0x9
    _Bool _hasBottomPadding;	// 10 = 0xa
    _Bool _isMediaContainer;	// 11 = 0xb
    int _separatorStyle;	// 12 = 0xc
    NSArray *_punchoutOptions;	// 16 = 0x10
    NSString *_punchoutPickerTitle;	// 24 = 0x18
    NSString *_punchoutPickerDismissText;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    _SFPBColor *_backgroundColor;	// 48 = 0x30
    _SFPBMediaItem *_mediaItem;	// 56 = 0x38
    NSArray *_details;	// 64 = 0x40
    _SFPBActionItem *_playAction;	// 72 = 0x48
    NSArray *_offers;	// 80 = 0x50
    NSString *_watchListIdentifier;	// 88 = 0x58
    NSString *_watchListButtonLabel;	// 96 = 0x60
    NSString *_watchListContinuationText;	// 104 = 0x68
    NSString *_watchListConfirmationText;	// 112 = 0x70
    _SFPBRichText *_specialOfferButtonLabel;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000148fab
@property(retain, nonatomic) _SFPBRichText *specialOfferButtonLabel; // @synthesize specialOfferButtonLabel=_specialOfferButtonLabel;
@property(nonatomic) _Bool isMediaContainer; // @synthesize isMediaContainer=_isMediaContainer;
@property(copy, nonatomic) NSString *watchListConfirmationText; // @synthesize watchListConfirmationText=_watchListConfirmationText;
@property(copy, nonatomic) NSString *watchListContinuationText; // @synthesize watchListContinuationText=_watchListContinuationText;
@property(copy, nonatomic) NSString *watchListButtonLabel; // @synthesize watchListButtonLabel=_watchListButtonLabel;
@property(copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) _SFPBActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) _SFPBMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001480d2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000148014
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000014711a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145f66
- (void)writeTo:(id)arg1;	// IMP=0x0000000000145942
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000145935
- (id)offersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000145824
- (unsigned long long)offersCount;	// IMP=0x0000000000145807
- (void)addOffers:(id)arg1;	// IMP=0x000000000014578d
- (void)clearOffers;	// IMP=0x0000000000145770
- (id)detailsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014570b
- (unsigned long long)detailsCount;	// IMP=0x00000000001456ee
- (void)addDetails:(id)arg1;	// IMP=0x0000000000145674
- (void)clearDetails;	// IMP=0x0000000000145657
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000145502
- (unsigned long long)punchoutOptionsCount;	// IMP=0x00000000001454e5
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x000000000014546b
- (void)clearPunchoutOptions;	// IMP=0x000000000014544e
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001b4a36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

