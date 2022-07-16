//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, NSURL, NSURLRequest, SSAuthenticationContext, SSURLBag, SSURLRequestProperties, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSVURLBagInterpreter, SSVURLDataConsumer;
@protocol SSURLConnectionRequestDelegate;

@interface SSURLConnectionRequest <SSXPCCoding>
{
    SSURLRequestProperties *_requestProperties;	// 56 = 0x38
    SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
    SSVURLDataConsumer *_dataConsumer;	// 72 = 0x48
    NSURL *_destinationFileURL;	// 80 = 0x50
    _Bool _runsInProcess;	// 88 = 0x58
    SSVFairPlaySAPSession *_sapSession;	// 96 = 0x60
    SSVSAPSignaturePolicy *_sapSignaturePolicy;	// 104 = 0x68
    _Bool _sendsResponseForHTTPFailures;	// 112 = 0x70
    _Bool _shouldMescalSign;	// 113 = 0x71
    SSURLBag *_urlBag;	// 120 = 0x78
    SSVURLBagInterpreter *_urlBagInterpreter;	// 128 = 0x80
}

- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000042cfa
- (id)copyXPCEncoding;	// IMP=0x0000000000042c27
- (_Bool)_canRunInProcess;	// IMP=0x0000000000042be4
@property _Bool sendsResponseForHTTPFailures;
@property(copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property(retain) SSVFairPlaySAPSession *SAPSession;
@property _Bool runsInProcess;
@property(retain) SSVURLDataConsumer *dataConsumer;
@property(copy) SSAuthenticationContext *authenticationContext;
- (void)configureWithURLBagDictionary:(id)arg1;	// IMP=0x00000000000423f7
- (void)configureWithURLBag:(id)arg1;	// IMP=0x00000000000423c2
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004225f
- (_Bool)start;	// IMP=0x00000000000420f6
@property(readonly) NSURLRequest *URLRequest;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041cd0
@property _Bool shouldMescalSign;
@property(copy) NSURL *destinationFileURL;
@property(readonly) SSURLRequestProperties *requestProperties;
- (void)dealloc;	// IMP=0x0000000000041918
- (id)initWithURLRequest:(id)arg1;	// IMP=0x000000000004188c
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x0000000000041802
- (id)init;	// IMP=0x00000000000417ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSURLConnectionRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

