//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class StorebagFragmentCondition;

@interface Condition : NSObject
{
    StorebagFragmentCondition *_config;	// 8 = 0x8
}

+ (id)new;	// IMP=0x004000000001de3f
@property(readonly, nonatomic) StorebagFragmentCondition *config; // @synthesize config=_config;
- (id)description;	// IMP=0x001000000001e19f
- (id)stringFromDataSource:(id)arg1 withKey:(id)arg2;	// IMP=0x001000000001e148
- (_Bool)runConditionWithData:(id)arg1;	// IMP=0x001000000001e13c
- (void)dealloc;	// IMP=0x001000000001e101
- (id)initWithConfig:(id)arg1;	// IMP=0x001000000001e085
- (id)init;	// IMP=0x001000000001de33

@end

