//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject
{
    NSMutableSet *_passViews;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000241974
- (void)enqueueReusablePassView:(id)arg1;	// IMP=0x000000000024195e
- (id)dequeueReusablePassView;	// IMP=0x0000000000241913
- (id)initWithCount:(unsigned long long)arg1;	// IMP=0x000000000024183a

@end

