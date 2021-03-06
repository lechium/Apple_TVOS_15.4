//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, Protocol;

@interface NSProtocolChecker
{
}

+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;	// IMP=0x0000000000118a01
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001189c3
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;	// IMP=0x0000000000118a35
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000011892a
- (const char *)_localClassNameForClass;	// IMP=0x00000000001188ff
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000001188cc
- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg1;	// IMP=0x00000000001187be
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000118715
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000001186ee
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000011865f
- (void)doesNotRecognizeSelector:(SEL)arg1;	// IMP=0x0000000000118600
@property(readonly, retain) NSObject *target;
@property(readonly) Protocol *protocol;

@end

