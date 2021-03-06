//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVCornerUtilities : NSObject
{
}

+ (struct CGPath *)createPathForRadii:(struct TVCornerRadii)arg1 inRect:(struct CGRect)arg2 isContinuous:(_Bool)arg3;	// IMP=0x00000000000203b7
+ (struct CGPath *)createPathForRadii:(struct TVCornerRadii)arg1 inRect:(struct CGRect)arg2;	// IMP=0x000000000002039b
+ (double)radiusFromCornerRadii:(struct TVCornerRadii)arg1;	// IMP=0x000000000002032a
+ (struct TVCornerRadii)flipCGOriginRadii:(struct TVCornerRadii)arg1;	// IMP=0x0000000000020312
+ (struct TVCornerRadii)radiiFromRadius:(double)arg1;	// IMP=0x00000000000202f6
+ (_Bool)radiiIsZero:(struct TVCornerRadii)arg1;	// IMP=0x00000000000202c3

@end

