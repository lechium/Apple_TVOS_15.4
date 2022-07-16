//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject
{
    _Bool _shouldSyncToCloud;	// 8 = 0x8
    id <PKPaymentOptionsSynchronizationDelegate> _delegate;	// 16 = 0x10
}

+ (_Bool)shouldSyncToCloud;	// IMP=0x0000000000302153
- (void).cxx_destruct;	// IMP=0x0000000000302338
@property(nonatomic) __weak id <PKPaymentOptionsSynchronizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldSyncToCloud; // @synthesize shouldSyncToCloud=_shouldSyncToCloud;
- (void)_localeDidChangeNotification:(id)arg1;	// IMP=0x00000000003022ed
- (void)_updateSynchronizationBehavior;	// IMP=0x000000000030223a
- (id)init;	// IMP=0x0000000000302199

@end

