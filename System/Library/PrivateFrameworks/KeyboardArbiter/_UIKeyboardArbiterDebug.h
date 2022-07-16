//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterDebug : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _importantCount;	// 16 = 0x10
    NSMutableArray *_entries;	// 24 = 0x18
    _Bool _disable;	// 32 = 0x20
    _Bool _pause;	// 33 = 0x21
}

+ (id)sharedInstance;	// IMP=0x0000000000012944
- (void).cxx_destruct;	// IMP=0x0000000000013379
@property(nonatomic) _Bool pause; // @synthesize pause=_pause;
- (void)getDebugInfoDictionariesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001308e
- (void)addAsynchronousData:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012ff2
- (void)errorWithFormat:(const char *)arg1;	// IMP=0x0000000000012ea3
- (void)debugWithFormat:(const char *)arg1;	// IMP=0x0000000000012d54
- (void)infoWithFormat:(const char *)arg1;	// IMP=0x0000000000012c05
- (void)addEntry:(id)arg1;	// IMP=0x0000000000012a5f
- (id)init;	// IMP=0x0000000000012999

@end

