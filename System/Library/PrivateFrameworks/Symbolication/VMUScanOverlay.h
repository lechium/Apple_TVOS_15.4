//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface VMUScanOverlay : NSObject
{
    NSMutableArray *_rules;	// 8 = 0x8
}

+ (id)defaultOverlayWithScanner:(id)arg1;	// IMP=0x000000000002ab6b
+ (id)defaultOverlay;	// IMP=0x000000000002ab57
+ (_Bool)foundationHasNSSliceMemoryOptimization;	// IMP=0x000000000002aad9
- (void).cxx_destruct;	// IMP=0x000000000002f6cd
@property(readonly, nonatomic) NSArray *refinementRules; // @synthesize refinementRules=_rules;
- (void)addMetadataRefinementRule:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f68d
- (id)initWithScanner:(id)arg1;	// IMP=0x000000000002ac61

@end
