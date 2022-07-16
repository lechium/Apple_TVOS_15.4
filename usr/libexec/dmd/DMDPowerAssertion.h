//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x0040000000060c3c
- (void).cxx_destruct;	// IMP=0x00200000000612df
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x00100000000611d1
- (void)_retain;	// IMP=0x00100000000610f0
- (void)unpark;	// IMP=0x0010000000060ffd
- (void)park;	// IMP=0x0010000000060f07
- (void)stayAliveThroughHereAtLeast;	// IMP=0x0010000000060f01
- (void)dealloc;	// IMP=0x0010000000060e5e
- (id)initForOperation:(id)arg1;	// IMP=0x0010000000060d66

@end
