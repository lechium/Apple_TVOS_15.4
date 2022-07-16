//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MMHTMLParser, MMSpanParser;

@interface MMParser : NSObject
{
    unsigned long long _extensions;	// 8 = 0x8
    MMHTMLParser *_htmlParser;	// 16 = 0x10
    MMSpanParser *_spanParser;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a1422
@property(readonly, nonatomic) MMSpanParser *spanParser; // @synthesize spanParser=_spanParser;
@property(readonly, nonatomic) MMHTMLParser *htmlParser; // @synthesize htmlParser=_htmlParser;
@property(readonly, nonatomic) unsigned long long extensions; // @synthesize extensions=_extensions;
- (void)_updateLinksFromDefinitionsInDocument:(id)arg1;	// IMP=0x00000000001a0df7
- (id)_parseTableWithScanner:(id)arg1;	// IMP=0x00000000001a0a6d
- (id)_parseTableRowWithScanner:(id)arg1 columns:(id)arg2;	// IMP=0x00000000001a07b6
- (id)_parseTableHeaderWithScanner:(id)arg1;	// IMP=0x00000000001a058d
- (id)_parseParagraphWithScanner:(id)arg1;	// IMP=0x00000000001a00a9
- (id)_parseLinkDefinitionWithScanner:(id)arg1;	// IMP=0x000000000019fbfe
- (id)_parseListWithScanner:(id)arg1;	// IMP=0x000000000019f9a1
- (id)_parseListItemWithScanner:(id)arg1 listType:(long long)arg2;	// IMP=0x000000000019f016
- (_Bool)_parseListMarkerWithScanner:(id)arg1 listType:(long long)arg2;	// IMP=0x000000000019eedf
- (id)_parseHorizontalRuleWithScanner:(id)arg1;	// IMP=0x000000000019ed01
- (id)_parseFencedCodeBlockWithScanner:(id)arg1;	// IMP=0x000000000019e998
- (id)_parseCodeBlockWithScanner:(id)arg1;	// IMP=0x000000000019e45b
- (id)_parseCodeLinesWithScanner:(id)arg1;	// IMP=0x000000000019e131
- (id)_parseBlockquoteWithScanner:(id)arg1;	// IMP=0x000000000019dd42
- (id)_parseUnderlinedHeaderWithScanner:(id)arg1;	// IMP=0x000000000019d9e2
- (id)_parsePrefixHeaderWithScanner:(id)arg1;	// IMP=0x000000000019d632
- (id)_parseHTMLWithScanner:(id)arg1;	// IMP=0x000000000019d5a3
- (id)_parseBlockElementWithScanner:(id)arg1;	// IMP=0x000000000019d20a
- (id)_parseElementsWithScanner:(id)arg1;	// IMP=0x000000000019d0b8
- (id)_removeTabsFromString:(id)arg1;	// IMP=0x000000000019cf1c
- (void)_addTextLineToElement:(id)arg1 withScanner:(id)arg2;	// IMP=0x000000000019ca32
- (id)parseMarkdown:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019c952
- (id)initWithExtensions:(unsigned long long)arg1;	// IMP=0x000000000019c8bf

@end

