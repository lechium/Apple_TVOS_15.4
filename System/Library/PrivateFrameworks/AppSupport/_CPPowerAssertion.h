//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _CPPowerAssertion : NSObject
{
    double _timeout;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSArray *_stack;	// 24 = 0x18
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)timedout;	// IMP=0x0000000000011ffe
- (void)dealloc;	// IMP=0x0000000000011f65
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x0000000000011e16

@end

