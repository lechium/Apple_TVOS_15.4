//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ADService;

@interface ADServiceRecord : NSObject
{
    id <ADService> _service;	// 8 = 0x8
    long long _precedence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a6391
- (_Bool)hasEqualOrHigherPrecedenceThanServiceRecord:(id)arg1;	// IMP=0x00100000000a6324
- (long long)precedence;	// IMP=0x00100000000a631a
- (id)service;	// IMP=0x00100000000a630c
- (id)description;	// IMP=0x00100000000a628c
- (id)initWithService:(id)arg1 precedence:(long long)arg2;	// IMP=0x00100000000a6216

@end

