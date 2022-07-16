//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@interface UIHandleStatusBarTapAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000645751
- (long long)UIActionType;	// IMP=0x0000000000645746
@property(readonly, nonatomic) unsigned long long statusBarStyleOverride;
@property(readonly, nonatomic) long long statusBarStyle;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000645647
- (id)initWithStatusBarStyle:(long long)arg1 andStatusBarStyleOverride:(unsigned long long)arg2;	// IMP=0x0000000000645553
- (id)initWithStatusBarStyleOverride:(unsigned long long)arg1;	// IMP=0x00000000006454a1
- (id)initWithStatusBarStyle:(long long)arg1;	// IMP=0x00000000006453ef

@end
