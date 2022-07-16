//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXPIFingerUtilities : NSObject
{
}

+ (unsigned long long)fingerShapeForCorner:(unsigned long long)arg1;	// IMP=0x00000000000038eb
+ (id)_points:(id)arg1 adjustedForBounds:(struct CGRect)arg2;	// IMP=0x0000000000003472
+ (id)pointStringsForFingerModels:(id)arg1;	// IMP=0x000000000000329f
+ (id)fingerModelsForPointStrings:(id)arg1;	// IMP=0x00000000000030c5
+ (void)updateFirstLocation:(struct CGPoint *)arg1 secondLocation:(struct CGPoint *)arg2 forPinchWithRadiusDelta:(double)arg3 angleDelta:(double)arg4;	// IMP=0x0000000000002fd2
+ (id)defaultPinchLocationsAroundPoint:(struct CGPoint)arg1 withinBounds:(struct CGRect)arg2;	// IMP=0x0000000000002e50
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint)arg2 withinBounds:(struct CGRect)arg3;	// IMP=0x000000000000286a
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint)arg2;	// IMP=0x0000000000002838

@end

