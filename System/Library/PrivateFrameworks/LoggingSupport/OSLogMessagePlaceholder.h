//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface OSLogMessagePlaceholder : NSObject
{
    struct os_log_fmt_cspec_s *_placeholder;	// 8 = 0x8
    NSString *_placeholderString;	// 16 = 0x10
    NSArray *_placeholderTokens;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x000000000001009e
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *typeNamespace;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *rawString;
- (id)initWithPlaceholderStruct:(struct os_log_fmt_cspec_s *)arg1;	// IMP=0x000000000000fdf4
@property(readonly, nonatomic) int precision;
@property(readonly, nonatomic) int width;

@end

