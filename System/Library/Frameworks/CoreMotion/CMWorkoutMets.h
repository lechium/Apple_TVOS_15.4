//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject
{
    CMWorkoutMetsInternal *_internal;	// 8 = 0x8
}

+ (_Bool)isAvailable;	// IMP=0x000000000017eb55
@property(readonly, nonatomic) CMWorkoutMetsInternal *_internal; // @synthesize _internal;
- (void)queryWorkoutMetsWithSessionId:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000017eb87
- (void)dealloc;	// IMP=0x000000000017eac2
- (id)init;	// IMP=0x000000000017ea5a

@end

