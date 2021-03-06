//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AVVCDuckOverride : NSObject
{
    _Bool _isBlur;	// 8 = 0x8
    NSNumber *_duckOthers;	// 16 = 0x10
    NSNumber *_duckToLevel;	// 24 = 0x18
    NSNumber *_mixWithOthers;	// 32 = 0x20
}

@property(retain, nonatomic) NSNumber *mixWithOthers; // @synthesize mixWithOthers=_mixWithOthers;
@property(nonatomic) _Bool isBlur; // @synthesize isBlur=_isBlur;
@property(retain, nonatomic) NSNumber *duckToLevel; // @synthesize duckToLevel=_duckToLevel;
@property(retain, nonatomic) NSNumber *duckOthers; // @synthesize duckOthers=_duckOthers;
- (id)description;	// IMP=0x0000000000022e18
- (void)dealloc;	// IMP=0x0000000000022db4
- (id)initWithDuckOthers:(id)arg1 duckToLevel:(id)arg2 mixWithOthers:(id)arg3;	// IMP=0x0000000000022d5d

@end

