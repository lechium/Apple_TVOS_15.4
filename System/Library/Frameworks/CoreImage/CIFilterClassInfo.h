//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIFilterClassInfo : NSObject
{
    NSArray *inputKeys;	// 8 = 0x8
    NSArray *inputClasses;	// 16 = 0x10
    NSArray *outputKeys;	// 24 = 0x18
}

+ (id)classInfoForClass:(Class)arg1;	// IMP=0x000000000009f499
- (id)outputKeys;	// IMP=0x00000000000a00da
- (id)inputClasses;	// IMP=0x00000000000a00d0
- (id)inputKeys;	// IMP=0x00000000000a00c6
- (id)description;	// IMP=0x00000000000a002f
- (id)initWithClass:(Class)arg1;	// IMP=0x000000000009f748
- (id)init;	// IMP=0x000000000009f734
- (void)dealloc;	// IMP=0x000000000009f6e3

@end
