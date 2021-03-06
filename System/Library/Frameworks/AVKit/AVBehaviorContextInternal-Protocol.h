//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVBehaviorContext-Protocol.h>

@protocol AVBehavior;

@protocol AVBehaviorContextInternal <AVBehaviorContext>
@property(nonatomic) __weak id behavior;
- (void)didRemoveBehavior:(id <AVBehavior>)arg1;
- (void)willRemoveBehavior:(id <AVBehavior>)arg1;
- (void)didAddBehavior:(id <AVBehavior>)arg1;
- (void)willAddBehavior:(id <AVBehavior>)arg1;
- (id)initWithAVKitOwner:(id)arg1;
@end

