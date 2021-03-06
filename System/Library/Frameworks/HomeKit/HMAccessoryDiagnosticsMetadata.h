//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface HMAccessoryDiagnosticsMetadata : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_snapshotPath;	// 8 = 0x8
    NSDictionary *_urlParameters;	// 16 = 0x10
    NSURL *_privacyPolicyURL;	// 24 = 0x18
    NSURL *_uploadDestination;	// 32 = 0x20
    NSNumber *_consentVersion;	// 40 = 0x28
    NSNumber *_uploadType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001be8f1
- (void).cxx_destruct;	// IMP=0x00000000001be89d
@property(readonly) NSNumber *uploadType; // @synthesize uploadType=_uploadType;
@property(readonly) NSNumber *consentVersion; // @synthesize consentVersion=_consentVersion;
@property(readonly) NSURL *uploadDestination; // @synthesize uploadDestination=_uploadDestination;
@property(readonly) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, copy) NSDictionary *urlParameters; // @synthesize urlParameters=_urlParameters;
@property(readonly) NSString *snapshotPath; // @synthesize snapshotPath=_snapshotPath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001be81a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001be69a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001be4db
- (id)attributeDescriptions;	// IMP=0x00000000001be252
- (id)initWithSnapshotPath:(id)arg1 urlParameters:(id)arg2 privacyPolicyURL:(id)arg3 uploadDestination:(id)arg4 consentVersion:(id)arg5 uploadType:(id)arg6;	// IMP=0x00000000001be115

@end

