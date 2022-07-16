//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VSRecognitionAction;
@protocol VSRecognitionResultHandler;

__attribute__((visibility("hidden")))
@interface VSRecognitionResultHandlingRequest : NSObject
{
    id <VSRecognitionResultHandler> _handler;	// 8 = 0x8
    NSArray *_results;	// 16 = 0x10
    VSRecognitionAction *_action;	// 24 = 0x18
}

- (id)nextAction;	// IMP=0x000000000002ba42
- (void)setNextAction:(id)arg1;	// IMP=0x000000000002ba15
- (id)handler;	// IMP=0x000000000002b9fe
- (id)results;	// IMP=0x000000000002b9e7
- (void)dealloc;	// IMP=0x000000000002b996
- (id)initWithHandler:(id)arg1 results:(id)arg2;	// IMP=0x000000000002b949

@end
