//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface TVLImageElement
{
    _Bool _required;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_style;	// 24 = 0x18
    NSString *_src1080;	// 32 = 0x20
    NSString *_src720;	// 40 = 0x28
    NSString *_src;	// 48 = 0x30
    NSString *_urlString;	// 56 = 0x38
    NSString *_insetsString1080;	// 64 = 0x40
    NSString *_insetsString720;	// 72 = 0x48
    NSString *_insetsString;	// 80 = 0x50
    struct UIEdgeInsets _insets;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000002cd6
@property(copy, nonatomic) NSString *insetsString; // @synthesize insetsString=_insetsString;
@property(copy, nonatomic) NSString *insetsString720; // @synthesize insetsString720=_insetsString720;
@property(copy, nonatomic) NSString *insetsString1080; // @synthesize insetsString1080=_insetsString1080;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *src720; // @synthesize src720=_src720;
@property(copy, nonatomic) NSString *src1080; // @synthesize src1080=_src1080;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(nonatomic) _Bool required; // @synthesize required=_required;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002992
- (id)description;	// IMP=0x0000000000002840
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;	// IMP=0x00000000000022d2

@end
