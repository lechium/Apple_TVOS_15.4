//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableIntegerMap, BSSettings;
@protocol OS_dispatch_queue;

@interface PBHintManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    BSSettings *_hintStatus;	// 16 = 0x10
    BSMutableIntegerMap *_hintRecorders;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000856f0
- (void).cxx_destruct;	// IMP=0x00200000000861b0
- (void)registerHintRecorder:(id)arg1 forHint:(unsigned long long)arg2;	// IMP=0x0010000000085f70
@property(readonly) BSSettings *hintStatus;
- (void)noteHintShown:(unsigned long long)arg1;	// IMP=0x00100000000858e0
- (id)init;	// IMP=0x00100000000857f0

@end

