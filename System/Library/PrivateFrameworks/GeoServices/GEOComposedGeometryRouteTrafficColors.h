//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOComposedGeometryRouteTrafficColors : NSObject
{
    unsigned int *_trafficColors;	// 8 = 0x8
    unsigned int *_trafficColorOffsets;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets; // @synthesize trafficColorOffsets=_trafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColors; // @synthesize trafficColors=_trafficColors;
- (void)dealloc;	// IMP=0x00000000007c39f3
- (id)initWithColors:(unsigned int *)arg1 offsets:(unsigned int *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000007c393a

@end

