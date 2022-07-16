//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFPythonHTMLParserDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableOrderedSet, NSString, NSURL, WFPythonHTMLParser;

@interface WFHTMLToMarkdown : NSObject <WFPythonHTMLParserDelegate>
{
    _Bool _unicodeSnob;	// 8 = 0x8
    _Bool _escapeSnob;	// 9 = 0x9
    _Bool _linksEachParagraph;	// 10 = 0xa
    _Bool _skipInternalLinks;	// 11 = 0xb
    _Bool _inlineLinks;	// 12 = 0xc
    _Bool _ignoreLinks;	// 13 = 0xd
    _Bool _ignoreImages;	// 14 = 0xe
    _Bool _ignoreEmphasis;	// 15 = 0xf
    _Bool _start;	// 16 = 0x10
    _Bool _space;	// 17 = 0x11
    _Bool _pre;	// 18 = 0x12
    _Bool _startpre;	// 19 = 0x13
    _Bool _code;	// 20 = 0x14
    _Bool _lastWasNewline;	// 21 = 0x15
    _Bool _lastWasList;	// 22 = 0x16
    NSURL *_baseURL;	// 24 = 0x18
    long long _bodyWidth;	// 32 = 0x20
    WFPythonHTMLParser *_parser;	// 40 = 0x28
    NSDictionary *_nameToCodepointMapping;	// 48 = 0x30
    NSDictionary *_unifiableN;	// 56 = 0x38
    NSMutableArray *_outTextList;	// 64 = 0x40
    NSString *_outText;	// 72 = 0x48
    long long _quiet;	// 80 = 0x50
    long long _p_p;	// 88 = 0x58
    long long _outCount;	// 96 = 0x60
    NSMutableArray *_a;	// 104 = 0x68
    NSMutableArray *_aStack;	// 112 = 0x70
    NSString *_maybeAutomaticLink;	// 120 = 0x78
    long long _aCount;	// 128 = 0x80
    NSMutableArray *_list;	// 136 = 0x88
    long long _blockquote;	// 144 = 0x90
    long long _style;	// 152 = 0x98
    NSString *_abbreviationTitle;	// 160 = 0xa0
    NSString *_abbreviationData;	// 168 = 0xa8
    NSMutableOrderedSet *_abbreviationList;	// 176 = 0xb0
    NSString *_ulItemMark;	// 184 = 0xb8
    NSString *_emphasisMark;	// 192 = 0xc0
    NSString *_strongMark;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000ed350
@property(copy, nonatomic) NSString *strongMark; // @synthesize strongMark=_strongMark;
@property(copy, nonatomic) NSString *emphasisMark; // @synthesize emphasisMark=_emphasisMark;
@property(copy, nonatomic) NSString *ulItemMark; // @synthesize ulItemMark=_ulItemMark;
@property(retain, nonatomic) NSMutableOrderedSet *abbreviationList; // @synthesize abbreviationList=_abbreviationList;
@property(copy, nonatomic) NSString *abbreviationData; // @synthesize abbreviationData=_abbreviationData;
@property(copy, nonatomic) NSString *abbreviationTitle; // @synthesize abbreviationTitle=_abbreviationTitle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool lastWasList; // @synthesize lastWasList=_lastWasList;
@property(nonatomic) _Bool lastWasNewline; // @synthesize lastWasNewline=_lastWasNewline;
@property(nonatomic) _Bool code; // @synthesize code=_code;
@property(nonatomic) _Bool startpre; // @synthesize startpre=_startpre;
@property(nonatomic) _Bool pre; // @synthesize pre=_pre;
@property(nonatomic) long long blockquote; // @synthesize blockquote=_blockquote;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(nonatomic) long long aCount; // @synthesize aCount=_aCount;
@property(copy, nonatomic) NSString *maybeAutomaticLink; // @synthesize maybeAutomaticLink=_maybeAutomaticLink;
@property(retain, nonatomic) NSMutableArray *aStack; // @synthesize aStack=_aStack;
@property(retain, nonatomic) NSMutableArray *a; // @synthesize a=_a;
@property(nonatomic) _Bool space; // @synthesize space=_space;
@property(nonatomic) _Bool start; // @synthesize start=_start;
@property(nonatomic) long long outCount; // @synthesize outCount=_outCount;
@property(nonatomic) long long p_p; // @synthesize p_p=_p_p;
@property(nonatomic) long long quiet; // @synthesize quiet=_quiet;
@property(copy, nonatomic) NSString *outText; // @synthesize outText=_outText;
@property(retain, nonatomic) NSMutableArray *outTextList; // @synthesize outTextList=_outTextList;
@property(retain, nonatomic) NSDictionary *unifiableN; // @synthesize unifiableN=_unifiableN;
@property(retain, nonatomic) NSDictionary *nameToCodepointMapping; // @synthesize nameToCodepointMapping=_nameToCodepointMapping;
@property(retain, nonatomic) WFPythonHTMLParser *parser; // @synthesize parser=_parser;
@property(nonatomic) _Bool ignoreEmphasis; // @synthesize ignoreEmphasis=_ignoreEmphasis;
@property(nonatomic) _Bool ignoreImages; // @synthesize ignoreImages=_ignoreImages;
@property(nonatomic) _Bool ignoreLinks; // @synthesize ignoreLinks=_ignoreLinks;
@property(nonatomic) _Bool inlineLinks; // @synthesize inlineLinks=_inlineLinks;
@property(nonatomic) _Bool skipInternalLinks; // @synthesize skipInternalLinks=_skipInternalLinks;
@property(nonatomic) long long bodyWidth; // @synthesize bodyWidth=_bodyWidth;
@property(nonatomic) _Bool linksEachParagraph; // @synthesize linksEachParagraph=_linksEachParagraph;
@property(nonatomic) _Bool escapeSnob; // @synthesize escapeSnob=_escapeSnob;
@property(nonatomic) _Bool unicodeSnob; // @synthesize unicodeSnob=_unicodeSnob;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)unifiable;	// IMP=0x00000000000eceb2
- (unsigned short)nameToCodepoint:(id)arg1;	// IMP=0x00000000000ece02
- (void)parser:(id)arg1 foundData:(id)arg2;	// IMP=0x00000000000ecbf1
- (void)output:(id)arg1 pureData:(_Bool)arg2 force:(id)arg3;	// IMP=0x00000000000ebc79
- (void)output:(id)arg1;	// IMP=0x00000000000ebc62
- (void)p;	// IMP=0x00000000000ebc4b
- (void)pbr;	// IMP=0x00000000000ebc0e
- (void)handleTag:(id)arg1 attributes:(id)arg2 start:(_Bool)arg3;	// IMP=0x00000000000ea20d
- (id)escapeMDSection:(id)arg1 snob:(_Bool)arg2;	// IMP=0x00000000000e9f54
- (id)escapeMD:(id)arg1;	// IMP=0x00000000000e9ea2
- (int)tagHeaderNumber:(id)arg1;	// IMP=0x00000000000e9e1e
- (id)previousIndex:(id)arg1;	// IMP=0x00000000000e99fb
- (void)parser:(id)arg1 foundEndTag:(id)arg2;	// IMP=0x00000000000e99e1
- (void)parser:(id)arg1 foundStartTag:(id)arg2 attributes:(id)arg3;	// IMP=0x00000000000e975a
- (void)parser:(id)arg1 foundEntityRef:(id)arg2;	// IMP=0x00000000000e9703
- (void)parser:(id)arg1 foundCharacterRef:(id)arg2;	// IMP=0x00000000000e96ac
- (id)entityref:(id)arg1;	// IMP=0x00000000000e959e
- (id)charref:(id)arg1;	// IMP=0x00000000000e9395
- (void)close;	// IMP=0x00000000000e9208
- (id)optwrap:(id)arg1;	// IMP=0x00000000000e8e6e
- (_Bool)onlywhite:(id)arg1;	// IMP=0x00000000000e8e0d
- (id)wrapText:(id)arg1 toWidth:(long long)arg2;	// IMP=0x00000000000e8ae3
- (_Bool)skipwrap:(id)arg1;	// IMP=0x00000000000e88e9
- (id)handleHTML:(id)arg1;	// IMP=0x00000000000e8828
- (void)addOutput:(id)arg1;	// IMP=0x00000000000e878f
- (id)initWithBaseURL:(id)arg1;	// IMP=0x00000000000e859a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

