//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse, NSString, NSURLRequest, SSURLRequestProperties;

@interface SSVSAPSignatureDataSource : NSObject
{
    NSData *_bodyData;	// 8 = 0x8
    NSURLRequest *_request;	// 16 = 0x10
    SSURLRequestProperties *_requestProperties;	// 24 = 0x18
    NSHTTPURLResponse *_response;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000015d3fd
- (id)valueForQueryParameter:(id)arg1;	// IMP=0x000000000015d170
- (id)valueForHTTPHeader:(id)arg1;	// IMP=0x000000000015cf4a
@property(readonly, nonatomic) NSString *HTTPMethod;
@property(readonly, nonatomic) NSData *HTTPBody;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;	// IMP=0x000000000015ce1e
- (id)initWithURLRequestProperties:(id)arg1;	// IMP=0x000000000015cdb3
- (id)initWithURLRequest:(id)arg1;	// IMP=0x000000000015cd48

@end

