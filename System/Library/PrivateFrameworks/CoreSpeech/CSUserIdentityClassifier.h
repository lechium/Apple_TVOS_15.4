//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSUserIdentityClassifier : NSObject
{
}

+ (id)stringFromClassificationCategory:(unsigned long long)arg1;	// IMP=0x0000000000009f83
+ (unsigned long long)classifyUserIdentityFor:(id)arg1 withScores:(id)arg2 withAsset:(id)arg3;	// IMP=0x0000000000009cf0
+ (id)pickTopScoringProfileIdFromScores:(id)arg1;	// IMP=0x0000000000009ad0

@end

