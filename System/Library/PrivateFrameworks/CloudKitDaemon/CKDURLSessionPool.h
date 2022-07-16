//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKDURLSessionPool : NSObject
{
    int _backgroundSessionConnectionPoolLimit;	// 8 = 0x8
}

+ (id)backgroundSessionConnectionPoolName;	// IMP=0x00000000002a46ad
+ (id)sharedURLSessionPool;	// IMP=0x00000000002a4658
@property(readonly, nonatomic) int backgroundSessionConnectionPoolLimit;
- (void)_updateBackgroundSessionConnectionPoolLimit;	// IMP=0x00000000002a4706
- (id)init;	// IMP=0x00000000002a46ba

@end

