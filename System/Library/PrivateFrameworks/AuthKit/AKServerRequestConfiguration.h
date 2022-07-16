//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAppleIDServerResourceLoadDelegate, NSArray, NSURLRequest;

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding>
{
    NSURLRequest *_request;	// 8 = 0x8
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;	// 16 = 0x10
    unsigned long long _requestType;	// 24 = 0x18
    unsigned long long _presentationType;	// 32 = 0x20
    NSArray *_whitelistedPathURLs;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004bb9d
- (void).cxx_destruct;	// IMP=0x000000000004bf54
@property(copy, nonatomic) NSArray *whitelistedPathURLs; // @synthesize whitelistedPathURLs=_whitelistedPathURLs;
@property(nonatomic) unsigned long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate; // @synthesize resourceLoadDelegate=_resourceLoadDelegate;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (id)description;	// IMP=0x000000000004be54
- (id)initWithRequest:(id)arg1 requestType:(unsigned long long)arg2;	// IMP=0x000000000004bdde
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004bd2e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004bba5

@end

