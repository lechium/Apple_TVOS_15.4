//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSConditionLock.h>

#import <MIME/MFLockObject-Protocol.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject>
{
    NSString *_name;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000000002cbd2
- (void)dealloc;	// IMP=0x000000000002ce8f
- (id)description;	// IMP=0x000000000002cdff
- (void)unlockWithCondition:(long long)arg1;	// IMP=0x000000000002cdbf
- (void)unlock;	// IMP=0x000000000002cd89
- (_Bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;	// IMP=0x000000000002cd10
- (_Bool)lockBeforeDate:(id)arg1;	// IMP=0x000000000002cca1
- (_Bool)isLockedByMe;	// IMP=0x000000000002cc97
- (id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3;	// IMP=0x000000000002cc24
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;	// IMP=0x000000000002cc0d
- (id)init;	// IMP=0x000000000002cbea

@end
