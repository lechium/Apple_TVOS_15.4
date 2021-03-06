//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SDAirDropClassroomTransferManager, SDAirDropListener, SDAirDropTransferManager;

__attribute__((visibility("hidden")))
@interface SDAirDropReceiveManager : NSObject
{
    SDAirDropListener *_listener;	// 8 = 0x8
    NSMutableDictionary *_transferIdentifierToNetworkOperation;	// 16 = 0x10
    SDAirDropTransferManager *_transferManager;	// 24 = 0x18
    SDAirDropClassroomTransferManager *_classroomTransferManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009010e
@property(readonly, copy) NSString *description;
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3;	// IMP=0x0010000000090015
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2 withDestinationURL:(id)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(_Bool)arg4;	// IMP=0x001000000008fe50
- (void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x001000000008f9c1
- (void)listener:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x001000000008f95f
- (void)listener:(id)arg1 informationDidChange:(id)arg2;	// IMP=0x001000000008f959
- (void)listener:(id)arg1 didReceiveNewRequest:(id)arg2;	// IMP=0x001000000008f890
- (void)stop;	// IMP=0x001000000008f819
- (void)start;	// IMP=0x001000000008f76a
- (id)init;	// IMP=0x001000000008f6c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

