//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOPlaceCardRequester : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQ;	// 8 = 0x8
}

+ (id)sharedRequester;	// IMP=0x0000000000368f54
- (void).cxx_destruct;	// IMP=0x000000000036b371
- (void)clearCache;	// IMP=0x000000000036b2f4
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x000000000036b249
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x000000000036b130
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x000000000036b085
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000036af6c
- (void)cancelRequest:(id)arg1;	// IMP=0x000000000036aea8
- (id)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(CDUnknownBlockType)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000036a0bd
- (void)trackPlaceData:(id)arg1;	// IMP=0x0000000000369c7a
- (id)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 networkActivity:(CDUnknownBlockType)arg6 requesterHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000036979b
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003695fa
- (id)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(CDUnknownBlockType)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x0000000000369099
- (id)init;	// IMP=0x0000000000369045
- (id)_createServerConnection;	// IMP=0x0000000000368fa9

@end

