//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKPublisherIconProvider-Protocol.h>
#import <MapKit/NSCacheDelegate-Protocol.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider>
{
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;	// 8 = 0x8
    NSCache *_publisherIconCache;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000001d9ec2
- (void).cxx_destruct;	// IMP=0x00000000001da80e
@property(retain, nonatomic) NSCache *publisherIconCache; // @synthesize publisherIconCache=_publisherIconCache;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000000001da748
- (id)_iconForPublisherNamed:(id)arg1 usingId:(unsigned int)arg2 usingContentScale:(double)arg3 usingSizeGroup:(unsigned long long)arg4 isNightMode:(_Bool)arg5;	// IMP=0x00000000001da3cc
- (id)iconForPublisherNamed:(id)arg1 usingId:(unsigned int)arg2 usingContentScale:(double)arg3 usingSizeGroup:(unsigned long long)arg4 isNightMode:(_Bool)arg5;	// IMP=0x00000000001da168
- (void)iconForPublisherNamed:(id)arg1 usingId:(unsigned int)arg2 contentScale:(double)arg3 onCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d9fef
- (id)init;	// IMP=0x00000000001d9f17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
