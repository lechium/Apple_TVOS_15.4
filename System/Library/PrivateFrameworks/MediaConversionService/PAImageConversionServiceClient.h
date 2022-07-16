//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject
{
    NSXPCConnection *_serviceConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006243
@property(retain) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void)requestStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006141
- (void)sendRequestWithOptions:(id)arg1 sourceURLCollection:(id)arg2 destinationURLCollection:(id)arg3 jobIdentifier:(id)arg4 attemptCount:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000005c8d
- (void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005386
- (void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005267
- (void)setupServiceConnection;	// IMP=0x000000000000517b
- (void)dealloc;	// IMP=0x0000000000005110
- (id)init;	// IMP=0x00000000000050c4

@end

