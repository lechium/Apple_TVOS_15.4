//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _PointQueue : NSObject
{
    NSMutableArray *_nonSentinelPoints;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a4c958
@property(readonly, nonatomic) NSMutableArray *nonSentinelPoints; // @synthesize nonSentinelPoints=_nonSentinelPoints;
- (unsigned long long)effectiveStartIndexBasedOnLength;	// IMP=0x0000000000a4c796
- (id)init;	// IMP=0x0000000000a4c740

@end

