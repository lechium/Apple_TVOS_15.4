//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WFHTMLStringWebResource
{
    NSString *_htmlString;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007ee60
- (void).cxx_destruct;	// IMP=0x000000000007ee2f
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ed39
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007ec74
- (id)textEncodingName;	// IMP=0x000000000007ec67
- (id)MIMEType;	// IMP=0x000000000007ec06
- (id)URL;	// IMP=0x000000000007ebf4
- (id)data;	// IMP=0x000000000007eb9f
- (id)loadInWKWebView:(id)arg1;	// IMP=0x000000000007eabf
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;	// IMP=0x000000000007ea0e

@end

