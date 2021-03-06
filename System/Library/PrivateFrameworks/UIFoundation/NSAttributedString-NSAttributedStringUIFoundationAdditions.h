//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NSAttributedStringUIFoundationAdditions)
+ (id)_documentTypeForFileType:(id)arg1;	// IMP=0x000000000005d603
+ (id)allowedSecureCodingClasses;	// IMP=0x000000000005aec5
+ (_Bool)_isAttributedStringAgent;	// IMP=0x000000000005ae2e
+ (id)attributedStringWithAttachment:(id)arg1;	// IMP=0x00000000000c63b2
+ (id)_sharedAttachmentString;	// IMP=0x00000000000c62d4
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006428b
- (struct _NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000063f4b
- (_Bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000063c7a
- (_Bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000639cb
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000639b6
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(_Bool *)arg3;	// IMP=0x00000000000632a5
- (_Bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000063028
- (_Bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000062dcc
- (struct _NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000062909
- (struct _NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000625c9
- (id)rulerAttributesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000062555
- (id)fontAttributesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000062499
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00000000000622d6
- (id)initWithHTML:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x00000000000622bf
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x0000000000062243
- (id)initWithPath:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x00000000000621f7
- (id)initWithURL:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x00000000000621dd
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00000000000621c8
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000621b6
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000006205d
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x0000000000061ff8
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x0000000000061fd9
- (id)initWithRTFD:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x0000000000061f74
- (id)initWithRTF:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x0000000000061f0f
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x0000000000061d5f
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000005ec81
- (id)_documentFromRange:(struct _NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id *)arg4;	// IMP=0x000000000005eb9f
- (id)_htmlDocumentFragmentString:(struct _NSRange)arg1 documentAttributes:(id)arg2 subresources:(id *)arg3;	// IMP=0x000000000005eac5
- (id)docFormatFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;	// IMP=0x000000000005ea46
- (id)RTFDFileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;	// IMP=0x000000000005e9c7
- (id)RTFDFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;	// IMP=0x000000000005e948
- (id)RTFFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;	// IMP=0x000000000005e8c9
- (id)fileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005e3b9
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005ddf6
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange)arg1;	// IMP=0x000000000005d648
- (_Bool)containsAttachments;	// IMP=0x000000000005d5d0
- (_Bool)containsAttachmentsInRange:(struct _NSRange)arg1;	// IMP=0x000000000005d4ff
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;	// IMP=0x000000000005c7a4
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;	// IMP=0x000000000005c60b
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;	// IMP=0x000000000005c5e5
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2 usesAlternativeBreaker:(_Bool)arg3 lineBreakStrategy:(unsigned long long)arg4;	// IMP=0x000000000005be60
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000005b575
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005b533
- (id)defaultLanguage;	// IMP=0x000000000005b17b
- (_Bool)_isStringDrawingTextStorage;	// IMP=0x000000000005b173
- (struct CGSize)size;	// IMP=0x000000000008f94c
- (void)drawInRect:(struct CGRect)arg1;	// IMP=0x000000000008f863
- (void)drawAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000008f780
- (_Bool)hasColorGlyphsInRange:(struct _NSRange)arg1;	// IMP=0x000000000009389d
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2;	// IMP=0x0000000000093867
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2;	// IMP=0x0000000000093853
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000092ceb
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 withTrackingAdjustment:(double)arg2;	// IMP=0x0000000000092acf
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 scaledByScaleFactor:(double)arg2;	// IMP=0x0000000000092aa3
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000092892
- (id)initWithAttachment:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000000c6328
@end

