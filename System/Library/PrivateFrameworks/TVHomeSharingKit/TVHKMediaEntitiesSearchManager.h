//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, TVHKMediaEntitiesSearchCache, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesSearchManager : NSObject
{
    TVHKMediaLibraryRequestSession *_requestSession;	// 8 = 0x8
    TVHKMediaLibrarySessionState *_sessionState;	// 16 = 0x10
    NSOperationQueue *_serialOperationQueue;	// 24 = 0x18
    TVHKMediaEntitiesSearchCache *_cache;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000000004b0dd
- (void).cxx_destruct;	// IMP=0x000000000004b8ce
@property(retain, nonatomic) TVHKMediaEntitiesSearchCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(copy, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
- (void)sessionStateDidChange:(id)arg1;	// IMP=0x000000000004b852
- (id)enqueueSearchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b3f0
- (void)warmdown;	// IMP=0x000000000004b2d5
- (void)warmup;	// IMP=0x000000000004b2cf
- (void)dealloc;	// IMP=0x000000000004b264
- (id)initWithMediaServerIdentifier:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000004b17b
- (id)init;	// IMP=0x000000000004b10c

@end

