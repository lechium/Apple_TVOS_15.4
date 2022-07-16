//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSLock, NSNumber, NSString, NSURL;

@interface SSPaymentSheet : NSObject <NSCopying>
{
    NSLock *_lock;	// 8 = 0x8
    _Bool _applePayClassic;	// 16 = 0x10
    _Bool _shouldShowCardPicker;	// 17 = 0x11
    _Bool _shouldSuppressPrice;	// 18 = 0x12
    _Bool _shouldUppercaseText;	// 19 = 0x13
    NSString *_accountHeader;	// 24 = 0x18
    NSString *_buyParams;	// 32 = 0x20
    NSString *_dialogId;	// 40 = 0x28
    NSString *_displayPrice;	// 48 = 0x30
    NSAttributedString *_displayPriceLabel;	// 56 = 0x38
    NSString *_explanation;	// 64 = 0x40
    NSString *_paymentSummary;	// 72 = 0x48
    NSString *_ratingHeader;	// 80 = 0x50
    NSString *_ratingValue;	// 88 = 0x58
    NSURL *_salableIconURL;	// 96 = 0x60
    NSString *_salableIconURLString;	// 104 = 0x68
    NSArray *_salableInfo;	// 112 = 0x70
    NSAttributedString *_salableInfoLabel;	// 120 = 0x78
    NSString *_storeName;	// 128 = 0x80
    NSString *_accountName;	// 136 = 0x88
    NSArray *_attributedList;	// 144 = 0x90
    long long _confirmationTitleType;	// 152 = 0x98
    NSString *_countryCode;	// 160 = 0xa0
    NSString *_currencyCode;	// 168 = 0xa8
    NSArray *_flexList;	// 176 = 0xb0
    NSArray *_inlineImages;	// 184 = 0xb8
    NSDictionary *_merchantSession;	// 192 = 0xc0
    NSString *_message;	// 200 = 0xc8
    long long _payeeType;	// 208 = 0xd0
    NSNumber *_price;	// 216 = 0xd8
    NSArray *_priceSectionItems;	// 224 = 0xe0
    long long _salableIconType;	// 232 = 0xe8
    NSString *_title;	// 240 = 0xf0
    long long _titleType;	// 248 = 0xf8
}

+ (id)stringWithFormattedUsernameForString:(id)arg1 username:(id)arg2;	// IMP=0x00000000000e5036
- (void).cxx_destruct;	// IMP=0x00000000000ea3c7
@property long long titleType; // @synthesize titleType=_titleType;
@property(copy) NSString *title; // @synthesize title=_title;
@property _Bool shouldUppercaseText; // @synthesize shouldUppercaseText=_shouldUppercaseText;
@property _Bool shouldSuppressPrice; // @synthesize shouldSuppressPrice=_shouldSuppressPrice;
@property long long salableIconType; // @synthesize salableIconType=_salableIconType;
@property(copy) NSArray *priceSectionItems; // @synthesize priceSectionItems=_priceSectionItems;
@property(copy) NSNumber *price; // @synthesize price=_price;
@property long long payeeType; // @synthesize payeeType=_payeeType;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSDictionary *merchantSession; // @synthesize merchantSession=_merchantSession;
@property(readonly, copy) NSArray *inlineImages; // @synthesize inlineImages=_inlineImages;
@property(readonly) NSArray *flexList; // @synthesize flexList=_flexList;
@property(copy) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property long long confirmationTitleType; // @synthesize confirmationTitleType=_confirmationTitleType;
@property(readonly) NSArray *attributedList; // @synthesize attributedList=_attributedList;
@property(copy) NSString *accountName; // @synthesize accountName=_accountName;
@property _Bool shouldShowCardPicker; // @synthesize shouldShowCardPicker=_shouldShowCardPicker;
@property(copy) NSString *dialogId; // @synthesize dialogId=_dialogId;
@property(getter=isApplePayClassic) _Bool applePayClassic; // @synthesize applePayClassic=_applePayClassic;
- (void)_unlock;	// IMP=0x00000000000ea182
- (void)_stringValuesToUppercase;	// IMP=0x00000000000ea09e
- (void)_salableInfoItemsToUppercase;	// IMP=0x00000000000e9f88
- (long long)_salableIconTypeForString:(id)arg1;	// IMP=0x00000000000e9ee6
- (id)_replaceMarkupForMutableAttributedString:(id)arg1 markupType:(long long)arg2;	// IMP=0x00000000000e9c74
- (id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)arg1;	// IMP=0x00000000000e9b29
- (long long)_payeeTypeInferredFromEnumeratedTitle;	// IMP=0x00000000000e960f
- (long long)_payeeTypeForRequestorValue:(id)arg1;	// IMP=0x00000000000e9552
- (id)_attributedListForFlexList:(id)arg1;	// IMP=0x00000000000e8ede
- (void)_parseResponse:(id)arg1;	// IMP=0x00000000000e761d
- (void)_lock;	// IMP=0x00000000000e7607
- (long long)_inferSalableIconTypeWithBuyParams:(id)arg1;	// IMP=0x00000000000e7580
- (id)_greyAttributedStringForAttributedString:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000e748c
- (id)_displayPriceLabelForDisplayPrice:(id)arg1;	// IMP=0x00000000000e743f
- (long long)_confirmationTitleTypeForStringValue:(id)arg1;	// IMP=0x00000000000e7363
- (id)_attributedStringForStringArray:(id)arg1 useGrey:(_Bool)arg2;	// IMP=0x00000000000e7158
- (id)_attributedStringForString:(id)arg1;	// IMP=0x00000000000e6f68
- (id)_attributedStringForSalableInfoStringArray:(id)arg1;	// IMP=0x00000000000e6d67
- (id)_attributedStringForAttributedDictionary:(id)arg1;	// IMP=0x00000000000e6bc5
- (id)_attributedStringForAttributedArray:(id)arg1;	// IMP=0x00000000000e6985
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000e64c0
- (id)copyXPCEncoding;	// IMP=0x00000000000e6248
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e5f1d
@property(copy) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy) NSArray *salableInfo; // @synthesize salableInfo=_salableInfo;
@property(copy) NSString *salableIconURLString; // @synthesize salableIconURLString=_salableIconURLString;
@property(copy) NSString *ratingValue; // @synthesize ratingValue=_ratingValue;
@property(copy) NSString *ratingHeader; // @synthesize ratingHeader=_ratingHeader;
@property(copy) NSString *paymentSummary; // @synthesize paymentSummary=_paymentSummary;
@property(copy) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(copy) NSString *accountHeader; // @synthesize accountHeader=_accountHeader;
@property(readonly, copy) NSAttributedString *salableInfoLabel; // @synthesize salableInfoLabel=_salableInfoLabel;
@property(readonly, copy) NSURL *salableIconURL; // @synthesize salableIconURL=_salableIconURL;
@property(readonly, copy) NSAttributedString *displayPriceLabel; // @synthesize displayPriceLabel=_displayPriceLabel;
@property(readonly, copy) NSString *buyParams; // @synthesize buyParams=_buyParams;
- (void)_init;	// IMP=0x00000000000e4fcb
- (id)initWithServerResponse:(id)arg1 buyParams:(id)arg2;	// IMP=0x00000000000e4eed
- (id)initWithServerResponse:(id)arg1;	// IMP=0x00000000000e4e70
- (id)init;	// IMP=0x00000000000e4e24
- (id)authKitAuthenticationContextForAccount:(id)arg1;	// IMP=0x00000000000e4989
- (id)defaultAuthKitAuthenticationContext;	// IMP=0x00000000000e4902

@end
