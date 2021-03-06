//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MMElement, MMHTMLParser, NSMutableArray;

@interface MMSpanParser : NSObject
{
    _Bool _parseEm;	// 8 = 0x8
    _Bool _parseImages;	// 9 = 0x9
    _Bool _parseLinks;	// 10 = 0xa
    _Bool _parseStrong;	// 11 = 0xb
    unsigned long long _extensions;	// 16 = 0x10
    MMHTMLParser *_htmlParser;	// 24 = 0x18
    NSMutableArray *_elements;	// 32 = 0x20
    NSMutableArray *_openElements;	// 40 = 0x28
    MMElement *_blockElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000034a8df
@property(nonatomic) _Bool parseStrong; // @synthesize parseStrong=_parseStrong;
@property(nonatomic) _Bool parseLinks; // @synthesize parseLinks=_parseLinks;
@property(nonatomic) _Bool parseImages; // @synthesize parseImages=_parseImages;
@property(nonatomic) _Bool parseEm; // @synthesize parseEm=_parseEm;
@property(retain, nonatomic) MMElement *blockElement; // @synthesize blockElement=_blockElement;
@property(retain, nonatomic) NSMutableArray *openElements; // @synthesize openElements=_openElements;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) MMHTMLParser *htmlParser; // @synthesize htmlParser=_htmlParser;
@property(readonly, nonatomic) unsigned long long extensions; // @synthesize extensions=_extensions;
- (id)_stringWithBackslashEscapesRemoved:(id)arg1;	// IMP=0x000000000034a6e1
- (id)_parseLeftAngleBracketWithScanner:(id)arg1;	// IMP=0x000000000034a62a
- (id)_parseBackslashWithScanner:(id)arg1;	// IMP=0x000000000034a4aa
- (id)_parseAmpersandWithScanner:(id)arg1;	// IMP=0x000000000034a360
- (id)_parseImageWithScanner:(id)arg1;	// IMP=0x0000000000349fea
- (id)_parseLinkWithScanner:(id)arg1;	// IMP=0x0000000000349dc7
- (id)_parseReferenceLinkWithScanner:(id)arg1;	// IMP=0x0000000000349956
- (id)_parseInlineLinkWithScanner:(id)arg1;	// IMP=0x0000000000349357
- (id)_parseLinkTextBodyWithScanner:(id)arg1;	// IMP=0x00000000003490ee
- (id)_parseAutomaticEmailLinkWithScanner:(id)arg1;	// IMP=0x0000000000348eaf
- (id)_parseAutomaticLinkWithScanner:(id)arg1;	// IMP=0x0000000000348a08
- (id)_parseLineBreakWithScanner:(id)arg1;	// IMP=0x0000000000348903
- (id)_parseCodeSpanWithScanner:(id)arg1;	// IMP=0x0000000000348292
- (id)_parseEmAndStrongWithScanner:(id)arg1;	// IMP=0x0000000000347b3c
- (id)_parseStrikethroughWithScanner:(id)arg1;	// IMP=0x0000000000347996
- (id)_parseAutolinkWWWURLWithScanner:(id)arg1;	// IMP=0x00000000003477cc
- (id)_parseAutolinkURLWithScanner:(id)arg1;	// IMP=0x0000000000347552
- (id)_parseAutolinkEmailAddressWithScanner:(id)arg1;	// IMP=0x0000000000347239
- (void)_parseAutolinkPathWithScanner:(id)arg1;	// IMP=0x000000000034708a
- (_Bool)_parseAutolinkDomainWithScanner:(id)arg1;	// IMP=0x0000000000346f9e
- (id)_parseNextElementWithScanner:(id)arg1;	// IMP=0x0000000000346a4c
- (id)_parseWithScanner:(id)arg1 untilTestPasses:(CDUnknownBlockType)arg2;	// IMP=0x0000000000346470
- (id)parseSpansInTableColumns:(id)arg1 withScanner:(id)arg2;	// IMP=0x000000000034601e
- (id)parseSpansInBlockElement:(id)arg1 withScanner:(id)arg2;	// IMP=0x0000000000345f51
- (id)initWithExtensions:(unsigned long long)arg1;	// IMP=0x0000000000345ea1

@end

