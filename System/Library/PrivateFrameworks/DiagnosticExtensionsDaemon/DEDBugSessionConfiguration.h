//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class DEDNotifierConfiguration, NSDictionary, NSNumber, NSSet, NSString;

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying, DEDSecureArchiving>
{
    NSSet *_requestedCapabilities;	// 8 = 0x8
    _Bool _allowsCellularUpload;	// 16 = 0x10
    _Bool _cloudkitUseDevelopmentEnvironment;	// 17 = 0x11
    long long _finishingMove;	// 24 = 0x18
    long long _notifyingMove;	// 32 = 0x20
    double _bugSessionStartTimeout;	// 40 = 0x28
    NSString *_seedingDeviceToken;	// 48 = 0x30
    long long _seedingSubmissionID;	// 56 = 0x38
    long long _seedingSubmissionType;	// 64 = 0x40
    long long _seedingEnvironment;	// 72 = 0x48
    NSString *_seedingHost;	// 80 = 0x50
    NSNumber *_radarProblemID;	// 88 = 0x58
    NSString *_radarAuthToken;	// 96 = 0x60
    NSString *_cloudkitContainer;	// 104 = 0x68
    NSDictionary *_cloudkitData;	// 112 = 0x70
    DEDNotifierConfiguration *_notifierConfiguration;	// 120 = 0x78
}

+ (id)secureUnarchiveWithData:(id)arg1;	// IMP=0x000000000001e0cb
+ (id)archivedClasses;	// IMP=0x000000000001df01
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001cc23
- (void).cxx_destruct;	// IMP=0x000000000001e3c0
@property(retain) DEDNotifierConfiguration *notifierConfiguration; // @synthesize notifierConfiguration=_notifierConfiguration;
@property(retain) NSDictionary *cloudkitData; // @synthesize cloudkitData=_cloudkitData;
@property _Bool cloudkitUseDevelopmentEnvironment; // @synthesize cloudkitUseDevelopmentEnvironment=_cloudkitUseDevelopmentEnvironment;
@property(retain) NSString *cloudkitContainer; // @synthesize cloudkitContainer=_cloudkitContainer;
@property(retain) NSString *radarAuthToken; // @synthesize radarAuthToken=_radarAuthToken;
@property(retain) NSNumber *radarProblemID; // @synthesize radarProblemID=_radarProblemID;
@property(retain) NSString *seedingHost; // @synthesize seedingHost=_seedingHost;
@property long long seedingEnvironment; // @synthesize seedingEnvironment=_seedingEnvironment;
@property long long seedingSubmissionType; // @synthesize seedingSubmissionType=_seedingSubmissionType;
@property long long seedingSubmissionID; // @synthesize seedingSubmissionID=_seedingSubmissionID;
@property(retain) NSString *seedingDeviceToken; // @synthesize seedingDeviceToken=_seedingDeviceToken;
@property double bugSessionStartTimeout; // @synthesize bugSessionStartTimeout=_bugSessionStartTimeout;
@property _Bool allowsCellularUpload; // @synthesize allowsCellularUpload=_allowsCellularUpload;
@property long long notifyingMove; // @synthesize notifyingMove=_notifyingMove;
@property long long finishingMove; // @synthesize finishingMove=_finishingMove;
- (id)secureArchive;	// IMP=0x000000000001dffa
- (_Bool)isEqualToConfiguration:(id)arg1;	// IMP=0x000000000001d5bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d556
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d4f7
- (id)requestedCapabilities;	// IMP=0x000000000001d49c
- (void)requestCapabilities:(id)arg1;	// IMP=0x000000000001d331
- (void)requestCapabilitiesSet:(id)arg1;	// IMP=0x000000000001d2ef
@property(readonly) NSString *requestedCapabilitiesString;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001cf4f
- (id)init;	// IMP=0x000000000001cf0d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001cc2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

