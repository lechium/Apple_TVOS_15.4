//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PLAssetChangeNotification
{
    NSSet *_updatedAssets;	// 8 = 0x8
}

+ (id)notificationWithChangedAssets:(id)arg1;	// IMP=0x00000000002b6450
- (void).cxx_destruct;	// IMP=0x00000000002b643d
@property(copy, nonatomic) NSSet *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
- (id)description;	// IMP=0x00000000002b634d
- (id)userInfo;	// IMP=0x00000000002b6345
- (id)object;	// IMP=0x00000000002b633d
- (id)name;	// IMP=0x00000000002b631e
- (id)_initWithChangedObjects:(id)arg1;	// IMP=0x00000000002b62ba
- (id)_init;	// IMP=0x00000000002b62b1

@end

