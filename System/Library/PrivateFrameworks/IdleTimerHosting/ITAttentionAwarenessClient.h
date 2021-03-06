//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol ITAttentionAwarenessClientDelegate;

@interface ITAttentionAwarenessClient : NSObject
{
    struct os_unfair_lock_s _accessLock;	// 8 = 0x8
    _Bool _access_enabled;	// 12 = 0xc
    AWAttentionAwarenessClient *_access_attentionAwarenessClient;	// 16 = 0x10
    id <ITAttentionAwarenessClientDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000002ce3
@property(nonatomic) __weak id <ITAttentionAwarenessClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWAttentionAwarenessClient *_access_attentionAwarenessClient; // @synthesize _access_attentionAwarenessClient;
- (void)_handleAttentionAwarenessEvent:(id)arg1;	// IMP=0x000000000000296f
- (void)_access_suspend;	// IMP=0x00000000000027ae
- (void)_access_resume;	// IMP=0x0000000000002605
- (void)setConfiguration:(id)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000000000257b
@property(retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_access_enabled;
- (id)_initWithCalloutQueue:(id)arg1 attentionAwarenessClient:(id)arg2;	// IMP=0x00000000000022af
- (id)initWithCalloutQueue:(id)arg1;	// IMP=0x000000000000224b
- (id)init;	// IMP=0x00000000000021c4

@end

