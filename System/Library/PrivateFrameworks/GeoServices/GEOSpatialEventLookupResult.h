//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject
{
    NSMapTable *_parametersToEventsMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a13650
- (id)poiEventsForSpatialLookupParameters:(id)arg1;	// IMP=0x0000000000a1363a
- (id)initWithMapTable:(id)arg1;	// IMP=0x0000000000a135cf
- (id)init;	// IMP=0x0000000000a135a5

@end

