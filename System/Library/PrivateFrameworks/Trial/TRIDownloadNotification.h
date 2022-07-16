//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRIDownloadNotificationProtocol-Protocol.h>

@class NSError, NSString;

@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol>
{
    unsigned long long _type;	// 8 = 0x8
    unsigned long long _progress;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)_notificationWithState:(unsigned long long)arg1;	// IMP=0x000000000002c7b4
+ (id)_descriptionForErrorCode:(unsigned long long)arg1;	// IMP=0x000000000002c75d
+ (id)_dispatchQueue;	// IMP=0x000000000002c71c
+ (id)notificationNameForKey:(id)arg1;	// IMP=0x000000000002c6b6
+ (_Bool)_notifyDownloadUpdateForKey:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x000000000002c575
+ (id)immediateDownloadNotificationKeyForNamespaceNames:(id)arg1;	// IMP=0x000000000002c36f
+ (_Bool)_errorIsInsufficientDiskSpaceCloudKitError:(id)arg1;	// IMP=0x000000000002c2d9
+ (_Bool)notifyDownloadStalledForKey:(id)arg1 withProgress:(unsigned long long)arg2;	// IMP=0x000000000002c29c
+ (_Bool)notifyDownloadFailedForKey:(id)arg1 withCloudKitError:(id)arg2;	// IMP=0x000000000002c011
+ (_Bool)notifyDownloadFailedForKey:(id)arg1 withError:(unsigned long long)arg2;	// IMP=0x000000000002bfea
+ (_Bool)notifyDownloadCompletedForKey:(id)arg1;	// IMP=0x000000000002bfbe
+ (_Bool)notifyDownloadProgressForKey:(id)arg1 withProgress:(unsigned long long)arg2;	// IMP=0x000000000002bf8f
+ (void)deregisterNotificationWithToken:(id)arg1;	// IMP=0x000000000002bf3c
+ (id)registerDownloadNotificationForKey:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bcc8
- (void).cxx_destruct;	// IMP=0x000000000002c99e
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long progressMaxValue;
- (id)initWithType:(unsigned long long)arg1 progress:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x000000000002bc3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

