//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MDMConfiguration : NSObject
{
    _Bool _memberQueuePinningRevocationCheckRequired;	// 8 = 0x8
    _Bool _memberQueueSignMessage;	// 9 = 0x9
    _Bool _isUserEnrollment;	// 10 = 0xa
    _Bool _memberQueueUseDevelopmentAPNS;	// 11 = 0xb
    int _memberQueueAccessRights;	// 12 = 0xc
    NSString *_memberQueueManagingProfileIdentifier;	// 16 = 0x10
    struct __SecIdentity *_memberQueueIdentity;	// 24 = 0x18
    NSArray *_memberQueueCheckInPinnedSecCertificateRefs;	// 32 = 0x20
    NSString *_memberQueueTopic;	// 40 = 0x28
    NSDictionary *_memberQueueOrganizationInfo;	// 48 = 0x30
    NSURL *_memberQueueServerURL;	// 56 = 0x38
    NSURL *_memberQueueCheckInURL;	// 64 = 0x40
    NSString *_enrollmentID;	// 72 = 0x48
    NSString *_personaID;	// 80 = 0x50
    NSString *_easEnrollmentID;	// 88 = 0x58
    NSString *_rmAccountID;	// 96 = 0x60
    NSString *_enrollmentMode;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_memberQueue;	// 112 = 0x70
    NSNumber *_memberQueuePollingInterval;	// 120 = 0x78
    NSDictionary *_memberQueueMDMOptions;	// 128 = 0x80
    NSString *_memberQueuePushMagic;	// 136 = 0x88
}

+ (id)sharedConfiguration;	// IMP=0x000000000000caff
- (void).cxx_destruct;	// IMP=0x000000000000e3cf
@property(retain, nonatomic) NSString *memberQueuePushMagic; // @synthesize memberQueuePushMagic=_memberQueuePushMagic;
@property(nonatomic) _Bool memberQueueUseDevelopmentAPNS; // @synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS;
@property(nonatomic) int memberQueueAccessRights; // @synthesize memberQueueAccessRights=_memberQueueAccessRights;
@property(retain, nonatomic) NSDictionary *memberQueueMDMOptions; // @synthesize memberQueueMDMOptions=_memberQueueMDMOptions;
@property(retain, nonatomic) NSNumber *memberQueuePollingInterval; // @synthesize memberQueuePollingInterval=_memberQueuePollingInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSString *enrollmentMode; // @synthesize enrollmentMode=_enrollmentMode;
@property(retain, nonatomic) NSString *rmAccountID; // @synthesize rmAccountID=_rmAccountID;
@property(retain, nonatomic) NSString *easEnrollmentID; // @synthesize easEnrollmentID=_easEnrollmentID;
@property(retain, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(retain, nonatomic) NSString *enrollmentID; // @synthesize enrollmentID=_enrollmentID;
@property(nonatomic) _Bool isUserEnrollment; // @synthesize isUserEnrollment=_isUserEnrollment;
@property(retain, nonatomic) NSURL *memberQueueCheckInURL; // @synthesize memberQueueCheckInURL=_memberQueueCheckInURL;
@property(retain, nonatomic) NSURL *memberQueueServerURL; // @synthesize memberQueueServerURL=_memberQueueServerURL;
@property(retain, nonatomic) NSDictionary *memberQueueOrganizationInfo; // @synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo;
@property(retain, nonatomic) NSString *memberQueueTopic; // @synthesize memberQueueTopic=_memberQueueTopic;
@property(nonatomic) _Bool memberQueueSignMessage; // @synthesize memberQueueSignMessage=_memberQueueSignMessage;
@property(nonatomic) _Bool memberQueuePinningRevocationCheckRequired; // @synthesize memberQueuePinningRevocationCheckRequired=_memberQueuePinningRevocationCheckRequired;
@property(retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs; // @synthesize memberQueueCheckInPinnedSecCertificateRefs=_memberQueueCheckInPinnedSecCertificateRefs;
@property(nonatomic) struct __SecIdentity *memberQueueIdentity; // @synthesize memberQueueIdentity=_memberQueueIdentity;
@property(retain, nonatomic) NSString *memberQueueManagingProfileIdentifier; // @synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier;
- (void)memberQueueForgetCurrentConfiguration;	// IMP=0x000000000000e022
- (_Bool)readConfigurationOutError:(id *)arg1;	// IMP=0x000000000000cc36
- (void)refreshDetailsFromDisk;	// IMP=0x000000000000cbc5
- (id)init;	// IMP=0x000000000000cb68

@end

