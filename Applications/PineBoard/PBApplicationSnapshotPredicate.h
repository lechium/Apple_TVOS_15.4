//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SplashBoard/XBApplicationSnapshotPredicate.h>

@class NSSet;

@interface PBApplicationSnapshotPredicate : XBApplicationSnapshotPredicate
{
    NSSet *_excludeVariants;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001980b0
@property(copy, nonatomic) NSSet *excludeVariants; // @synthesize excludeVariants=_excludeVariants;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000197e70
- (_Bool)evaluateWithObject:(id)arg1;	// IMP=0x0010000000197d60

@end
