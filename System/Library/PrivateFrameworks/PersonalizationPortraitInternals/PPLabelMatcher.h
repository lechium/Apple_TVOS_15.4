//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PPLabelMatcher : NSObject
{
    NSDictionary *_map;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000015e581
- (void).cxx_destruct;	// IMP=0x000000000015e571
- (id)_generateMap;	// IMP=0x000000000015db91
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;	// IMP=0x000000000015d9f7
- (id)init;	// IMP=0x000000000015d995

@end

