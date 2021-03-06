//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DMCUtilities/NSURLSessionDataDelegate-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableData, NSMutableDictionary, NSString, NSURL, NSURLSession;
@protocol DMCHTTPAuthenticator, OS_dispatch_semaphore;

@interface DMCHTTPTransaction : NSObject <NSURLSessionDataDelegate>
{
    NSURL *_requestURL;	// 8 = 0x8
    NSString *_method;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    _Bool _rememberData;	// 32 = 0x20
    long long _statusCode;	// 40 = 0x28
    NSString *_contentType;	// 48 = 0x30
    NSString *_userAgent;	// 56 = 0x38
    NSData *_data;	// 64 = 0x40
    NSString *_CMSSignatureHeaderName;	// 72 = 0x48
    struct __SecIdentity *_identity;	// 80 = 0x50
    NSURL *_currentURL;	// 88 = 0x58
    NSURL *_permanentlyRedirectedURL;	// 96 = 0x60
    NSURLSession *_session;	// 104 = 0x68
    NSError *_error;	// 112 = 0x70
    NSMutableData *_responseData;	// 120 = 0x78
    NSObject<OS_dispatch_semaphore> *_doneSema;	// 128 = 0x80
    NSMutableDictionary *_headers;	// 136 = 0x88
    _Bool _pinningRevocationCheckRequired;	// 144 = 0x90
    NSArray *_pinnedSecCertificateRefs;	// 152 = 0x98
    id <DMCHTTPAuthenticator> _authenticator;	// 160 = 0xa0
    NSDictionary *_responseHeaders;	// 168 = 0xa8
    CDUnknownBlockType _simulatedTransactionBlock;	// 176 = 0xb0
}

+ (CDUnknownBlockType)emptySuccessResponseBlock;	// IMP=0x000000000001dcef
- (void).cxx_destruct;	// IMP=0x000000000001de7f
@property(copy, nonatomic) CDUnknownBlockType simulatedTransactionBlock; // @synthesize simulatedTransactionBlock=_simulatedTransactionBlock;
@property(readonly, retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) id <DMCHTTPAuthenticator> authenticator; // @synthesize authenticator=_authenticator;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, retain, nonatomic) NSURL *permanentlyRedirectedURL; // @synthesize permanentlyRedirectedURL=_permanentlyRedirectedURL;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *CMSSignatureHeaderName; // @synthesize CMSSignatureHeaderName=_CMSSignatureHeaderName;
@property(readonly, retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool pinningRevocationCheckRequired; // @synthesize pinningRevocationCheckRequired=_pinningRevocationCheckRequired;
@property(retain, nonatomic) NSArray *pinnedSecCertificateRefs; // @synthesize pinnedSecCertificateRefs=_pinnedSecCertificateRefs;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_requestURL;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000001dcce
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001dae1
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000001d81b
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d3dc
- (_Bool)_shouldAllowTrustWithPinning:(struct __SecTrust *)arg1 forHost:(id)arg2;	// IMP=0x000000000001d03c
- (_Bool)_shouldAllowTrust:(struct __SecTrust *)arg1 forHost:(id)arg2;	// IMP=0x000000000001cee4
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001cd24
- (void)_completeTransaction;	// IMP=0x000000000001cd13
- (void)performCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ca17
- (void)performSynchronously;	// IMP=0x000000000001c820
- (void)_simulateTransaction;	// IMP=0x000000000001c6ff
- (void)_beginTransaction;	// IMP=0x000000000001c466
- (id)_constructRequestOutError:(id *)arg1;	// IMP=0x000000000001bf9a
- (void)addHeaderKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000001bf0e
- (void)dealloc;	// IMP=0x000000000001becf
- (id)initWithURL:(id)arg1 method:(id)arg2;	// IMP=0x000000000001be03
- (void)setIdentity:(struct __SecIdentity *)arg1;	// IMP=0x000000000001bdce
- (struct __SecIdentity *)copyIdentity;	// IMP=0x000000000001bda8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

