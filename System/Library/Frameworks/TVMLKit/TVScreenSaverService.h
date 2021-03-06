//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVPhotoServiceInterface-Protocol.h>

@class NSMutableArray, NSString, TVScreenSaverJSObject;
@protocol OS_dispatch_queue, TVPhotoServerInterface;

@interface TVScreenSaverService : NSObject <TVPhotoServiceInterface>
{
    TVScreenSaverJSObject *_screenSaverJSObject;	// 8 = 0x8
    id <TVPhotoServerInterface> _remotePhotoServerInterface;	// 16 = 0x10
    NSMutableArray *_requests;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    CDUnknownBlockType _requestStartBlock;	// 40 = 0x28
    CDUnknownBlockType _requestCompletionBlock;	// 48 = 0x30
    CDUnknownBlockType _defaultRequestHandler;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0000000000120eee
- (void).cxx_destruct;	// IMP=0x0000000000122167
@property(copy) CDUnknownBlockType defaultRequestHandler; // @synthesize defaultRequestHandler=_defaultRequestHandler;
@property(copy) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(copy) CDUnknownBlockType requestStartBlock; // @synthesize requestStartBlock=_requestStartBlock;
- (id)_photoAssetsFromUrls:(id)arg1 commonHeaders:(id)arg2;	// IMP=0x0000000000121c5c
- (id)_photoAssetsFromImageRequests:(id)arg1;	// IMP=0x0000000000121ab2
- (void)_respondToRequests;	// IMP=0x00000000001214c4
- (void)_addRequestWithOptions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001213ae
- (void)registerRemotePhotoServer:(id)arg1;	// IMP=0x000000000012139d
- (void)photoAssetsWithOptions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001211e8
@property(retain, nonatomic) TVScreenSaverJSObject *screenSaverJSObject;
- (id)init;	// IMP=0x0000000000120f43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

