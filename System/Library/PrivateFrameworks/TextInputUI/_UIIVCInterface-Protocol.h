//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputUI/NSObject-Protocol.h>

@class _UIInputViewControllerState;
@protocol _UIIVCResponseDelegate;

@protocol _UIIVCInterface <NSObject>
@property(retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate;
- (void)_handleInputViewControllerState:(_UIInputViewControllerState *)arg1;
- (void)_tearDownRemoteService;
@end

