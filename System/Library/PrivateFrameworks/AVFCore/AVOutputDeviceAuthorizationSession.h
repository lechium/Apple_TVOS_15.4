//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDeviceAuthorizationSessionInternal;
@protocol AVOutputDeviceAuthorizationSessionDelegate;

@interface AVOutputDeviceAuthorizationSession : NSObject
{
    AVOutputDeviceAuthorizationSessionInternal *_ivars;	// 8 = 0x8
}

+ (id)sharedAuthorizationSession;	// IMP=0x000000000009e758
+ (void)initialize;	// IMP=0x000000000009e6f1
- (void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1;	// IMP=0x000000000009ed99
- (_Bool)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;	// IMP=0x000000000009ebd0
- (void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2;	// IMP=0x000000000009e9e5
@property __weak id <AVOutputDeviceAuthorizationSessionDelegate> delegate;
- (id)impl;	// IMP=0x000000000009e8a2
- (void)dealloc;	// IMP=0x000000000009e83f
- (id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1;	// IMP=0x000000000009e785

@end

