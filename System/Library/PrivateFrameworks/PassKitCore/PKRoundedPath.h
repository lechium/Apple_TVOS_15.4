//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKRoundedPath : NSObject
{
    struct CGPath *_CGPath;	// 8 = 0x8
}

+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;	// IMP=0x000000000027905e
@property(readonly) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(_Bool)arg6 fullRadius:(_Bool)arg7;	// IMP=0x000000000027999f
- (id)initWithRect:(struct CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(_Bool)arg4;	// IMP=0x000000000027915c
- (id)init;	// IMP=0x000000000027914e
- (void)dealloc;	// IMP=0x0000000000279024

@end

