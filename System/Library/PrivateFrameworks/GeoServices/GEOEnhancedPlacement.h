//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface GEOEnhancedPlacement : NSObject
{
    NSArray *_buildingIds;	// 8 = 0x8
    NSNumber *_elevationInMeters;	// 16 = 0x10
    NSNumber *_buildingHeightInMeters;	// 24 = 0x18
    NSNumber *_buildingFaceAzimuth;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000caf2e7
@property(readonly, nonatomic) NSNumber *buildingFaceAzimuth; // @synthesize buildingFaceAzimuth=_buildingFaceAzimuth;
@property(readonly, nonatomic) NSNumber *buildingHeightInMeters; // @synthesize buildingHeightInMeters=_buildingHeightInMeters;
@property(readonly, nonatomic) NSNumber *elevationInMeters; // @synthesize elevationInMeters=_elevationInMeters;
@property(readonly, nonatomic) NSArray *buildingIds; // @synthesize buildingIds=_buildingIds;
- (id)initWithGEOPDEnhancedPlacement:(id)arg1;	// IMP=0x0000000000caf02d
- (id)initWithBuildingIds:(id)arg1 elevationInMeters:(id)arg2 buildingHeightInMeters:(id)arg3 buildingFaceAzimuth:(id)arg4;	// IMP=0x0000000000caef48

@end
