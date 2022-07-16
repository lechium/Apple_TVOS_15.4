//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSMutableArray, NSString;
@protocol NSObject><NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVChapterMetadataItemInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    struct OpaqueFigAsset *figAsset;	// 16 = 0x10
    long long chapterGroupIndex;	// 24 = 0x18
    long long chapterIndex;	// 32 = 0x20
    NSString *chapterType;	// 40 = 0x28
    NSString *extendedLanguageTag;	// 48 = 0x30
    NSString *languageCode;	// 56 = 0x38
    NSString *chapterDataType;	// 64 = 0x40
    id <NSObject><NSCopying> value;	// 72 = 0x48
    CDStruct_1b6d18a9 time;	// 80 = 0x50
    CDStruct_1b6d18a9 duration;	// 104 = 0x68
    long long valueStatus;	// 128 = 0x80
    int valueErrorCode;	// 136 = 0x88
    NSMutableArray *completions;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *readWriteQueue;	// 152 = 0x98
}

@end

