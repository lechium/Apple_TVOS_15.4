//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMMessageEntryProvider-Protocol.h>

@class ICInAppMessageManager, NSString;
@protocol IAMMessageEntryProviderDelegate;

@interface IAMICMessageEntryProvider : NSObject <IAMMessageEntryProvider>
{
    ICInAppMessageManager *_iTunesCloudIAMManager;	// 8 = 0x8
    id <IAMMessageEntryProviderDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000044e1
@property(nonatomic) __weak id <IAMMessageEntryProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMessagesDidChangeNotification;	// IMP=0x00000000000043eb
- (void)removeApplicationBadgeForBundleIdentifier:(id)arg1 fromPresentedMessageEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000043d5
- (void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000043bf
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000043a9
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004198
- (void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004182
- (id)init;	// IMP=0x00000000000040c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

