//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SeymourClient/RadiosPreferencesDelegate-Protocol.h>

@class RadiosPreferences;
@protocol OS_dispatch_queue, SMCAirplaneModeObserverDelegate;

@interface SMCAirplaneModeObserver : NSObject <RadiosPreferencesDelegate>
{
    id <SMCAirplaneModeObserverDelegate> _delegate;	// 8 = 0x8
    RadiosPreferences *_radiosPreferences;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000002385
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) RadiosPreferences *radiosPreferences; // @synthesize radiosPreferences=_radiosPreferences;
@property(nonatomic) __weak id <SMCAirplaneModeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)airplaneModeChanged;	// IMP=0x00000000000022ac
- (_Bool)enabled;	// IMP=0x0000000000002296
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000021fd

@end
