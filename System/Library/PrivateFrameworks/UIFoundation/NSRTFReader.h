//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSColor, NSData, NSFileWrapper, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableData, NSMutableDictionary, NSTextTable;

@interface NSRTFReader : NSObject
{
    NSMutableAttributedString *_topAttributedString;	// 8 = 0x8
    NSMutableAttributedString *_curAttributedString;	// 16 = 0x10
    NSMutableArray *_attributesStack;	// 24 = 0x18
    NSMutableDictionary *_curAttributes;	// 32 = 0x20
    unsigned int _level;	// 40 = 0x28
    NSData *_rtfData;	// 48 = 0x30
    NSMutableDictionary *_fontTable;	// 56 = 0x38
    NSFileWrapper *_document;	// 64 = 0x40
    union {
        unsigned char thin[128];
        unsigned short fat[128];
    } _textBuffer;	// 72 = 0x48
    unsigned long long _textBufferIndex;	// 328 = 0x148
    int _rtfVersion;	// 336 = 0x150
    int _cocoaVersion;	// 340 = 0x154
    int _cocoaSubVersion;	// 344 = 0x158
    int _readOnly;	// 348 = 0x15c
    int _usesScreenFonts;	// 352 = 0x160
    int _colorTblColorSpace;	// 356 = 0x164
    unsigned int _defaultToUniCharEncoding;	// 360 = 0x168
    struct _NSAttributeInfo _attributeInfo;	// 368 = 0x170
    NSMutableData *_attributeInfoStack;	// 416 = 0x1a0
    struct CGSize _paperSize;	// 424 = 0x1a8
    double _lMargin;	// 440 = 0x1b8
    double _rMargin;	// 448 = 0x1c0
    double _bMargin;	// 456 = 0x1c8
    double _tMargin;	// 464 = 0x1d0
    NSMutableDictionary *_documentInfoDictionary;	// 472 = 0x1d8
    struct CGSize _viewSize;	// 480 = 0x1e0
    int _viewScale;	// 496 = 0x1f0
    int _viewKind;	// 500 = 0x1f4
    NSMapTable *_cachedRTFFontTable;	// 504 = 0x1f8
    double _hyphenationFactor;	// 512 = 0x200
    double _defaultTabInterval;	// 520 = 0x208
    NSColor *_documentBackgroundColor;	// 528 = 0x210
    struct _NSRTFPriv _private;	// 536 = 0x218
    _Bool _textBufferContentsIsFat;	// 2808 = 0xaf8
    _Bool _explicitCharSetEncountered;	// 2809 = 0xaf9
    _Bool _isRTLDocument;	// 2810 = 0xafa
    long long _readLimit;	// 2816 = 0xb00
    long long _thumbnailLimit;	// 2824 = 0xb08
    _Bool _limitReached;	// 2832 = 0xb10
    unsigned char _textFlow;	// 2833 = 0xb11
    NSMutableArray *_layoutOrientationSections;	// 2840 = 0xb18
    unsigned long long _verticalOrientationLocation;	// 2848 = 0xb20
    NSArray *_textBlocks;	// 2856 = 0xb28
    NSMutableArray *_nestedTables;	// 2864 = 0xb30
    NSTextTable *_currentTable;	// 2872 = 0xb38
    NSTextTable *_previousTable;	// 2880 = 0xb40
    NSMutableArray *_currentRowArray;	// 2888 = 0xb48
    NSMutableArray *_previousRowArray;	// 2896 = 0xb50
    int _currentRow;	// 2904 = 0xb58
    int _currentColumn;	// 2908 = 0xb5c
    int _currentDefinitionColumn;	// 2912 = 0xb60
    _Bool _currentRowIsLast;	// 2916 = 0xb64
    _Bool _setTableCells;	// 2917 = 0xb65
    unsigned long long _currentBorderEdge;	// 2920 = 0xb68
    _Bool _currentBorderIsTable;	// 2928 = 0xb70
    NSMutableDictionary *_listDefinitions;	// 2936 = 0xb78
    int _currentListNumber;	// 2944 = 0xb80
    int _currentListLevel;	// 2948 = 0xb84
    NSCalendar *_gregorianCalendar;	// 2952 = 0xb88
    NSMutableDictionary *_fontAttributesTable;	// 2960 = 0xb90
    long long _cocoaTextScaling;	// 2968 = 0xb98
    long long _cocoaPlatform;	// 2976 = 0xba0
    long long _targetTextScaling;	// 2984 = 0xba8
    long long _sourceTextScaling;	// 2992 = 0xbb0
    long long _finalTextScaling;	// 3000 = 0xbb8
}

