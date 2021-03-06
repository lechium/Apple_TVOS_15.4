//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VUIHTMLMarkupParser;

__attribute__((visibility("hidden")))
@interface VUIHTMLMarkupParser : NSObject
{
    NSString *_string;	// 8 = 0x8
    id <VUIHTMLMarkupParser> _delegate;	// 16 = 0x10
    struct _xmlParserCtxt *__parserContext;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0000000000108940
- (void).cxx_destruct;	// IMP=0x0000000000109151
@property(nonatomic) struct _xmlParserCtxt *_parserContext; // @synthesize _parserContext=__parserContext;
@property(nonatomic) __weak id <VUIHTMLMarkupParser> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void)parse;	// IMP=0x0000000000108bec
- (void)reportParseError:(struct _xmlError *)arg1;	// IMP=0x0000000000108aab
- (void)reportErrorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000108a25
- (id)init;	// IMP=0x00000000001089fa
- (id)initWithString:(id)arg1;	// IMP=0x0000000000108987

@end

