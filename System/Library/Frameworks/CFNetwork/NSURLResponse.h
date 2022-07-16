//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL, NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSURLResponseInternal *_internal;	// 8 = 0x8
    struct URLResponse *__cf_resp_data;	// 16 = 0x10
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00000000000180f4
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000180ec
+ (id)_responseWithCFURLResponse:(struct _CFURLResponse *)arg1;	// IMP=0x00000000000182a1
@property struct URLResponse *_cf_resp_data; // @synthesize _cf_resp_data=__cf_resp_data;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000001738f
@property(readonly, copy) NSDictionary *allHeaderFields;
@property(readonly) long long statusCode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000172aa
@property(readonly, copy) NSString *suggestedFilename;
@property(readonly) long long expectedContentLength;
@property(readonly, copy) NSString *textEncodingName;
@property(readonly, copy) NSString *MIMEType;
@property(readonly, copy) NSURL *URL;
- (id)description;	// IMP=0x00000000000171da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001704b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016d1b
- (id)init;	// IMP=0x0000000000016cfb
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;	// IMP=0x0000000000016a90
- (id)_initWithCFURLResponse:(struct _CFURLResponse *)arg1;	// IMP=0x0000000000016a30
- (id)_initWithInternal:(id)arg1;	// IMP=0x00000000000169e0
- (struct URLResponse *)_inner;	// IMP=0x00000000000169ca
- (id)_peerCertificateChain;	// IMP=0x0000000000018299
- (void)dealloc;	// IMP=0x000000000001825e
- (double)_calculatedExpiration;	// IMP=0x0000000000018254
- (double)_freshnessLifetime;	// IMP=0x0000000000018229
- (_Bool)_mustRevalidate;	// IMP=0x0000000000018219
- (id)_lastModifiedDate;	// IMP=0x00000000000181db
- (void)_setMIMEType:(id)arg1;	// IMP=0x00000000000181ce
- (void)_setExpectedContentLength:(long long)arg1;	// IMP=0x0000000000018173
- (struct _CFURLResponse *)_CFURLResponse;	// IMP=0x000000000001816a

@end

