//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AKAppleIDAuthenticationContext, NSData, NSURLRequest;

@protocol AKURLRequestProvider <NSObject>
@property(readonly, nonatomic) _Bool shouldCacheResource;
@property(readonly, nonatomic) AKAppleIDAuthenticationContext *context;
- (unsigned long long)requestBodyType;
- (unsigned long long)expectedResponseType;
- (_Bool)validateResponseData:(NSData *)arg1 error:(id *)arg2;
- (NSURLRequest *)buildRequest:(id *)arg1;
@end

