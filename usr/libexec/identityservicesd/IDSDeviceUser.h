//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSDeviceUser : NSObject
{
    NSString *_deviceUDID;	// 8 = 0x8
    NSString *_serverUserID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000064f990
- (void).cxx_destruct;	// IMP=0x002000000064fe80
@property(retain, nonatomic) NSString *serverUserID; // @synthesize serverUserID=_serverUserID;
@property(retain, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000064fbf0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000064fb10
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000064f9b0
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x001000000064f930
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x001000000064f8d0
- (_Bool)isEqualToDeviceUser:(id)arg1;	// IMP=0x001000000064f6a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000064f600
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x001000000064f440
- (id)storageIdentifier;	// IMP=0x001000000064f410
- (id)unprefixedIdentifier;	// IMP=0x001000000064f2b0
- (id)realmPrefixedIdentifier;	// IMP=0x001000000064f0b0
- (long long)realm;	// IMP=0x001000000064f090
- (id)uniqueIdentifier;	// IMP=0x001000000064f010
- (id)deviceUserWithUpdatedServerUserID:(id)arg1;	// IMP=0x001000000064ef60
- (id)initWithUDID:(id)arg1;	// IMP=0x001000000064eea0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

