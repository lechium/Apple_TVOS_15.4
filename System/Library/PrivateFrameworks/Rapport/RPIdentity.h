//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface RPIdentity : NSObject <NSSecureCoding>
{
    _Bool _userAdded;	// 8 = 0x8
    _Bool _disabled;	// 9 = 0x9
    _Bool _present;	// 10 = 0xa
    int _type;	// 12 = 0xc
    unsigned int _revisionID;	// 16 = 0x10
    NSArray *_accessGroups;	// 24 = 0x18
    NSString *_accountID;	// 32 = 0x20
    NSDictionary *_acl;	// 40 = 0x28
    NSString *_contactID;	// 48 = 0x30
    NSDate *_dateAdded;	// 56 = 0x38
    NSDate *_dateRemoved;	// 64 = 0x40
    NSData *_deviceIRKData;	// 72 = 0x48
    NSData *_edPKData;	// 80 = 0x50
    NSData *_edSKData;	// 88 = 0x58
    unsigned long long _featureFlags;	// 96 = 0x60
    NSUUID *_homeKitUserIdentifier;	// 104 = 0x68
    NSString *_identifier;	// 112 = 0x70
    NSString *_idsDeviceID;	// 120 = 0x78
    NSString *_mediaRemoteID;	// 128 = 0x80
    NSString *_mediaRouteID;	// 136 = 0x88
    NSString *_model;	// 144 = 0x90
    NSString *_name;	// 152 = 0x98
    NSString *_sendersKnownAlias;	// 160 = 0xa0
    NSDate *_dateAcknowledged;	// 168 = 0xa8
    NSDate *_dateRequested;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000395d5
+ (id)nullIdentity;	// IMP=0x0000000000039580
- (void).cxx_destruct;	// IMP=0x000000000003d296
@property(nonatomic) unsigned int revisionID; // @synthesize revisionID=_revisionID;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSDate *dateRequested; // @synthesize dateRequested=_dateRequested;
@property(copy, nonatomic) NSDate *dateAcknowledged; // @synthesize dateAcknowledged=_dateAcknowledged;
@property(nonatomic) _Bool userAdded; // @synthesize userAdded=_userAdded;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *sendersKnownAlias; // @synthesize sendersKnownAlias=_sendersKnownAlias;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *mediaRouteID; // @synthesize mediaRouteID=_mediaRouteID;
@property(copy, nonatomic) NSString *mediaRemoteID; // @synthesize mediaRemoteID=_mediaRemoteID;
@property(copy, nonatomic) NSString *idsDeviceID; // @synthesize idsDeviceID=_idsDeviceID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSUUID *homeKitUserIdentifier; // @synthesize homeKitUserIdentifier=_homeKitUserIdentifier;
@property(nonatomic) unsigned long long featureFlags; // @synthesize featureFlags=_featureFlags;
@property(copy, nonatomic) NSData *edSKData; // @synthesize edSKData=_edSKData;
@property(copy, nonatomic) NSData *edPKData; // @synthesize edPKData=_edPKData;
@property(copy, nonatomic) NSData *deviceIRKData; // @synthesize deviceIRKData=_deviceIRKData;
@property(copy, nonatomic) NSDate *dateRemoved; // @synthesize dateRemoved=_dateRemoved;
@property(copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property(copy, nonatomic) NSDictionary *acl; // @synthesize acl=_acl;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSArray *accessGroups; // @synthesize accessGroups=_accessGroups;
- (_Bool)verifySignaturePtr:(const void *)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000003cf32
- (_Bool)verifySignature:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003ce58
- (_Bool)signDataPtr:(const void *)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char [64])arg3 error:(id *)arg4;	// IMP=0x000000000003ccfa
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003cc1a
- (_Bool)verifyAuthTagPtr:(const void *)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id *)arg6;	// IMP=0x000000000003c9e8
- (_Bool)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id *)arg4;	// IMP=0x000000000003c90c
- (id)authTagForData:(id)arg1 type:(int)arg2 error:(id *)arg3;	// IMP=0x000000000003c71e
- (unsigned int)updateWithRPMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003c280
- (unsigned int)updateWithKeychainItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003b07e
- (unsigned int)compareWithRPIdentity:(id)arg1;	// IMP=0x000000000003a6e7
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000039e07
- (id)description;	// IMP=0x0000000000039df0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039b7f
- (id)initWithType:(int)arg1;	// IMP=0x0000000000039a68
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000395dd

@end

