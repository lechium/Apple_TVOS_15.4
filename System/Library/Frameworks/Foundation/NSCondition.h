//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSLocking-Protocol.h>

@class NSString;

@interface NSCondition : NSObject <NSLocking>
{
    void *_priv;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4560
@property(copy) NSString *name;
- (id)description;	// IMP=0x00000000000c47bf
- (void)broadcast;	// IMP=0x00000000000c47ac
- (void)signal;	// IMP=0x00000000000c4799
- (_Bool)waitUntilDate:(id)arg1;	// IMP=0x00000000000c46d8
- (void)wait;	// IMP=0x00000000000c46c2
- (void)unlock;	// IMP=0x00000000000c46b0
- (void)lock;	// IMP=0x00000000000c469e
- (void)dealloc;	// IMP=0x00000000000c4623
- (id)init;	// IMP=0x00000000000c456f

@end

