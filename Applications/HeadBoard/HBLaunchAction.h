//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScene;
@protocol HBLaunchActionDelegate, HBLaunchRequest;

@interface HBLaunchAction : NSObject
{
    UIScene *_scene;	// 8 = 0x8
    id <HBLaunchRequest> _request;	// 16 = 0x10
    id <HBLaunchActionDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000093f4c
@property(nonatomic) __weak id <HBLaunchActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <HBLaunchRequest> request; // @synthesize request=_request;
@property(readonly, nonatomic) UIScene *scene; // @synthesize scene=_scene;
- (id)initWithScene:(id)arg1 request:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000093e52

@end

