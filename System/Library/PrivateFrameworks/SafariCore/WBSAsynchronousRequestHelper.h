//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariCore/NSURLConnectionDelegate-Protocol.h>
#import <SafariCore/WBSAsynchronousRequest-Protocol.h>

@class NSMutableData, NSOperationQueue, NSString, NSURLConnection, NSURLResponse;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest>
{
    NSOperationQueue *_queue;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSURLConnection *_connection;	// 24 = 0x18
    NSURLResponse *_response;	// 32 = 0x20
    NSMutableData *_data;	// 40 = 0x28
    id _lifetimeExtender;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013bc6
- (void)cancel;	// IMP=0x0000000000013b3e
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x0000000000013a21
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000000000139d5
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000000001398a
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000013861
- (void)sendRequest;	// IMP=0x00000000000137e7
- (void)dealloc;	// IMP=0x00000000000137a5
- (id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000136a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

