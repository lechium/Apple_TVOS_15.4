//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _TtC18PreviewsFoundation19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject
{
    _TtC18PreviewsFoundation19ObjcSingleFireEvent *_event;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002fdc
@property(readonly, nonatomic) _Bool hasFired;
- (void)addObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002fb0
- (void)cancel;	// IMP=0x0000000000002f9a
- (void)fire;	// IMP=0x0000000000002f84
- (id)init;	// IMP=0x0000000000002f2e

@end

