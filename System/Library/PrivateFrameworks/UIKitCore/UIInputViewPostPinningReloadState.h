//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject
{
    UIResponder *_responderPreventedFromSettingInputViews;	// 8 = 0x8
}

+ (id)stateWithResponder:(id)arg1;	// IMP=0x000000000005b1d2
@property(retain, nonatomic) UIResponder *responderToReload; // @synthesize responderToReload=_responderPreventedFromSettingInputViews;
- (void)dealloc;	// IMP=0x000000000005b192

@end

