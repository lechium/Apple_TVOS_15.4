//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

#import <Home/HFStringGenerator-Protocol.h>

@class NSString;

@interface NSAttributedString (HFAdditions) <HFStringGenerator>
+ (id)hf_attributedStringWithSystemImageNamed:(id)arg1 title:(id)arg2 isRTL:(_Bool)arg3;	// IMP=0x000000000016c5bd
+ (id)hf_safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;	// IMP=0x000000000016be0a
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4 additionalLinkAttributes:(id)arg5;	// IMP=0x000000000016b609
+ (id)hu_attributedLinkStringForAttributedString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x000000000016b43e
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x000000000016b411
+ (id)hf_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x000000000016b371
+ (id)hf_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;	// IMP=0x000000000016b204
- (id)hf_attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;	// IMP=0x000000000016bd50
- (id)hf_attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;	// IMP=0x000000000016bc4b
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000016b86c
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1;	// IMP=0x000000000016b802
- (id)hf_scaledAttributedStringWithBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x000000000016b18a
- (id)hf_attributedStringScaledByFactor:(double)arg1;	// IMP=0x000000000016b145
- (double)hf_scaleFactorForBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x000000000016b097
- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange)arg1 usingDefaultAttributes:(id)arg2;	// IMP=0x00000000002435ca
- (_Bool)prefersDynamicString;	// IMP=0x00000000002435c2
- (id)stringWithAttributes:(id)arg1;	// IMP=0x0000000000243558
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;	// IMP=0x0000000000243546

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
