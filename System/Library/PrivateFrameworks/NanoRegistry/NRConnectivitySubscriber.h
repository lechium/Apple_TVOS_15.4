//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NRConnectivitySubscriber : NSObject
{
    _Bool _connected;	// 8 = 0x8
    unsigned long long _dropoutCounter;	// 16 = 0x10
}

+ (_Bool)getDropoutCounter:(unsigned long long *)arg1;	// IMP=0x000000000005520f
- (id)init;	// IMP=0x0000000000054fc6

@end

