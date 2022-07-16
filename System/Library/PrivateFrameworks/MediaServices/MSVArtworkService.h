//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject
{
    NSOperationQueue *_serviceThrottlingOperationQueue;	// 8 = 0x8
    NSXPCConnection *_serverConnection;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x00000000000237a1
- (void).cxx_destruct;	// IMP=0x000000000002358d
@property(retain, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue; // @synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002343b
- (void)dealloc;	// IMP=0x00000000000233d0
- (id)init;	// IMP=0x0000000000023259

@end

