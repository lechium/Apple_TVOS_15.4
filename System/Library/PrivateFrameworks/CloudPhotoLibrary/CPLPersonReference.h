//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLReference-Protocol.h>
#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference>
{
    NSDictionary *_extraProperties;	// 8 = 0x8
    NSString *_personIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005ae7d
- (void).cxx_destruct;	// IMP=0x000000000004712d
@property(copy, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
@property(copy, nonatomic) NSDictionary *extraProperties; // @synthesize extraProperties=_extraProperties;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046f51
- (id)serializedString;	// IMP=0x0000000000046ce2
- (id)initWithSerializedString:(id)arg1;	// IMP=0x0000000000046915
- (id)init;	// IMP=0x00000000000468e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a208
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005a0b1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059fbe
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x00000000000651db
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x00000000000650b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

