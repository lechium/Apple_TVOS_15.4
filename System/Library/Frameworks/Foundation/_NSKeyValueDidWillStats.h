//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSThread;

__attribute__((visibility("hidden")))
@interface _NSKeyValueDidWillStats : NSObject
{
    long long _count;	// 8 = 0x8
    _Bool _hasDecreased;	// 16 = 0x10
    struct {
        _Bool hasBecomeReentrant;
        _Bool hasExcessiveDids;
        _Bool hasWillDidThreadMismatch;
    } _detectedIssues;	// 17 = 0x11
    NSThread *_originalThread;	// 24 = 0x18
}

- (void)_recordThread;	// IMP=0x0000000000170829
- (void)dealloc;	// IMP=0x00000000001707cb

@end

