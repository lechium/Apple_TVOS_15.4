//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, TPSActionableContent, TPSAssets, TPSFullTipContent, TPSWidgetContent;

@interface TPSTip <NSCopying, NSSecureCoding>
{
    _Bool _siriSuggestion;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _subContentType;	// 24 = 0x18
    NSString *_eyebrow;	// 32 = 0x20
    TPSFullTipContent *_fullContent;	// 40 = 0x28
    TPSActionableContent *_miniContent;	// 48 = 0x30
    TPSWidgetContent *_widgetContent;	// 56 = 0x38
    NSArray *_collectionIdentifiers;	// 64 = 0x40
}

+ (void)getValuesFromOpenURLSchemeQueryItems:(id)arg1 tipIdentifier:(id *)arg2 collectionIdentifier:(id *)arg3 referrer:(id *)arg4;	// IMP=0x000000000004a505
+ (long long)contentTypeForDictionary:(id)arg1;	// IMP=0x000000000004a44a
+ (id)tipIdFromDictionary:(id)arg1;	// IMP=0x000000000004a42e
+ (id)URLSchemeWithTipIdentifier:(id)arg1 collectionIdentifier:(id)arg2 referrer:(id)arg3;	// IMP=0x000000000004a246
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004a23e
- (void).cxx_destruct;	// IMP=0x000000000004b84e
@property(copy, nonatomic) NSArray *collectionIdentifiers; // @synthesize collectionIdentifiers=_collectionIdentifiers;
@property(copy, nonatomic) TPSWidgetContent *widgetContent; // @synthesize widgetContent=_widgetContent;
@property(copy, nonatomic) TPSActionableContent *miniContent; // @synthesize miniContent=_miniContent;
@property(copy, nonatomic) TPSFullTipContent *fullContent; // @synthesize fullContent=_fullContent;
@property(copy, nonatomic) NSString *eyebrow; // @synthesize eyebrow=_eyebrow;
@property(nonatomic) long long subContentType; // @synthesize subContentType=_subContentType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic, getter=isSiriSuggestion) _Bool siriSuggestion; // @synthesize siriSuggestion=_siriSuggestion;
- (id)debugDescription;	// IMP=0x000000000004b421
- (id)URLSchemeWithReferrer:(id)arg1;	// IMP=0x000000000004b34e
- (_Bool)hasWidgetContent;	// IMP=0x000000000004b31b
- (void)addCollectionIdentifier:(id)arg1;	// IMP=0x000000000004b24e
- (void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000004b072
@property(readonly, copy, nonatomic) TPSAssets *fullContentAssets; // @dynamic fullContentAssets;
@property(readonly, nonatomic, getter=isWelcome) _Bool welcome; // @dynamic welcome;
@property(readonly, nonatomic, getter=isSoftwareWelcome) _Bool softwareWelcome;
@property(readonly, nonatomic, getter=isHardwareWelcome) _Bool hardwareWelcome;
@property(readonly, nonatomic, getter=isOutro) _Bool outro;
@property(readonly, nonatomic, getter=isIntro) _Bool intro;
@property(readonly, nonatomic, getter=isTip) _Bool tip;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ad0b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004aaea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004a958
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000004a83b
- (id)shareText;	// IMP=0x000000000004745a
- (id)footnoteContent;	// IMP=0x000000000004740a
- (id)bodyContent;	// IMP=0x00000000000473ba
- (id)bodyText;	// IMP=0x000000000004736a
- (id)webURLPath;	// IMP=0x0000000000047362
- (id)summary;	// IMP=0x0000000000047312
- (id)actions;	// IMP=0x00000000000472c2
- (_Bool)hasVideo;	// IMP=0x000000000004727e
- (_Bool)hasImage;	// IMP=0x000000000004723a
- (id)shortTitle;	// IMP=0x00000000000471ea
- (id)title;	// IMP=0x000000000004719a
- (id)eyebrowText;	// IMP=0x0000000000047188
- (_Bool)textContainsHTML;	// IMP=0x0000000000047180
- (_Bool)containsLinks;	// IMP=0x000000000004713c

@end

