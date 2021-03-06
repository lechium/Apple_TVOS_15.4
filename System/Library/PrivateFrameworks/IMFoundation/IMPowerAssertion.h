//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMPowerAssertion : NSObject
{
    unsigned int _assertion;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004813b
- (id)description;	// IMP=0x0000000000048112
- (void)dealloc;	// IMP=0x0000000000048044
- (id)initWithIdentifier:(id)arg1 timeoutSec:(double)arg2 properties:(id)arg3;	// IMP=0x0000000000047c70
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000047c5b
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x0000000000047b9e

@end

