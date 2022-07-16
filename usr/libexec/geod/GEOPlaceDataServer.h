//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMapTable, geo_isolater;

@interface GEOPlaceDataServer : GEOServer
{
    geo_isolater *_peerToRequestUUIDIsolater;	// 16 = 0x10
    NSMapTable *_peerToRequestUUID;	// 24 = 0x18
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000016c55
+ (id)identifier;	// IMP=0x0010000000016c48
- (void).cxx_destruct;	// IMP=0x00100000000033cd
- (void)clearCacheWithRequest:(id)arg1;	// IMP=0x0010000000003389
- (void)shrinkBySizeSyncWithRequest:(id)arg1;	// IMP=0x00100000000032c1
- (void)shrinkBySizeWithRequest:(id)arg1;	// IMP=0x0010000000003197
- (void)calculateFreeableSpaceSyncWithRequest:(id)arg1;	// IMP=0x00100000000030ee
- (void)calculateFreeableSpaceWithRequest:(id)arg1;	// IMP=0x0010000000002fda
- (void)cancelPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x0010000000002eca
- (void)performPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x0010000000002901
- (void)preservePlaceDataWithRequest:(id)arg1;	// IMP=0x0010000000002715
- (void)fetchAllCacheEntriesWithRequest:(id)arg1;	// IMP=0x001000000000253a
- (void)requestPhoneNumbersWithRequest:(id)arg1;	// IMP=0x0010000000001e64
- (void)requestMUIDsWithRequest:(id)arg1;	// IMP=0x0010000000001a11
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000000168d
- (void)_removeRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x001000000000156b
- (void)_addRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000001400
- (id)init;	// IMP=0x001000000000133c
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000016c60

@end

