//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANODv4
{
}

+ (id)filterThresholds;	// IMP=0x00000000000f3ea1
+ (Class)shotflowNetworkClass;	// IMP=0x00000000000f3e90
+ (id)supportedLabelKeys;	// IMP=0x00000000000f3e2d
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000f4214
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x00000000000f413f
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000f3fe7
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000f3f92
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000f3f3d

@end

