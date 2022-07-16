//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSURLSessionDataDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    NSString *_initialURLString;	// 16 = 0x10
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;	// 24 = 0x18
    NSString *_oneTimePassword;	// 32 = 0x20
    NSString *_machineId;	// 40 = 0x28
    _Bool _flushCache;	// 48 = 0x30
    NSDictionary *_customHeaders;	// 56 = 0x38
}

+ (id)redactedHeadersFromHTTPHeaders:(id)arg1;	// IMP=0x0000000000015f5d
+ (id)protocolVersion;	// IMP=0x00000000000148e5
+ (Class)responseClass;	// IMP=0x00000000000148d4
- (void).cxx_destruct;	// IMP=0x0000000000016113
@property(copy, nonatomic) NSDictionary *customHeaders; // @synthesize customHeaders=_customHeaders;
@property(nonatomic) _Bool flushCache; // @synthesize flushCache=_flushCache;
- (id)redactedBodyStringWithPropertyList:(id)arg1;	// IMP=0x0000000000015d3b
- (void)dealloc;	// IMP=0x0000000000015cfc
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;	// IMP=0x0000000000015ae5
- (void)performRequestWithSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015668
- (void)performRequestForDevice:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015477
- (void)performSignedRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000153fb
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001537f
- (id)bodyDictionary;	// IMP=0x000000000001519f
- (id)urlCredential;	// IMP=0x0000000000015197
@property(readonly) NSURLRequest *urlRequest;
- (id)urlString;	// IMP=0x00000000000149b9
- (void)setDeviceProvisioningMachineId:(id)arg1;	// IMP=0x00000000000149a8
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;	// IMP=0x0000000000014997
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x000000000001495d
- (id)initWithURLString:(id)arg1;	// IMP=0x00000000000148f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
