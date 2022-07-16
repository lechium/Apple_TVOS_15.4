//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@interface IMSingletonProxy : NSProxy
{
    id _singleton;	// 8 = 0x8
    id _singletonOverride;	// 16 = 0x10
    Class _overrideClass;	// 24 = 0x18
}

+ (void)load;	// IMP=0x0000000000061e2d
- (void).cxx_destruct;	// IMP=0x000000000006244e
- (id)description;	// IMP=0x0000000000062345
- (void)setSingletonOverride:(id)arg1;	// IMP=0x0000000000062187
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000061fec
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000061ef7
- (id)initWithSingleton:(id)arg1 singletonOverride:(id)arg2;	// IMP=0x0000000000061e7d
- (id)singletonOverrideRef;	// IMP=0x0000000000061e64
- (id)singletonRef;	// IMP=0x0000000000061e4f
- (_Bool)__isSingletonProxy__im;	// IMP=0x0000000000061878

@end

