//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRIFactorLevelCaching-Protocol.h>

@class NSDictionary;

@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching>
{
    NSDictionary *_factorLevels;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018e2a
- (void)enumerateFactorLevelsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018d26
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000018d10
- (id)initWithFactorLevels:(id)arg1;	// IMP=0x0000000000018afd
- (id)init;	// IMP=0x0000000000018af7

@end

