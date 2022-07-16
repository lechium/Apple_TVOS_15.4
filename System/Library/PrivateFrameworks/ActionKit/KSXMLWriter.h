//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KSXMLAttributes, KSXMLElementContentsProxy, NSArray, NSMutableArray;

@interface KSXMLWriter
{
    KSXMLAttributes *_attributes;	// 16 = 0x10
    NSMutableArray *_openElements;	// 24 = 0x18
    _Bool _elementIsEmpty;	// 32 = 0x20
    unsigned long long _inlineWritingLevel;	// 40 = 0x28
    KSXMLElementContentsProxy *_contentsProxy;	// 48 = 0x30
    long long _indentation;	// 56 = 0x38
    unsigned long long _encoding;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x000000000021030a
+ (id)stringFromAttributeValue:(id)arg1;	// IMP=0x0000000000210270
+ (id)stringFromCharacters:(id)arg1;	// IMP=0x00000000002101d6
- (void).cxx_destruct;	// IMP=0x000000000020fefc
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentation;
- (void)writeString:(id)arg1;	// IMP=0x000000000020faad
- (void)writeStringByEscapingXMLEntities:(id)arg1 escapeQuot:(_Bool)arg2;	// IMP=0x000000000020f72b
- (void)stopWritingInline;	// IMP=0x000000000020f710
- (void)startWritingInline;	// IMP=0x000000000020f6d3
- (_Bool)isWritingInline;	// IMP=0x000000000020f6a8
- (_Bool)elementCanBeEmpty:(id)arg1;	// IMP=0x000000000020f6a0
- (void)writeEndTag:(id)arg1;	// IMP=0x000000000020f639
- (void)closeEmptyElementTag;	// IMP=0x000000000020f620
- (void)closeStartTag;	// IMP=0x000000000020f607
- (void)didStartElement;	// IMP=0x000000000020f58e
- (id)topElement;	// IMP=0x000000000020f571
- (_Bool)hasOpenElement:(id)arg1;	// IMP=0x000000000020f418
- (unsigned long long)openElementsCount;	// IMP=0x000000000020f3fb
@property(readonly, nonatomic) __weak NSArray *openElements;
- (_Bool)canWriteElementInline:(id)arg1;	// IMP=0x000000000020f3c1
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;	// IMP=0x000000000020f279
- (_Bool)validateElement:(id)arg1;	// IMP=0x000000000020f1ef
- (void)decreaseIndentationLevel;	// IMP=0x000000000020f1bd
- (void)increaseIndentationLevel;	// IMP=0x000000000020f18b
- (void)endCDATA;	// IMP=0x000000000020f172
- (void)startCDATA;	// IMP=0x000000000020f159
- (void)closeComment;	// IMP=0x000000000020f140
- (void)openComment;	// IMP=0x000000000020f127
- (void)writeComment:(id)arg1;	// IMP=0x000000000020f0c1
- (void)startNewline;	// IMP=0x000000000020f049
- (void)writeAttribute:(id)arg1 value:(id)arg2;	// IMP=0x000000000020ef4a
- (void)writeAttributeValue:(id)arg1;	// IMP=0x000000000020eef6
- (_Bool)hasCurrentAttributes;	// IMP=0x000000000020eed9
- (id)currentAttributes;	// IMP=0x000000000020eeb4
- (void)pushAttribute:(id)arg1 value:(id)arg2;	// IMP=0x000000000020ee97
- (void)popElement;	// IMP=0x000000000020ee3c
- (void)pushElement:(id)arg1;	// IMP=0x000000000020ee1f
- (void)endElement;	// IMP=0x000000000020ed6c
- (void)willStartElement:(id)arg1;	// IMP=0x000000000020ed66
- (void)startElement:(id)arg1 attributes:(id)arg2;	// IMP=0x000000000020eb9a
- (void)startElement:(id)arg1 writeInline:(_Bool)arg2;	// IMP=0x000000000020eaaf
- (void)startElement:(id)arg1;	// IMP=0x000000000020ea57
- (void)writeElement:(id)arg1 text:(id)arg2;	// IMP=0x000000000020e9e5
- (id)writeElement:(id)arg1 contentsInvocationTarget:(id)arg2;	// IMP=0x000000000020e970
- (void)writeCharacters:(id)arg1;	// IMP=0x000000000020e95c
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x000000000020e8cc
- (void)flush;	// IMP=0x000000000020e8c6
- (void)close;	// IMP=0x000000000020e888
- (id)initWithOutputWriter:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x000000000020e84e
- (id)initWithOutputWriter:(id)arg1;	// IMP=0x000000000020e755

@end

