//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol _HMTelevisionProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMTelevisionProfile
{
    _Bool _mediaSourceDisplayOrderModifiable;	// 16 = 0x10
    NSArray *_mediaSourceDisplayOrder;	// 24 = 0x18
    id <_HMTelevisionProfileDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000227a1c
@property __weak id <_HMTelevisionProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) _Bool mediaSourceDisplayOrderModifiable; // @synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable;
- (void)_handleSourceDisplayOrderUpdated:(id)arg1;	// IMP=0x0000000000227827
- (void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1;	// IMP=0x0000000000227705
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000227334
- (id)messageReceiveQueue;	// IMP=0x00000000002272e4
- (id)messageDestination;	// IMP=0x000000000022727b
- (id)messageTargetUUID;	// IMP=0x000000000022722b
- (_Bool)isMediaSourceDisplayOrderModifiable;	// IMP=0x0000000000227139
@property(retain) NSArray *mediaSourceDisplayOrder; // @synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder;
- (void)_registerNotificationHandlers;	// IMP=0x0000000000226e57
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;	// IMP=0x0000000000226d04

@end

