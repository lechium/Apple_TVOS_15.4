//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString, PETEventTracker2;
@protocol OS_dispatch_queue;

@interface PETService : NSObject
{
    PETEventTracker2 *_tracker;	// 8 = 0x8
    _Bool _isInternalDevice;	// 16 = 0x10
    IDSService *_idsService;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_idsQueue;	// 32 = 0x20
}

+ (void)clearAllLogs;	// IMP=0x002000000000e09a
+ (void)updateMobileAssetMetadataWithXPCActivity:(id)arg1;	// IMP=0x001000000000df21
- (void).cxx_destruct;	// IMP=0x002000000000db57
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // @synthesize idsQueue=_idsQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000000d840
- (void)_uploadToFeedbackLoggerWithUpload:(id)arg1;	// IMP=0x001000000000d461
- (_Bool)_writeUploadForTransparency:(id)arg1;	// IMP=0x001000000000d459
- (void)uploadToParsec;	// IMP=0x001000000000d2f0
- (id)init;	// IMP=0x001000000000d19f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

