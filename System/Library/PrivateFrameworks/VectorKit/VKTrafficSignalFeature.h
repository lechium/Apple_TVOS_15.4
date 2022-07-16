//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VKTrafficSignalFeature
{
    long long _type;	// 160 = 0xa0
}

+ (id)stringForTrafficSignalType:(long long)arg1;	// IMP=0x00000000007fc43f
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)populateDebugNode:(void *)arg1;	// IMP=0x00000000007fc473
- (id)initWithTrafficSignal:(id)arg1 onRoute:(id)arg2;	// IMP=0x00000000007fc3b8
- (id)initWithTrafficSignalType:(long long)arg1 uniqueIdentifier:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 onRoute:(id)arg4;	// IMP=0x00000000007fc36f

@end