- (void)finalize;	// IMP=0x00000000000cf9ab
- (void)dealloc;	// IMP=0x00000000000cf89c
- (void)_popState;	// IMP=0x00000000000cf7dd
- (void)_pushState;	// IMP=0x00000000000cf78e
- (void)processString:(id)arg1;	// IMP=0x00000000000cf36b
- (void)_addOverride:(long long)arg1 forKey:(long long)arg2;	// IMP=0x00000000000cf248
- (void)_addListDefinition:(id)arg1 forKey:(long long)arg2;	// IMP=0x00000000000cf1c2
- (id)_listDefinitions;	// IMP=0x00000000000cf1b5
- (void)_setCurrentListLevel:(long long)arg1;	// IMP=0x00000000000cf1a9
- (long long)_currentListLevel;	// IMP=0x00000000000cf19c
- (void)_setCurrentListNumber:(long long)arg1;	// IMP=0x00000000000cf190
- (long long)_currentListNumber;	// IMP=0x00000000000cf183
- (void)_updateAttributes;	// IMP=0x00000000000cecdb
- (id)attributesAtEndOfGroup;	// IMP=0x00000000000ce9d5
- (id)attributedString;	// IMP=0x00000000000ce80b
- (id)attributedStringToEndOfGroup;	// IMP=0x00000000000ce76b
- (id)_mutableParagraphStyle;	// IMP=0x00000000000ce679
- (id)defaultParagraphStyle;	// IMP=0x00000000000ce5df
- (id)mutableAttributes;	// IMP=0x00000000000ce596
- (id)mutableAttributedString;	// IMP=0x00000000000ce58c
- (void)setMutableAttributedString:(id)arg1;	// IMP=0x00000000000ce52f
- (id)documentAttributes;	// IMP=0x00000000000ce08a
- (void)_mergeTableCellsVertically;	// IMP=0x00000000000cdfaf
- (void)_mergeTableCellsHorizontally;	// IMP=0x00000000000cdefa
- (void)_endTableRow;	// IMP=0x00000000000cde23
- (void)_lastTableRow;	// IMP=0x00000000000cde16
- (void)_endTableCell;	// IMP=0x00000000000cdda9
- (void)_paragraphInTable;	// IMP=0x00000000000cdd78
- (void)_endTableCellDefinition;	// IMP=0x00000000000cdd49
- (void)_startTableRowDefinition;	// IMP=0x00000000000cdd3f
- (void)_setTableNestingLevel:(long long)arg1;	// IMP=0x00000000000cdc40
- (void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(_Bool)arg2;	// IMP=0x00000000000cd865
- (_Bool)_currentTableCellIsPlaceholder;	// IMP=0x00000000000cd7a6
- (_Bool)_currentBorderIsTable;	// IMP=0x00000000000cd79a
- (unsigned long long)_currentBorderEdge;	// IMP=0x00000000000cd78d
- (id)_currentTableCell;	// IMP=0x00000000000cd74b
- (id)_currentTable;	// IMP=0x00000000000cd73e
- (void)_setSourceTextScaling:(long long)arg1;	// IMP=0x00000000000cd3f1
- (void)_setTargetTextScaling:(long long)arg1;	// IMP=0x00000000000cd3de
- (long long)cocoaTextScaling;	// IMP=0x00000000000cd3d1
- (long long)cocoaPlatform;	// IMP=0x00000000000cd3c4
- (unsigned long long)textFlow;	// IMP=0x00000000000cd3b7
- (void)setTextFlow:(unsigned long long)arg1;	// IMP=0x00000000000cd398
- (long long)baseWritingDirection;	// IMP=0x00000000000cd38b
- (void)setBaseWritingDirection:(long long)arg1;	// IMP=0x00000000000cd37a
- (double)defaultTabInterval;	// IMP=0x00000000000cd36c
- (void)setDefaultTabInterval:(double)arg1;	// IMP=0x00000000000cd35e
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000cd323
- (void)setHyphenationFactor:(float)arg1;	// IMP=0x00000000000cd311
- (void)setBottomMargin:(double)arg1;	// IMP=0x00000000000cd303
- (void)setTopMargin:(double)arg1;	// IMP=0x00000000000cd2f5
- (void)setRightMargin:(double)arg1;	// IMP=0x00000000000cd2e7
- (void)setLeftMargin:(double)arg1;	// IMP=0x00000000000cd2d9
- (void)setViewScale:(long long)arg1;	// IMP=0x00000000000cd2cd
- (void)setViewKind:(long long)arg1;	// IMP=0x00000000000cd2c1
- (struct CGSize)viewSize;	// IMP=0x00000000000cd2ab
- (void)setViewSize:(struct CGSize)arg1;	// IMP=0x00000000000cd295
- (struct CGSize)paperSize;	// IMP=0x00000000000cd27f
- (void)setPaperSize:(struct CGSize)arg1;	// IMP=0x00000000000cd269
- (void)setThumbnailLimit:(long long)arg1;	// IMP=0x00000000000cd25c
- (void)setReadLimit:(long long)arg1;	// IMP=0x00000000000cd24f
- (id)_RTFDFileWrapper;	// IMP=0x00000000000cd245
- (void)_setRTFDFileWrapper:(id)arg1;	// IMP=0x00000000000cd217
- (id)initWithRTF:(id)arg1;	// IMP=0x00000000000c6f55
- (id)initWithRTFDFileWrapper:(id)arg1;	// IMP=0x00000000000c6e64
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000c6d65
- (id)initWithRTFD:(id)arg1;	// IMP=0x00000000000c6bd0

@end

