//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface _HBUITopShelfParadeButtonProgressLayer : CALayer
{
}

+ (id)defaultActionForKey:(id)arg1;	// IMP=0x000000000000a6e9
+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x000000000000a656
- (struct CGRect)_contentRect;	// IMP=0x000000000000a99e
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000000a7a2

// Remaining properties
@property(nonatomic) struct CGColor *color; // @dynamic color;
@property(nonatomic) float progress; // @dynamic progress;

@end

