//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADWatchDog : NSObject
{
    NSString *_reason;	// 8 = 0x8
    unsigned long long _delayTime;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001bbfd
@property(nonatomic) unsigned long long delayTime; // @synthesize delayTime=_delayTime;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)updateReason:(id)arg1;	// IMP=0x000000000001bb52
- (id)initWithReason:(id)arg1 andDelay:(unsigned long long)arg2;	// IMP=0x000000000001badc

@end

