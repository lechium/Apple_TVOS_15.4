//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GEOServerFormatStyleParser : NSObject
{
    NSString *_string;	// 8 = 0x8
    NSMutableArray *_styleNames;	// 16 = 0x10
    NSMutableArray *_styleRanges;	// 24 = 0x18
    NSMutableArray *_tokenRanges;	// 32 = 0x20
    NSArray *_results;	// 40 = 0x28
    NSMutableArray *_openStyleNames;	// 48 = 0x30
    NSMutableArray *_openStyleLocations;	// 56 = 0x38
    _Bool _parsed;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000009c51c9
- (void)_removeTokensFromAttributedString:(id)arg1;	// IMP=0x00000000009c510c
- (_Bool)_handleClosingResult:(id)arg1;	// IMP=0x00000000009c4c8f
- (_Bool)_handleOpeningResult:(id)arg1;	// IMP=0x00000000009c4a76
- (void)_parse;	// IMP=0x00000000009c45d9
- (void)_parseIfNeeded;	// IMP=0x00000000009c45bf
- (id)attributedStringWithStyleAttributes:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x00000000009c4438
- (void)enumerateTokenRangesForRemoval:(CDUnknownBlockType)arg1;	// IMP=0x00000000009c4342
@property(readonly, nonatomic) NSArray *tokenRanges;
- (void)enumerateStylesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000009c41ba
- (struct _NSRange)rangeForStyleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009c412f
@property(readonly, nonatomic) NSArray *styles;
- (id)initWithString:(id)arg1;	// IMP=0x00000000009c4068
- (id)init;	// IMP=0x00000000009c403e

@end

