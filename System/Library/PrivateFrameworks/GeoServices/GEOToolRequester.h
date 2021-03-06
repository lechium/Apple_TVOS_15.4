//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOToolProxy-Protocol.h>

@interface GEOToolRequester : NSObject <GEOToolProxy>
{
}

+ (id)sharedRequester;	// IMP=0x0000000000a34dbd
- (_Bool)notifyNetworkDefaultsChanged;	// IMP=0x0000000000a3583e
- (void)invalidateTileCache;	// IMP=0x0000000000a35762
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;	// IMP=0x0000000000a35531
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;	// IMP=0x0000000000a3534d
- (id)getDefault:(id)arg1 source:(long long *)arg2;	// IMP=0x0000000000a350f7
- (void)lockDBs;	// IMP=0x0000000000a3501b
- (void)unlockDBs;	// IMP=0x0000000000a34f3f
- (id)ping;	// IMP=0x0000000000a34e12

@end

