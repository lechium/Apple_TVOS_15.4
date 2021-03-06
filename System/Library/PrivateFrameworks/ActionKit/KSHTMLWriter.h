//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableSet, NSString;

@interface KSHTMLWriter
{
    NSString *_docType;	// 72 = 0x48
    _Bool _isXHTML;	// 80 = 0x50
    NSMutableSet *_IDs;	// 88 = 0x58
    NSMutableArray *_classNames;	// 96 = 0x60
}

+ (_Bool)isDocTypeXHTML:(id)arg1;	// IMP=0x00000000001d05c8
- (void).cxx_destruct;	// IMP=0x00000000001d0586
@property(copy, nonatomic) NSString *docType; // @synthesize docType=_docType;
- (void)closeEmptyElementTag;	// IMP=0x00000000001d0516
- (void)startElement:(id)arg1 writeInline:(_Bool)arg2;	// IMP=0x00000000001d03a8
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;	// IMP=0x00000000001d0292
- (_Bool)validateElement:(id)arg1;	// IMP=0x00000000001d020c
- (_Bool)canWriteElementInline:(id)arg1;	// IMP=0x00000000001cfdbb
- (_Bool)elementCanBeEmpty:(id)arg1;	// IMP=0x00000000001cfc74
- (_Bool)topElementIsList;	// IMP=0x00000000001cfc08
- (void)startStyleElementWithType:(id)arg1;	// IMP=0x00000000001cfbc3
- (void)writeStyleElementWithCSSString:(id)arg1;	// IMP=0x00000000001cfb5b
- (void)writeParamElementWithName:(id)arg1 value:(id)arg2;	// IMP=0x00000000001cfaaf
- (void)endJavascriptCDATA;	// IMP=0x00000000001cfa5e
- (void)startJavascriptCDATA;	// IMP=0x00000000001cfa0d
- (void)startJavascriptElementWithSrc:(id)arg1;	// IMP=0x00000000001cf910
- (void)writeJavascript:(id)arg1 useCDATA:(_Bool)arg2;	// IMP=0x00000000001cf874
- (void)writeJavascriptWithSrc:(id)arg1 charset:(id)arg2;	// IMP=0x00000000001cf802
- (void)writeJavascriptWithSrc:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x00000000001cf77e
- (void)writeLinkToStylesheet:(id)arg1 title:(id)arg2 media:(id)arg3;	// IMP=0x00000000001cf753
- (void)writeLinkWithHref:(id)arg1 type:(id)arg2 rel:(id)arg3 title:(id)arg4 media:(id)arg5;	// IMP=0x00000000001cf5f7
- (void)writeImageWithSrc:(id)arg1 alt:(id)arg2 width:(id)arg3 height:(id)arg4;	// IMP=0x00000000001cf4f6
- (void)startAnchorElementWithHref:(id)arg1 title:(id)arg2 target:(id)arg3 rel:(id)arg4;	// IMP=0x00000000001cf3e4
- (void)writeLineBreak;	// IMP=0x00000000001cf3af
- (_Bool)isIDValid:(id)arg1;	// IMP=0x00000000001cf38f
- (void)startElement:(id)arg1 idName:(id)arg2 className:(id)arg3;	// IMP=0x00000000001cf2d7
- (void)startElement:(id)arg1 className:(id)arg2;	// IMP=0x00000000001cf2c0
- (void)writeHTMLFormat:(id)arg1;	// IMP=0x00000000001cf1b6
- (void)writeHTMLString:(id)arg1;	// IMP=0x00000000001cf1a4
- (_Bool)hasCurrentAttributes;	// IMP=0x00000000001cf14d
- (id)currentAttributes;	// IMP=0x00000000001cf0c3
- (void)pushAttribute:(id)arg1 value:(id)arg2;	// IMP=0x00000000001cefea
- (void)pushClassName:(id)arg1;	// IMP=0x00000000001cefcd
- (id)currentElementClassName;	// IMP=0x00000000001cef76
- (_Bool)isXHTML;	// IMP=0x00000000001cef66
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x00000000001cee6d
- (id)initWithOutputWriter:(id)arg1 docType:(id)arg2 encoding:(unsigned long long)arg3;	// IMP=0x00000000001cee07
- (id)initWithOutputWriter:(id)arg1;	// IMP=0x00000000001ced6d

@end

