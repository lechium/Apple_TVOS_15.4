//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEOPowerAssertion : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    double _timeout;	// 16 = 0x10
    unsigned int _assertion;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002f1fa3
- (id)description;	// IMP=0x00000000002f1ef0
- (void)dealloc;	// IMP=0x00000000002f1d98
- (id)initWithType:(long long)arg1 identifier:(id)arg2 timeout:(double)arg3;	// IMP=0x00000000002f1b42

@end

