//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INTimer, NSNumber;

@protocol INResumeTimerIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *resumeMultiple;
@property(copy, nonatomic) INTimer *targetTimer;
- (id)init;
@end

