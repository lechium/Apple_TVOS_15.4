//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CBAdaptationClient : NSObject
{
    _Bool _supported;	// 8 = 0x8
}

+ (_Bool)supportsAdaptation;	// IMP=0x0000000000001466
@property _Bool supported; // @synthesize supported=_supported;
- (_Bool)animateFromWeakestAdaptationModeInArray:(int *)arg1 withLength:(int)arg2 toWeakestInArray:(int *)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6;	// IMP=0x000000000000150c
- (_Bool)getStrengths:(float *)arg1 nStrengths:(int)arg2;	// IMP=0x0000000000001504
- (_Bool)overrideStrengths:(float *)arg1 forModes:(int *)arg2 nModes:(int)arg3;	// IMP=0x00000000000014fc
- (_Bool)setAdaptationMode:(int)arg1 withPeriod:(float)arg2;	// IMP=0x00000000000014f4
- (_Bool)setWeakestAdaptationModeFromArray:(int *)arg1 withLength:(int)arg2 andPeriod:(float)arg3;	// IMP=0x00000000000014ec
- (int)getAdaptationMode;	// IMP=0x00000000000014e4
- (_Bool)getEnabled;	// IMP=0x00000000000014dc
- (_Bool)setEnabled:(_Bool)arg1;	// IMP=0x00000000000014d4
- (id)init;	// IMP=0x00000000000014a1
- (id)initWithClientObj:(id)arg1;	// IMP=0x000000000000146e

@end
