//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeadBoardUI/HBUILaunchAnimationViewSnapshot-Protocol.h>

@class NSString, UIView;

@interface HBUILaunchAnimationViewBlockSnapshotter : NSObject <HBUILaunchAnimationViewSnapshot>
{
    UIView *_snapshotView;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    struct CGRect _rect;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000b933
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (_Bool)snapshot;	// IMP=0x000000000000b814
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b77c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

