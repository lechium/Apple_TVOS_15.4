//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HMDAccessorySettingMergeHandler : NSObject
{
}

+ (id)_mergeValidValueConstraintsFirst:(id)arg1 second:(id)arg2 shouldAddMissing:(_Bool)arg3;	// IMP=0x0000000000939e05
+ (_Bool)_extractMinMaxStep:(id)arg1 minConstraint:(id *)arg2 maxConstraint:(id *)arg3 stepConstraint:(id *)arg4 first:(id)arg5;	// IMP=0x00000000009399bd
+ (id)_mergeRangeConstraintsFirst:(id)arg1 second:(id)arg2 shouldAddMissing:(_Bool)arg3;	// IMP=0x0000000000938d7f
+ (_Bool)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4;	// IMP=0x0000000000938bde
+ (id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4;	// IMP=0x0000000000937f4c
+ (_Bool)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3 shouldAddMissing:(_Bool)arg4;	// IMP=0x0000000000936462

@end

