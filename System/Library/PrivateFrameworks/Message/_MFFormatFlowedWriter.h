//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFPlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject
{
    MFPlainTextDocument *_inputDocument;	// 8 = 0x8
    unsigned int _encoding;	// 16 = 0x10
    NSMutableString *_outputString;	// 24 = 0x18
    NSMutableString *_quotedString;	// 32 = 0x20
    unsigned int _addedTrailingSpaces:1;	// 40 = 0x28
    NSMutableString *_lineString;	// 48 = 0x30
}

+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned int)arg2;	// IMP=0x000000000000e74c
- (_Bool)addedTrailingSpaces;	// IMP=0x000000000000f96f
- (id)quotedString;	// IMP=0x000000000000f7ac
- (id)outputString;	// IMP=0x000000000000f4fb
- (void)_outputQuotedParagraph:(id)arg1 range:(struct _NSRange)arg2 withQuoteLevel:(unsigned int)arg3;	// IMP=0x000000000000eac8
- (unsigned long long)_findLineBreakInRange:(struct _NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(_Bool)arg3;	// IMP=0x000000000000e7eb
- (void)dealloc;	// IMP=0x000000000000e793

@end

