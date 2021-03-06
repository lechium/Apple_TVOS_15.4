//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, UIEvent;

@protocol _UITouchesEventRespondable <NSObject>
- (void)touchesEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)touchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

