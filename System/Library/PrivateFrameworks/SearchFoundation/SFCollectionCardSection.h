//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCollectionCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFCollectionStyle, SFColor, SFCommand, SFCommandButtonItem, SFRichText, SFUserReportRequest;

@interface SFCollectionCardSection <SFCollectionCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_5ff9a38c _has;	// 8 = 0x8
    _Bool _canBeHidden;	// 12 = 0xc
    _Bool _hasTopPadding;	// 13 = 0xd
    _Bool _hasBottomPadding;	// 14 = 0xe
    int _separatorStyle;	// 16 = 0x10
    NSArray *_punchoutOptions;	// 24 = 0x18
    NSString *_punchoutPickerTitle;	// 32 = 0x20
    NSString *_punchoutPickerDismissText;	// 40 = 0x28
    NSString *_type;	// 48 = 0x30
    SFColor *_backgroundColor;	// 56 = 0x38
    NSArray *_cardSections;	// 64 = 0x40
    SFRichText *_title;	// 72 = 0x48
    SFCommandButtonItem *_buttonItem;	// 80 = 0x50
    SFCollectionStyle *_collectionStyle;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018fea5
- (void).cxx_destruct;	// IMP=0x000000000018fdfd
@property(retain, nonatomic) SFCollectionStyle *collectionStyle; // @synthesize collectionStyle=_collectionStyle;
@property(retain, nonatomic) SFCommandButtonItem *buttonItem; // @synthesize buttonItem=_buttonItem;
@property(retain, nonatomic) SFRichText *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(retain, nonatomic) SFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018f811
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018f658
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018f509
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018f457
- (_Bool)hasSeparatorStyle;	// IMP=0x000000000018f442
- (_Bool)hasHasBottomPadding;	// IMP=0x000000000018f412
- (_Bool)hasHasTopPadding;	// IMP=0x000000000018f3e3
- (_Bool)hasCanBeHidden;	// IMP=0x000000000018f3b6
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000020b8c
- (id)sectionsWithCards;	// IMP=0x000000000002318f
- (void)addCardsFromButtonsTo:(id)arg1;	// IMP=0x0000000000023096

// Remaining properties
@property(retain, nonatomic) NSString *cardSectionDetail;
@property(copy, nonatomic) NSString *cardSectionId;
@property(retain, nonatomic) SFCommand *command;
@property(retain, nonatomic) NSString *commandDetail;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *embeddedCards;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *previewButtonItems;
@property(retain, nonatomic) NSString *previewButtonItemsTitle;
@property(retain, nonatomic) SFCommand *previewCommand;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;

@end

